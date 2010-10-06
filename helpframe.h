#ifndef HELPFRAME_H
#define HELPFRAME_H

#include <QFrame>
#include <QHBoxLayout>
#include "xmlreader.h"
#include <QStandardItemModel>
namespace Ui {
    class HelpFrame;
}

class HelpFrame : public QFrame
{
    Q_OBJECT

public:
    explicit HelpFrame(QWidget *parent = 0);
    ~HelpFrame();

private:
    Ui::HelpFrame *m_ui;
    QHBoxLayout *hLayout;
    QVBoxLayout *vLayout;
    QHBoxLayout *keyLayout;
    QVBoxLayout *frameLayout;
    XMLReader *reader;

    QStandardItemModel* itemsModel;

protected :
        void setWidgets();
        void populateListView();
        void setConnexions();
    protected slots :
            void setLink(QModelIndex);
            void filter(QString);
};

#endif // HELPFRAME_H
