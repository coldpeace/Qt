#ifndef DISPLAYER_H
#define DISPLAYER_H

#include <QFrame>
#include <QHBoxLayout>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

namespace Ui {
    class displayer;
}

class displayer : public QFrame
{
    Q_OBJECT

public:
    explicit displayer(QWidget *parent = 0);
    ~displayer();
    void setTextEdit();
    void print(const QString& path);

private:
    Ui::displayer *ui;
    QHBoxLayout *hLayout;
};

#endif // DISPLAYER_H
