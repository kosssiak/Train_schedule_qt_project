/********************************************************************************
** Form generated from reading UI file 'showpassengertablewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWPASSENGERTABLEWINDOW_H
#define UI_SHOWPASSENGERTABLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowPassengerTableWindow
{
public:
    QTableWidget *tableWidget;
    QLabel *label;
    QPushButton *back;

    void setupUi(QWidget *ShowPassengerTableWindow)
    {
        if (ShowPassengerTableWindow->objectName().isEmpty())
            ShowPassengerTableWindow->setObjectName("ShowPassengerTableWindow");
        ShowPassengerTableWindow->resize(1106, 502);
        tableWidget = new QTableWidget(ShowPassengerTableWindow);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(30, 50, 1041, 381));
        label = new QLabel(ShowPassengerTableWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 0, 391, 51));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        back = new QPushButton(ShowPassengerTableWindow);
        back->setObjectName("back");
        back->setGeometry(QRect(880, 450, 151, 41));
        back->setFont(font);

        retranslateUi(ShowPassengerTableWindow);

        QMetaObject::connectSlotsByName(ShowPassengerTableWindow);
    } // setupUi

    void retranslateUi(QWidget *ShowPassengerTableWindow)
    {
        ShowPassengerTableWindow->setWindowTitle(QCoreApplication::translate("ShowPassengerTableWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("ShowPassengerTableWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\320\260\321\201\321\201\320\260\320\266\320\270\321\200\321\201\320\272\320\270\321\205 \320\277\320\276\320\265\320\267\320\264\320\276\320\262", nullptr));
        back->setText(QCoreApplication::translate("ShowPassengerTableWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowPassengerTableWindow: public Ui_ShowPassengerTableWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWPASSENGERTABLEWINDOW_H
