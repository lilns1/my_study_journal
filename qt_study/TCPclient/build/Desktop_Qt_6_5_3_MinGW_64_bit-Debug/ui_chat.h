/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chat
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *clearButton;
    QPushButton *sendButton;

    void setupUi(QWidget *chat)
    {
        if (chat->objectName().isEmpty())
            chat->setObjectName("chat");
        chat->resize(600, 400);
        label = new QLabel(chat);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 100, 111, 51));
        lineEdit = new QLineEdit(chat);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(50, 150, 451, 51));
        clearButton = new QPushButton(chat);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(90, 280, 121, 41));
        sendButton = new QPushButton(chat);
        sendButton->setObjectName("sendButton");
        sendButton->setGeometry(QRect(340, 280, 111, 41));

        retranslateUi(chat);

        QMetaObject::connectSlotsByName(chat);
    } // setupUi

    void retranslateUi(QWidget *chat)
    {
        chat->setWindowTitle(QCoreApplication::translate("chat", "Form", nullptr));
        label->setText(QCoreApplication::translate("chat", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\350\276\223\345\205\245\344\277\241\346\201\257\357\274\232</span></p></body></html>", nullptr));
        clearButton->setText(QCoreApplication::translate("chat", "\346\270\205\347\251\272", nullptr));
        sendButton->setText(QCoreApplication::translate("chat", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chat: public Ui_chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
