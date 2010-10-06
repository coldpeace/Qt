#include "wizard.h"
#include "ui_wizard.h"

Wizard::Wizard(QWidget *parent) :
    QWizard(parent),
    m_ui(new Ui::Wizard)
{
    m_ui->setupUi(this);
    this->setFixedSize(600,500);
    this->projectDir = new QDir;
    setConnexions();
    QFile test("/home/mehdi/testoun");
}

Wizard::~Wizard()
{
    delete m_ui;
}

void Wizard::setConnexions()
{
    connect(m_ui->bypassCheck,SIGNAL(clicked()),this,SLOT(bypassXML()));
    connect(this,SIGNAL(accepted()),this,SLOT(createProject())); // Finish pushButton
    connect(m_ui->browseButton,SIGNAL(clicked()),SLOT(setDirectory()));
    connect(m_ui->projectNameEdit,SIGNAL(textEdited(QString)),this,SLOT(editText(QString)));
}

void Wizard::changeEvent(QEvent *e)
{
    QWizard::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Wizard::setPages()
{


}

void Wizard::sourceFileDefault()
{
    QFile *file= new QFile(directory+"/"+projectName+"/"+sourceFile);
    if( !file->open(QIODevice::WriteOnly) )
    {
        return;
    }

    QTextStream input(file);
  /*  input<< "#include <stdio.h>"<<endl;
    input << "#include \"msg/msg.h\""<<endl;
    input << "#include \"xbt/sysdep.h\""<<endl;
    input << "// Create a log channel to have nice outputs."<<endl;
    input << "#include \"xbt/log.h\""<<endl;
    input << "#include \"xbt/asserts.h\""<<endl;
    input << "XBT_LOG_NEW_DEFAULT_CATEGORY(msg_test,\"Messages specific for this msg example\");"<<endl<<endl<<endl;*/
    file->close();
    srcFiles.append(file);
    return;
}


void Wizard::platformFileDefault()
{
    QFile *file = new QFile(directory+"/"+projectName+"/"+platformFile);
    if( !file->open(QIODevice::WriteOnly) )
    {
        return;
    }

    QTextStream input(file);
    input<< "<?xml version='1.0'?>"<<endl;
    input<< "<!DOCTYPE platform SYSTEM \"simgrid.dtd\">"<<endl;
    input<< "<platform version=\"2\">"<<endl;
    input<< "</platform>"<<endl;
    file->close();
    xmlFiles.append(file);
    return;
}

void Wizard::deployFileDefault()
{
    QFile *file = new QFile(directory+"/"+projectName+"/"+deployFile);
    if( !file->open(QIODevice::WriteOnly) )
    {
        return;
    }

    QTextStream input(file);
    input<< "<?xml version='1.0'?>"<<endl;
    input<< "<!DOCTYPE platform SYSTEM \"simgrid.dtd\">"<<endl;
    input<< "<platform version=\"2\">"<<endl;
    input<< "</platform>"<<endl;
    file->close();
    xmlFiles.append(file);
    return;
}

void Wizard::setMakeFile()
{
    QFile file(directory+"/"+projectName+"/Makefile");
    if( !file.open(QIODevice::WriteOnly) )
    {
        return;
    }

    QStringList fileSources;
    QString main;
    foreach(QFile* src,srcFiles)
    {
        QFileInfo info(*src);
        fileSources.append(info.fileName());
    }

    main = fileSources.at(0);
    QTextStream input(&file);

    QString headers = "## Variable declarations\n"
                      "\nPROJECT_NAME= masterslave_mailbox\n"
                      "\nDISTDIR= "+this->projectName+"\n"

                      "# Set the GRID_ROOT environment variable to the path under which you installed SimGrid\n"
                      "# Compilation will fail if you don't do so\n"
                      "GRID_ROOT?= $(shell if [ -e /usr/local/lib/libsimgrid.so ] ; then echo /usr/local; else  echo \"\"<<<< SIMGRID undefined !!! >>>>\\""; fi)\n"

                      "# You can fiddle the following to make it fit your taste\n"
                      "INCLUDES = -I$(GRID_ROOT)/include\n"
                      "CFLAGS ?= -O3 -w -g -Wall\n"
                      "LIBS_SIM = -lm -L$(GRID_ROOT)/lib/ -lsimgrid\n"
                      "LIBS =\n";



    QString sources = "SRC_FILES = ";
    foreach(QString name,fileSources)
    {
        sources.append(name+"\t");
    }

    sources += "\nOBJ_FILES = $(patsubst %.c,%.o,$(SRC_FILES))\n"
               "BIN_FILES = "+ this->projectName +"\n";


    QString rules = "## By default, build all the binaries\n"
                    "all: $(BIN_FILES)\n"

                    "## Generate the binaries\n"
                    +
                    this->projectName+": "+main.split(".").at(0)+".o $(OBJ_FILES)\n"
                    +
                           "\t$(CC) $(INCLUDES) $(DEFS) $(CFLAGS) $^ $(LIBS_SIM) $(LIBS) $(LDADD) -o $@ \n"

                    "%: %.o\n"
                            "\t$(CC) $(INCLUDES) $(DEFS) $(CFLAGS) $^ $(LIBS) $(LDADD) -o $@ \n"

                    "%.o: %.c\n"
                            "\t$(CC) $(INCLUDES) $(DEFS) $(CFLAGS) -c -o $@ $< \n";

    QString cleanups ="## Rules for tarballs and cleaning\n"
                      "DIST_FILES= $(EXTRA_DIST)  $(PRECIOUS_C_FILES) Makefile\n"
                      "distdir: $(DIST_FILES)\n"
                      "\trm -rf $(DISTDIR) mkdir -p $(DISTDIR)	cp $^ $(DISTDIR)\n"

                      "\tdist: clean distdir tar c $(DISTDIR) | gzip -c9 > $(DISTDIR).tar.gz\n"

                      "clean:\n"
                      "\trm -rf $(DISTDIR) *.o\n"

                      ".SUFFIXES:\n"
                      ".PHONY : clean";

    input<< headers << endl;
    input<< sources << endl;
    input<< rules << endl;
    input<< cleanups << endl;
    file.close();
    return;
}

/**
  * SLOTS
  */
void Wizard::bypassXML()
{
    if(m_ui->bypassCheck->isChecked())
        {
        m_ui->platformEdit->setEnabled(false);
        m_ui->deployEdit->setEnabled(false);
        }
    else
        {
        m_ui->platformEdit->setEnabled(true);
        m_ui->deployEdit->setEnabled(true);

        }
}

void Wizard::createProject()
{

    projectName = m_ui->projectNameEdit->text();
    directory = m_ui->directoryEdit->text();
    sourceFile = m_ui->sourceFileEdit->text();
    if(m_ui->platformEdit->isEnabled() && !(m_ui->platformEdit->text().isEmpty()))
         platformFile = m_ui->platformEdit->text();
    if(m_ui->deployEdit->isEnabled() && !(m_ui->deployEdit->text().isEmpty()))
         deployFile = m_ui->deployEdit->text();

    // create directory
    if(!directory.isEmpty())
        this->projectDir->mkdir(directory+"/"+projectName);
    //create associated files
    this->sourceFileDefault();
    this->platformFileDefault();
    this->deployFileDefault();
    this->setMakeFile();

    //emit projectName Signal to MainWindow
    emit this->projectSaved(directory+"/"+projectName);
}

void Wizard::setDirectory()
{
    m_ui->directoryEdit->setText(QFileDialog::getExistingDirectory(this));
}

void Wizard::editText(QString text)
{
    m_ui->sourceFileEdit->setText(text+"_source.c");
    if(m_ui->platformEdit->isEnabled() || m_ui->deployEdit->isEnabled())
    {
        m_ui->platformEdit->setText(text+"_platform.xml");
        m_ui->deployEdit->setText(text+"_deploy.xml");
    }
}
