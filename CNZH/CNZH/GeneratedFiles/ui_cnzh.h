/********************************************************************************
** Form generated from reading UI file 'cnzh.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CNZH_H
#define UI_CNZH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CNZHClass
{
public:
    QWidget *centralWidget;
    QLabel *labCNZH;
    QLabel *label;
    QLabel *labName;
    QLabel *labCNZH_3;
    QLabel *label_2;
    QLabel *labNumber;
    QLabel *label_3;
    QLabel *labRemark;

    void setupUi(QMainWindow *CNZHClass)
    {
        if (CNZHClass->objectName().isEmpty())
            CNZHClass->setObjectName(QString::fromUtf8("CNZHClass"));
        CNZHClass->resize(472, 400);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        CNZHClass->setFont(font);
        centralWidget = new QWidget(CNZHClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        labCNZH = new QLabel(centralWidget);
        labCNZH->setObjectName(QString::fromUtf8("labCNZH"));
        labCNZH->setGeometry(QRect(90, 100, 41, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        labCNZH->setFont(font1);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 30, 141, 31));
        labName = new QLabel(centralWidget);
        labName->setObjectName(QString::fromUtf8("labName"));
        labName->setGeometry(QRect(140, 100, 201, 31));
        labName->setFont(font1);
        labName->setFrameShape(QFrame::Panel);
        labName->setFrameShadow(QFrame::Sunken);
        labCNZH_3 = new QLabel(centralWidget);
        labCNZH_3->setObjectName(QString::fromUtf8("labCNZH_3"));
        labCNZH_3->setGeometry(QRect(90, 150, 41, 31));
        labCNZH_3->setFont(font1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 270, 221, 31));
        label_2->setFont(font1);
        labNumber = new QLabel(centralWidget);
        labNumber->setObjectName(QString::fromUtf8("labNumber"));
        labNumber->setGeometry(QRect(140, 150, 201, 31));
        labNumber->setFont(font1);
        labNumber->setFrameShape(QFrame::Panel);
        labNumber->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 200, 41, 31));
        label_3->setFont(font1);
        labRemark = new QLabel(centralWidget);
        labRemark->setObjectName(QString::fromUtf8("labRemark"));
        labRemark->setGeometry(QRect(140, 200, 201, 31));
        labRemark->setFont(font1);
        labRemark->setFrameShape(QFrame::Panel);
        labRemark->setFrameShadow(QFrame::Sunken);
        CNZHClass->setCentralWidget(centralWidget);

        retranslateUi(CNZHClass);

        QMetaObject::connectSlotsByName(CNZHClass);
    } // setupUi

    void retranslateUi(QMainWindow *CNZHClass)
    {
        CNZHClass->setWindowTitle(QApplication::translate("CNZHClass", "CNZH", 0, QApplication::UnicodeUTF8));
        labCNZH->setText(QApplication::translate("CNZHClass", "\345\220\215\347\247\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CNZHClass", "QString \344\270\255\346\226\207\345\244\204\347\220\206", 0, QApplication::UnicodeUTF8));
        labName->setText(QString());
        labCNZH_3->setText(QApplication::translate("CNZHClass", "\346\225\260\351\207\217\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CNZHClass", "\344\276\213\347\250\213\357\274\232\350\247\243\345\206\263QString \344\270\255\346\226\207\344\271\261\347\240\201", 0, QApplication::UnicodeUTF8));
        labNumber->setText(QApplication::translate("CNZHClass", "0", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CNZHClass", "\345\244\207\346\263\250\357\274\232", 0, QApplication::UnicodeUTF8));
        labRemark->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CNZHClass: public Ui_CNZHClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CNZH_H
