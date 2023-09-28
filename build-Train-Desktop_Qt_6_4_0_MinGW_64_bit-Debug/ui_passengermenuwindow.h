/********************************************************************************
** Form generated from reading UI file 'passengermenuwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSENGERMENUWINDOW_H
#define UI_PASSENGERMENUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PassengerMenuWindow
{
public:
    QWidget *centralwidget;
    QPushButton *takeTicket;
    QLabel *label;
    QPushButton *cancel;
    QPushButton *back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PassengerMenuWindow)
    {
        if (PassengerMenuWindow->objectName().isEmpty())
            PassengerMenuWindow->setObjectName("PassengerMenuWindow");
        PassengerMenuWindow->resize(800, 600);
        centralwidget = new QWidget(PassengerMenuWindow);
        centralwidget->setObjectName("centralwidget");
        takeTicket = new QPushButton(centralwidget);
        takeTicket->setObjectName("takeTicket");
        takeTicket->setGeometry(QRect(250, 80, 251, 61));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        takeTicket->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 10, 321, 71));
        label->setFont(font);
        cancel = new QPushButton(centralwidget);
        cancel->setObjectName("cancel");
        cancel->setGeometry(QRect(190, 160, 381, 61));
        cancel->setFont(font);
        back = new QPushButton(centralwidget);
        back->setObjectName("back");
        back->setGeometry(QRect(490, 420, 251, 61));
        back->setFont(font);
        PassengerMenuWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PassengerMenuWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        PassengerMenuWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(PassengerMenuWindow);
        statusbar->setObjectName("statusbar");
        PassengerMenuWindow->setStatusBar(statusbar);

        retranslateUi(PassengerMenuWindow);

        QMetaObject::connectSlotsByName(PassengerMenuWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PassengerMenuWindow)
    {
        PassengerMenuWindow->setWindowTitle(QCoreApplication::translate("PassengerMenuWindow", "MainWindow", nullptr));
        takeTicket->setText(QCoreApplication::translate("PassengerMenuWindow", "\320\237\320\276\320\272\321\203\320\277\320\272\320\260 \320\261\320\270\320\273\320\265\321\202\320\260", nullptr));
        label->setText(QCoreApplication::translate("PassengerMenuWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\320\265:", nullptr));
        cancel->setText(QCoreApplication::translate("PassengerMenuWindow", "\320\236\321\202\320\274\320\265\320\275\320\260 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\265\320\263\320\276 \320\264\320\265\320\271\321\202\320\262\320\270\321\217", nullptr));
        back->setText(QCoreApplication::translate("PassengerMenuWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PassengerMenuWindow: public Ui_PassengerMenuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSENGERMENUWINDOW_H
