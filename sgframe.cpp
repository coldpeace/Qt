#include "sgframe.h"
#include "ui_sgframe.h"

SGFrame::SGFrame(QWidget *parent) :
    QFrame(parent),
    m_ui(new Ui::SGFrame)
{
    m_ui->setupUi(this);
    setWidgets();
    setConnexions();

}

SGFrame::~SGFrame()
{
    delete m_ui;
}

void SGFrame::changeEvent(QEvent *e)
{
    QFrame::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void SGFrame::setConnexions()
{
    connect(m_ui->treeView,SIGNAL(clicked(QModelIndex)),this,SLOT(focusOn(QModelIndex)));
}

void SGFrame::setWidgets()
{
    hLayout = new QHBoxLayout;
    vLayout = new QVBoxLayout;
    //setLayout to Tab
    QVBoxLayout *boxLayout = new QVBoxLayout;
    boxLayout->addWidget(m_ui->webView);
    m_ui->webView->setMaximumHeight(700);
    m_ui->webView->load(QUrl("http://simgrid.gforge.inria.fr/"));
    m_ui->tabWidget->setLayout(boxLayout);
    m_ui->tabWidget->setTabText(0,"Welcome to Simgrid");
    //resize treeView
    m_ui->treeView->setMaximumWidth(250);

    //resize dockwidget
    m_ui->dockWidget->setMaximumHeight(150);
    //Layout widget
    vLayout->addWidget(m_ui->tabWidget);
    vLayout->addWidget(m_ui->dockWidget);

    hLayout->addWidget(m_ui->treeView);
    hLayout->addLayout(vLayout);

    this->setLayout(hLayout);

}

void SGFrame::setDir(const QString& path)
{
    //Set QDirModel to the treeWidget
    dirModel = new QDirModel();
    m_ui->treeView->setModel(dirModel);
    m_ui->treeView->setRootIndex(dirModel->index(path));
    pathDir = path;
}

void SGFrame::fillTabs(const QString& path)
{
    QDir dir(path);
    QString fullPath;
    QStringList list = dir.entryList(QDir::Files);
    m_ui->tabWidget->clear();
    m_ui->webView->close();
    foreach(QString Sgfile,list)
    {
        fullPath = path+"/"+Sgfile;
        QFile file(fullPath);
        QFileInfo info(file);
        //show only .c and .xml files
        if(info.suffix()=="c" || info.suffix()=="xml")
        {
            if(!file.open(QIODevice::ReadWrite))
            {
                return;
            }
            QTextStream output(&file);
            myTextEdit *edit = new myTextEdit(fullPath);
            edit->setPlainText(output.readAll());
            m_ui->tabWidget->addTab(edit,Sgfile);//you can add icons!!
        }
    }

}

void SGFrame::focusOn(QModelIndex index)
{
    QString fileSelected = dirModel->fileName(index);
    m_ui->tabWidget->setCurrentIndex(index.row());
}

void SGFrame::saveText(int currentIndex)
{
    QString name = m_ui->tabWidget->tabText(currentIndex);
    QWidget *edit = m_ui->tabWidget->widget(currentIndex);
}


void SGFrame::setOutput(const QString &text)
{
    QTextEdit *txt = new QTextEdit(m_ui->dockWidget);
    QVBoxLayout *dockLayout = new QVBoxLayout;
    dockLayout->addWidget(txt);
    m_ui->dockWidget->setLayout(dockLayout);

}
