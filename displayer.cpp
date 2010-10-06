#include "displayer.h"
#include "ui_displayer.h"

displayer::displayer(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::displayer)
{
    ui->setupUi(this);
    setTextEdit();

}

displayer::~displayer()
{
    delete ui;
}

void displayer::setTextEdit()
{
    hLayout = new QHBoxLayout;
    hLayout->addWidget(ui->textEdit);
    this->setLayout(hLayout);
}

void displayer::print(const QString &text)
{
    this->show();
    ui->textEdit->setPlainText(text);
}

