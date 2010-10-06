/********************************************************************************
** Form generated from reading UI file 'displayer.ui'
**
** Created: Thu Aug 19 12:25:22 2010
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYER_H
#define UI_DISPLAYER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_displayer
{
public:
    QTextEdit *textEdit;

    void setupUi(QFrame *displayer)
    {
        if (displayer->objectName().isEmpty())
            displayer->setObjectName(QString::fromUtf8("displayer"));
        displayer->resize(676, 474);
        displayer->setFrameShape(QFrame::StyledPanel);
        displayer->setFrameShadow(QFrame::Raised);
        textEdit = new QTextEdit(displayer);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(13, 33, 651, 411));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(displayer);

        QMetaObject::connectSlotsByName(displayer);
    } // setupUi

    void retranslateUi(QFrame *displayer)
    {
        displayer->setWindowTitle(QApplication::translate("displayer", "Frame", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class displayer: public Ui_displayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYER_H
