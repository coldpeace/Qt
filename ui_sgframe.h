/********************************************************************************
** Form generated from reading UI file 'sgframe.ui'
**
** Created: Mon Sep 27 17:53:39 2010
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SGFRAME_H
#define UI_SGFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QTabWidget>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_SGFrame
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWebView *webView;
    QTreeView *treeView;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;

    void setupUi(QFrame *SGFrame)
    {
        if (SGFrame->objectName().isEmpty())
            SGFrame->setObjectName(QString::fromUtf8("SGFrame"));
        SGFrame->resize(734, 510);
        SGFrame->setFrameShape(QFrame::StyledPanel);
        SGFrame->setFrameShadow(QFrame::Raised);
        tabWidget = new QTabWidget(SGFrame);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(282, 29, 341, 191));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        webView = new QWebView(tab);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setGeometry(QRect(9, 20, 311, 251));
        webView->setUrl(QUrl("about:blank"));
        tabWidget->addTab(tab, QString());
        treeView = new QTreeView(SGFrame);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(10, 30, 256, 411));
        dockWidget = new QDockWidget(SGFrame);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidget->setGeometry(QRect(300, 330, 381, 81));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        dockWidget->setWidget(dockWidgetContents);

        retranslateUi(SGFrame);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SGFrame);
    } // setupUi

    void retranslateUi(QFrame *SGFrame)
    {
        SGFrame->setWindowTitle(QApplication::translate("SGFrame", "Frame", 0, QApplication::UnicodeUTF8));
        tabWidget->setStyleSheet(QApplication::translate("SGFrame", "#MyLoginForm {\n"
"background: gray;\n"
"}\n"
"#mainFrame {\n"
"border: 3px solid gray;\n"
"border-radius: 40px;\n"
"background: white;\n"
"}", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SGFrame", "Tab 1", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SGFrame: public Ui_SGFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SGFRAME_H
