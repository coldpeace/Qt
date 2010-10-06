#include "setting.h"
#include "ui_setting.h"

Setting::Setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Setting)
{
    ui->setupUi(this);
    this->setWidgets();
}

Setting::~Setting()
{
    delete ui;
}

void Setting::setWidgets()
{

    QHBoxLayout *hLayout = new QHBoxLayout;
    hLayout->addWidget(ui->lineEdit);
    hLayout->addWidget(ui->pushButton);

    //tab 1 : Installation setting
    QVBoxLayout *vLayout = new QVBoxLayout;
    vLayout->addWidget(ui->label);
    vLayout->addLayout(hLayout);
    ui->tab->setLayout(vLayout);
    // tab 2 : compilation setting
    // to do ...
    QVBoxLayout *boxLayout = new QVBoxLayout;
    boxLayout->addWidget(ui->tabWidget);
    boxLayout->addWidget(ui->buttonBox);


}
