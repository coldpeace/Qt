/********************************************************************************
** Form generated from reading UI file 'helpframe.ui'
**
** Created: Thu Jul 22 14:53:29 2010
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPFRAME_H
#define UI_HELPFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_HelpFrame
{
public:
    QListView *listView;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWebView *webView;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QFrame *HelpFrame)
    {
        if (HelpFrame->objectName().isEmpty())
            HelpFrame->setObjectName(QString::fromUtf8("HelpFrame"));
        HelpFrame->resize(552, 501);
        HelpFrame->setFrameShape(QFrame::StyledPanel);
        HelpFrame->setFrameShadow(QFrame::Raised);
        listView = new QListView(HelpFrame);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(10, 110, 221, 351));
        scrollArea = new QScrollArea(HelpFrame);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(260, 110, 271, 351));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 269, 349));
        webView = new QWebView(scrollAreaWidgetContents);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setGeometry(QRect(0, 10, 261, 321));
        webView->setUrl(QUrl("about:blank"));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label = new QLabel(HelpFrame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 106, 27));
        lineEdit = new QLineEdit(HelpFrame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 40, 201, 41));
        pushButton = new QPushButton(HelpFrame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 40, 146, 37));

        retranslateUi(HelpFrame);

        QMetaObject::connectSlotsByName(HelpFrame);
    } // setupUi

    void retranslateUi(QFrame *HelpFrame)
    {
        HelpFrame->setWindowTitle(QApplication::translate("HelpFrame", "Frame", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("HelpFrame", "Keyword", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("HelpFrame", "search...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HelpFrame: public Ui_HelpFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPFRAME_H
