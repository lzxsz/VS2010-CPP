/********************************************************************************
** Form generated from reading UI file 'helloqt.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOQT_H
#define UI_HELLOQT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloQtClass
{
public:
    QWidget *centralWidget;
    QPushButton *btnSetting;

    void setupUi(QMainWindow *HelloQtClass)
    {
        if (HelloQtClass->objectName().isEmpty())
            HelloQtClass->setObjectName(QString::fromUtf8("HelloQtClass"));
        HelloQtClass->setWindowModality(Qt::NonModal);
        HelloQtClass->resize(623, 428);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        HelloQtClass->setFont(font);
        centralWidget = new QWidget(HelloQtClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        btnSetting = new QPushButton(centralWidget);
        btnSetting->setObjectName(QString::fromUtf8("btnSetting"));
        btnSetting->setGeometry(QRect(240, 130, 121, 91));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnSetting->sizePolicy().hasHeightForWidth());
        btnSetting->setSizePolicy(sizePolicy);
        HelloQtClass->setCentralWidget(centralWidget);

        retranslateUi(HelloQtClass);
        QObject::connect(btnSetting, SIGNAL(clicked()), HelloQtClass, SLOT(OnSettingClick()));

        QMetaObject::connectSlotsByName(HelloQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *HelloQtClass)
    {
        HelloQtClass->setWindowTitle(QApplication::translate("HelloQtClass", "HelloQt", 0, QApplication::UnicodeUTF8));
        btnSetting->setText(QApplication::translate("HelloQtClass", "Come On", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HelloQtClass: public Ui_HelloQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOQT_H
