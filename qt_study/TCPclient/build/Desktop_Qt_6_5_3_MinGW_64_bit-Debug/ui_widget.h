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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *connectButton;
    QPushButton *cancelButton;
    QLineEdit *iplineEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *portlineEdit;
    QLabel *label_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->setEnabled(true);
        Widget->resize(600, 400);
        connectButton = new QPushButton(Widget);
        connectButton->setObjectName("connectButton");
        connectButton->setGeometry(QRect(160, 310, 111, 41));
        cancelButton = new QPushButton(Widget);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(350, 310, 101, 41));
        iplineEdit = new QLineEdit(Widget);
        iplineEdit->setObjectName("iplineEdit");
        iplineEdit->setGeometry(QRect(200, 140, 221, 31));
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 140, 69, 19));
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 220, 69, 19));
        portlineEdit = new QLineEdit(Widget);
        portlineEdit->setObjectName("portlineEdit");
        portlineEdit->setGeometry(QRect(200, 210, 221, 31));
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(230, 50, 151, 51));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        connectButton->setText(QCoreApplication::translate("Widget", "\350\277\236\346\216\245", nullptr));
        cancelButton->setText(QCoreApplication::translate("Widget", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\345\234\260\345\235\200</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\347\253\257\345\217\243</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\256\242\346\210\267\347\253\257</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
