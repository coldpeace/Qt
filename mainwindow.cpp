#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setMainFrame();
    setToolBarActions();
    setConnections();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setMainFrame()
{
    this->sgFrame = new SGFrame;
    this->hFrame = new HelpFrame;
    this->display = new displayer;
    mainLayout = new QVBoxLayout;
    mainLayout->addWidget(this->sgFrame);
    mainLayout->addWidget(this->hFrame);
    //set helpFrame invisible
    this->hFrame->setVisible(false);

    ui->centralWidget->setLayout(mainLayout);
}

void MainWindow::setToolBarActions()
{
    ui->mainToolBar->addAction(ui->actionNew);
    ui->mainToolBar->addAction(ui->actionOpen);
    ui->mainToolBar->addAction(ui->actionExit);
    ui->mainToolBar->addAction(ui->actionRun);
    ui->mainToolBar->addAction(ui->actionOptions);
    ui->mainToolBar->addAction(ui->actionAbout_Simgrid);

    //set actionAbout_Simgrid checkable
    ui->actionAbout_Simgrid->setCheckable(true);
    //set runAction enabled to false till the project is set
    ui->actionRun->setEnabled(false);
}

void MainWindow::setConnections()
{
    connect(ui->actionNew,SIGNAL(triggered()),this,SLOT(newProject()));
    connect(ui->actionOpen,SIGNAL(triggered()),this,SLOT(openProject()));
    connect(ui->actionExit,SIGNAL(triggered()),this,SLOT(quitProject()));
    connect(ui->actionRun,SIGNAL(triggered()),this,SLOT(runProject()));
    connect(ui->actionOptions,SIGNAL(triggered()),this,SLOT(optionsProject()));
    connect(ui->actionAbout_Simgrid,SIGNAL(triggered()),this,SLOT(aboutSG()));
}

void MainWindow::newProject()
{
    wizard = new Wizard(this);
    wizard->show();
    connect(this->wizard,SIGNAL(projectSaved(QString)),this,SLOT(fillTree(QString)));
    connect(this->wizard,SIGNAL(projectSaved(QString)),this,SLOT(enableRun(QString)));

}

void MainWindow::openProject()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::DirectoryOnly);
    dialog.exec();
    sgFrame->setDir(dialog.selectedFiles()[0]);
}

void MainWindow::quitProject()
{

}

void MainWindow::runProject()
{

    runProcess= new QProcess;
    connect(runProcess,SIGNAL(readyReadStandardOutput()),this,SLOT(printOutput()));
    //connect(runProcess,SIGNAL(started()),this,SLOT(printOutput()));
    //runProcess->setStandardOutputFile(this->dirPath +"/logow.txt");
    //QString bin = this->dirPath+"/"+this->projectName;
    //runProcess->start("sh -c",QStringList()<< bin);//("sh",QStringList()<<"-c"<<this->dirPath+"/"+this->projectName);
    //QString program = "ls -l";//"sh -c /home/mehdi/work/test/test >> ";
    runProcess->startDetached("/home/mehdi/work/test/test");

    //QMessageBox::information(this,"commande",this->dirPath+"/"+this->projectName,QMessageBox::Ok);
    //runProcess->start("ls",QStringList()<<"-l");

}

void MainWindow::optionsProject()
{
    setting = new Setting;
    setting->show();
}

void MainWindow::aboutSG()
{
 if(ui->actionAbout_Simgrid->isChecked())
    setHelpFrame();
 else
    setSGFrame();
}

void MainWindow::setHelpFrame()
{
    hFrame->setVisible(true);
    sgFrame->setVisible(false);
}

void MainWindow::setSGFrame()
{
    sgFrame->setVisible(true);
    hFrame->setVisible(false);
}

void MainWindow::fillTree(QString path)
{
    this->sgFrame->setDir(path);
    this->sgFrame->fillTabs(path);
}

void MainWindow::enableRun(QString path)
{
    this->dirPath = path;
    this->projectName = path.split("/").last();
    ui->actionRun->setEnabled(true);
}

void MainWindow::printOutput()
{
    display->print(runProcess->readAllStandardOutput());
    //QMessageBox::information(this,"print",runProcess->readAllStandardOutput(),QMessageBox::Ok);
    //execProcess = new QProcess;
    //execProcess->setStandardOutputFile(this->dirPath +"/logow.txt");
    // execProcess->start("sh",QStringList()<<"-c"<<this->dirPath+"/"+this->projectName);
}

