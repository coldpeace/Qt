#include <QtGui/QApplication>
#include "mainwindow.h"
#include "helpframe.h"
#include "sgframe.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //HelpFrame h;
    //SGFrame sg;
    w.show();
    //h.show();
    //sg.show();
    return a.exec();
}
