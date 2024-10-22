/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *newAction;
    QAction *openAction;
    QAction *saveAction;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_M;
    QMenu *menu_S;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(530, 588);
        newAction = new QAction(MainWindow);
        newAction->setObjectName("newAction");
        openAction = new QAction(MainWindow);
        openAction->setObjectName("openAction");
        saveAction = new QAction(MainWindow);
        saveAction->setObjectName("saveAction");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 530, 21));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName("menu_F");
        menu_M = new QMenu(menubar);
        menu_M->setObjectName("menu_M");
        menu_S = new QMenu(menubar);
        menu_S->setObjectName("menu_S");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_M->menuAction());
        menubar->addAction(menu_S->menuAction());
        menu_F->addAction(newAction);
        menu_F->addAction(openAction);
        menu_F->addAction(saveAction);
        menu_F->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        newAction->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272(&N)", nullptr));
        openAction->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)", nullptr));
        saveAction->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&S)", nullptr));
        menu_F->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", nullptr));
        menu_M->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\257\221(&M)", nullptr));
        menu_S->setTitle(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256(&S)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
