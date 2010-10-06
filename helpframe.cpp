#include "helpframe.h"
#include "ui_helpframe.h"


HelpFrame::HelpFrame(QWidget *parent) :
    QFrame(parent),
    m_ui(new Ui::HelpFrame)
{
    m_ui->setupUi(this);
    setWidgets();
    m_ui->webView->load(QUrl("http://simgrid.gforge.inria.fr/doc/index.html"));
    reader = new XMLReader("SGindex.xml");
    this->itemsModel = new QStandardItemModel;
    m_ui->listView->setModel(itemsModel);
    populateListView();
    setConnexions();
}

HelpFrame::~HelpFrame()
{
    delete m_ui;
}

void HelpFrame::setConnexions()
{
    connect(m_ui->listView,SIGNAL(clicked(QModelIndex)),this,SLOT(setLink(QModelIndex)));
    connect(m_ui->lineEdit,SIGNAL(textEdited(QString)),this,SLOT(filter(QString)));
}

void HelpFrame::setWidgets()
{
    hLayout = new QHBoxLayout;
    vLayout = new QVBoxLayout;
    keyLayout = new QHBoxLayout;
    frameLayout = new QVBoxLayout;

    keyLayout->addWidget(m_ui->label);
    keyLayout->addWidget(m_ui->lineEdit);
    keyLayout->addWidget(m_ui->pushButton);

    m_ui->listView->setMaximumWidth(250);

    vLayout->addWidget(m_ui->webView);
    m_ui->scrollArea->setLayout(vLayout);

    hLayout->addWidget(m_ui->listView);
    hLayout->addWidget(m_ui->scrollArea);

    frameLayout->addLayout(keyLayout);
    frameLayout->addLayout(hLayout);

    this->setLayout(frameLayout);

}


void HelpFrame::populateListView()
{

    //Populate from the itemList
    for(int i=0;i< reader->itemList.size();i++)
    {
        XMLReader::Hitem *tmp  = reader->itemList.at(i);
        this->itemsModel->setItem(i,new QStandardItem(tmp->label));
    }

}

/*
 *
 *  SLOTS
 *
 */

void HelpFrame::setLink(QModelIndex index)
{
    QString label= this->itemsModel->item(index.row())->text();
/* Since the list could me resized depending on the keyword
*  it's better to search by name, than by index
*
*/
    XMLReader::Hitem *tmp;
    foreach(XMLReader::Hitem* h,reader->itemList)
    {
        if(h->label == label )
            tmp = h;
    }
    m_ui->webView->load(QUrl(tmp->link));
}

void HelpFrame::filter(QString keyword)
{
    int i=0;
    this->itemsModel->clear();
    foreach(XMLReader::Hitem* h,reader->itemList)
        if(h->label.contains(keyword,Qt::CaseInsensitive))
        {
            this->itemsModel->setItem(i,new QStandardItem(h->label));
            i++;
        }
}
