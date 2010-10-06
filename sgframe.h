#ifndef SGFRAME_H
#define SGFRAME_H

#include <QtGui/QFrame>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QDirModel>
#include <QTextEdit>
#include <QTextStream>
#include <QKeyEvent>
#include "mytextedit.h"

class MainWindow;
namespace Ui {
    class SGFrame;
}

class SGFrame : public QFrame {
    Q_OBJECT
public:
    SGFrame(QWidget *parent = 0);
    ~SGFrame();

protected :
    void setConnexions();
protected slots:
    void changeEvent(QEvent *e);
    void setWidgets();
    void fillTabs(const QString&);
    void setDir(const QString&);
    void focusOn(QModelIndex);
    void saveText(int currentIndex);
    void setOutput(const QString&);

private:
    Ui::SGFrame *m_ui;
    QHBoxLayout *hLayout;
    QVBoxLayout *vLayout;
    QDirModel *dirModel;
    QString pathDir;
    QList<QTextEdit*> editList;

friend class MainWindow;
};

#endif // SGFRAME_H
