#ifndef SETTING_H
#define SETTING_H

#include <QDialog>
#include <QHBoxLayout>
#include <QVBoxLayout>

namespace Ui {
    class Setting;
}

class Setting : public QDialog
{
    Q_OBJECT

public:
    explicit Setting(QWidget *parent = 0);
    ~Setting();

private:
    Ui::Setting *ui;
    void setWidgets();
};


#endif // SETTING_H
