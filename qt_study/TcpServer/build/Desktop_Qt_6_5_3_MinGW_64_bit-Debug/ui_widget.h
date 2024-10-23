/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLineEdit *iplineEdit;
    QLineEdit *portlineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *mainlineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(600, 400);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 60, 121, 51));
        iplineEdit = new QLineEdit(Widget);
        iplineEdit->setObjectName("iplineEdit");
        iplineEdit->setGeometry(QRect(230, 140, 201, 41));
        portlineEdit = new QLineEdit(Widget);
        portlineEdit->setObjectName("portlineEdit");
        portlineEdit->setGeometry(QRect(230, 220, 201, 41));
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 140, 101, 31));
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 220, 111, 31));
        mainlineEdit = new QLineEdit(Widget);
        mainlineEdit->setObjectName("mainlineEdit");
        mainlineEdit->setGeometry(QRect(170, 310, 351, 51));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\346\234\215\345\212\241\345\231\250</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\345\256\242\346\210\267\347\253\257\345\234\260\345\235\200</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\256\242\346\210\267\347\253\257\347\253\257\345\217\243</span></p><p align=\"center\"><span style=\" font-size:12pt;\"><br/></span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
