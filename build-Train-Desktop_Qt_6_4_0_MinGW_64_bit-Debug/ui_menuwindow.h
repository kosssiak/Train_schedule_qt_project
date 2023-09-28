/********************************************************************************
** Form generated from reading UI file 'menuwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWINDOW_H
#define UI_MENUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *passenger;
    QPushButton *cargo;
    QPushButton *back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MenuWindow)
    {
        if (MenuWindow->objectName().isEmpty())
            MenuWindow->setObjectName("MenuWindow");
        MenuWindow->resize(800, 600);
        centralwidget = new QWidget(MenuWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 20, 441, 71));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        passenger = new QPushButton(centralwidget);
        passenger->setObjectName("passenger");
        passenger->setGeometry(QRect(250, 130, 341, 61));
        passenger->setFont(font);
        cargo = new QPushButton(centralwidget);
        cargo->setObjectName("cargo");
        cargo->setGeometry(QRect(250, 200, 341, 61));
        cargo->setFont(font);
        back = new QPushButton(centralwidget);
        back->setObjectName("back");
        back->setGeometry(QRect(520, 430, 181, 51));
        back->setFont(font);
        MenuWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MenuWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MenuWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MenuWindow);
        statusbar->setObjectName("statusbar");
        MenuWindow->setStatusBar(statusbar);

        retranslateUi(MenuWindow);

        QMetaObject::connectSlotsByName(MenuWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MenuWindow)
    {
        MenuWindow->setWindowTitle(QCoreApplication::translate("MenuWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MenuWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\202\320\270\320\277 \320\277\320\276\320\265\320\267\320\264\320\276\320\262 \320\264\320\273\321\217 \321\200\320\260\320\261\320\276\321\202\321\213:", nullptr));
        passenger->setText(QCoreApplication::translate("MenuWindow", "\320\237\320\260\321\201\321\201\320\260\320\266\320\270\321\200\321\201\320\272\320\270\320\265 \320\277\320\276\320\265\320\267\320\264\320\260", nullptr));
        cargo->setText(QCoreApplication::translate("MenuWindow", "\320\223\321\200\321\203\320\267\320\276\320\262\321\213\320\265 \320\277\320\276\320\265\320\267\320\264\320\260", nullptr));
        back->setText(QCoreApplication::translate("MenuWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuWindow: public Ui_MenuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWINDOW_H
