/********************************************************************************
** Form generated from reading UI file 'wizard.ui'
**
** Created: Mon Jul 26 17:55:47 2010
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZARD_H
#define UI_WIZARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QWidget>
#include <QtGui/QWizard>
#include <QtGui/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_Wizard
{
public:
    QWizardPage *wizardPage1;
    QWidget *widget;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QWizardPage *wizardPage2;
    QWidget *widget_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *projectNameEdit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *directoryEdit;
    QPushButton *browseButton;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *sourceFileEdit;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *platformEdit;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *deployEdit;
    QCheckBox *bypassCheck;

    void setupUi(QWizard *Wizard)
    {
        if (Wizard->objectName().isEmpty())
            Wizard->setObjectName(QString::fromUtf8("Wizard"));
        Wizard->resize(592, 503);
        wizardPage1 = new QWizardPage();
        wizardPage1->setObjectName(QString::fromUtf8("wizardPage1"));
        widget = new QWidget(wizardPage1);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 10, 401, 111));
        groupBox = new QGroupBox(wizardPage1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 150, 341, 111));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(20, 30, 108, 23));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(20, 60, 141, 23));
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(20, 90, 108, 23));
        Wizard->addPage(wizardPage1);
        wizardPage2 = new QWizardPage();
        wizardPage2->setObjectName(QString::fromUtf8("wizardPage2"));
        widget_2 = new QWidget(wizardPage2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(30, 10, 401, 111));
        horizontalLayoutWidget = new QWidget(wizardPage2);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(40, 140, 391, 39));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        projectNameEdit = new QLineEdit(horizontalLayoutWidget);
        projectNameEdit->setObjectName(QString::fromUtf8("projectNameEdit"));

        horizontalLayout->addWidget(projectNameEdit);

        horizontalLayoutWidget_2 = new QWidget(wizardPage2);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(40, 180, 391, 39));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        directoryEdit = new QLineEdit(horizontalLayoutWidget_2);
        directoryEdit->setObjectName(QString::fromUtf8("directoryEdit"));

        horizontalLayout_2->addWidget(directoryEdit);

        browseButton = new QPushButton(wizardPage2);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));
        browseButton->setGeometry(QRect(440, 190, 101, 28));
        horizontalLayoutWidget_3 = new QWidget(wizardPage2);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(40, 220, 391, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        sourceFileEdit = new QLineEdit(horizontalLayoutWidget_3);
        sourceFileEdit->setObjectName(QString::fromUtf8("sourceFileEdit"));

        horizontalLayout_3->addWidget(sourceFileEdit);

        horizontalLayoutWidget_4 = new QWidget(wizardPage2);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(40, 300, 391, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        platformEdit = new QLineEdit(horizontalLayoutWidget_4);
        platformEdit->setObjectName(QString::fromUtf8("platformEdit"));

        horizontalLayout_4->addWidget(platformEdit);

        horizontalLayoutWidget_5 = new QWidget(wizardPage2);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(40, 340, 391, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        deployEdit = new QLineEdit(horizontalLayoutWidget_5);
        deployEdit->setObjectName(QString::fromUtf8("deployEdit"));

        horizontalLayout_5->addWidget(deployEdit);

        bypassCheck = new QCheckBox(wizardPage2);
        bypassCheck->setObjectName(QString::fromUtf8("bypassCheck"));
        bypassCheck->setGeometry(QRect(40, 270, 161, 32));
        Wizard->addPage(wizardPage2);

        retranslateUi(Wizard);

        QMetaObject::connectSlotsByName(Wizard);
    } // setupUi

    void retranslateUi(QWizard *Wizard)
    {
        Wizard->setWindowTitle(QApplication::translate("Wizard", "Wizard", 0, QApplication::UnicodeUTF8));
        widget->setStyleSheet(QApplication::translate("Wizard", "background-image: url(:/new/new_icon/resources/simgrid_logo.png);", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Wizard", "Select Module", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("Wizard", "MSG", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("Wizard", "SimDAG", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("Wizard", "GRAS", 0, QApplication::UnicodeUTF8));
        widget_2->setStyleSheet(QApplication::translate("Wizard", "background-image: url(:/new/new_icon/resources/simgrid_logo.png);", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Wizard", "Project Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Wizard", "Set Directory", 0, QApplication::UnicodeUTF8));
        browseButton->setText(QApplication::translate("Wizard", "browse...", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Wizard", "source file( .c)", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Wizard", "platform file(.xml)", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Wizard", "deployment file(.xml)", 0, QApplication::UnicodeUTF8));
        bypassCheck->setText(QApplication::translate("Wizard", "bypass XML", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Wizard: public Ui_Wizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZARD_H
