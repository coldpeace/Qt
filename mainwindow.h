#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include "sgframe.h"
#include <QGridLayout>
#include <QFileDialog>
#include <QProcess>
#include "wizard.h"
#include "helpframe.h"
#include "displayer.h"
#include "setting.h"

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
protected :
     void setMainFrame();
     void setToolBarActions();
     void setConnections();
private:
      Ui::MainWindow *ui;
      SGFrame *sgFrame;
      Wizard *wizard;
      HelpFrame * hFrame;
      displayer* display;
      Setting *setting;
      QVBoxLayout *mainLayout;
      QString dirPath;
      QString projectName;
      QProcess *runProcess;
      QProcess *execProcess;

protected slots :
      void newProject();
      void openProject();
      void quitProject();
      void runProject();
      void optionsProject();
      void aboutSG();
      void setHelpFrame();
      void setSGFrame();
      void fillTree(QString);
      void enableRun(QString);
      void printOutput();
};

#endif // MAINWINDOW_H
