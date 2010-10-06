#ifndef WIZARD_H
#define WIZARD_H

#include <QtGui/QWizard>
#include <QDir>
#include <QMessageBox>
#include <QFileDialog>
#include <QTextStream>
#include <QPushButton>

class MainWindow;
namespace Ui {
    class Wizard;
}

class Wizard : public QWizard {
    Q_OBJECT
public:
    Wizard(QWidget *parent = 0);
    ~Wizard();

protected:
    void changeEvent(QEvent *e);
    void setPages();
    void setConnexions();
    void sourceFileDefault();
    void platformFileDefault();
    void deployFileDefault();
    void setMakeFile();
    void addFile(const QString &name);

private:
    Ui::Wizard *m_ui;
    QString projectName;
    QString directory;
    QString sourceFile;
    QString platformFile;
    QString deployFile;
    QDir *projectDir;
    QList<QFile*> srcFiles;
    QList<QFile*> xmlFiles;

protected slots:
    void bypassXML();
    void createProject();
    void setDirectory();
    void editText(QString);

signals :
        void projectSaved(const QString& directory);

friend class MainWindow;
};

#endif // WIZARD_H
