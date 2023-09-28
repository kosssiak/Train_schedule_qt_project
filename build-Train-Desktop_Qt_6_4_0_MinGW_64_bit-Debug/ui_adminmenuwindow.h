/********************************************************************************
** Form generated from reading UI file 'adminmenuwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMENUWINDOW_H
#define UI_ADMINMENUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminMenuWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *add;
    QPushButton *delete_2;
    QPushButton *Look;
    QPushButton *back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminMenuWindow)
    {
        if (AdminMenuWindow->objectName().isEmpty())
            AdminMenuWindow->setObjectName("AdminMenuWindow");
        AdminMenuWindow->resize(800, 600);
        centralwidget = new QWidget(AdminMenuWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 30, 321, 71));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        add = new QPushButton(centralwidget);
        add->setObjectName("add");
        add->setGeometry(QRect(120, 100, 251, 61));
        add->setFont(font);
        delete_2 = new QPushButton(centralwidget);
        delete_2->setObjectName("delete_2");
        delete_2->setGeometry(QRect(420, 100, 251, 61));
        delete_2->setFont(font);
        Look = new QPushButton(centralwidget);
        Look->setObjectName("Look");
        Look->setGeometry(QRect(210, 180, 361, 61));
        Look->setFont(font);
        back = new QPushButton(centralwidget);
        back->setObjectName("back");
        back->setGeometry(QRect(500, 410, 251, 61));
        back->setFont(font);
        AdminMenuWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminMenuWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        AdminMenuWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminMenuWindow);
        statusbar->setObjectName("statusbar");
        AdminMenuWindow->setStatusBar(statusbar);

        retranslateUi(AdminMenuWindow);

        QMetaObject::connectSlotsByName(AdminMenuWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminMenuWindow)
    {
        AdminMenuWindow->setWindowTitle(QCoreApplication::translate("AdminMenuWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("AdminMenuWindow", "         \320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\320\265:", nullptr));
        add->setText(QCoreApplication::translate("AdminMenuWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276\320\265\320\267\320\264", nullptr));
        delete_2->setText(QCoreApplication::translate("AdminMenuWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\277\320\276\320\265\320\267\320\264", nullptr));
        Look->setText(QCoreApplication::translate("AdminMenuWindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \320\277\320\276\320\265\320\267\320\264\320\276\320\262", nullptr));
        back->setText(QCoreApplication::translate("AdminMenuWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminMenuWindow: public Ui_AdminMenuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENUWINDOW_H
