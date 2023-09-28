/********************************************************************************
** Form generated from reading UI file 'showcargotablewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWCARGOTABLEWINDOW_H
#define UI_SHOWCARGOTABLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowCargoTableWindow
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *back;

    void setupUi(QWidget *ShowCargoTableWindow)
    {
        if (ShowCargoTableWindow->objectName().isEmpty())
            ShowCargoTableWindow->setObjectName("ShowCargoTableWindow");
        ShowCargoTableWindow->resize(1101, 506);
        label = new QLabel(ShowCargoTableWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(380, 0, 361, 51));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        tableWidget = new QTableWidget(ShowCargoTableWindow);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(30, 50, 1041, 381));
        back = new QPushButton(ShowCargoTableWindow);
        back->setObjectName("back");
        back->setGeometry(QRect(880, 450, 151, 41));
        back->setFont(font);

        retranslateUi(ShowCargoTableWindow);

        QMetaObject::connectSlotsByName(ShowCargoTableWindow);
    } // setupUi

    void retranslateUi(QWidget *ShowCargoTableWindow)
    {
        ShowCargoTableWindow->setWindowTitle(QCoreApplication::translate("ShowCargoTableWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("ShowCargoTableWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\263\321\200\321\203\320\267\320\276\320\262\321\213\321\205 \320\277\320\276\320\265\320\267\320\264\320\276\320\262", nullptr));
        back->setText(QCoreApplication::translate("ShowCargoTableWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowCargoTableWindow: public Ui_ShowCargoTableWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWCARGOTABLEWINDOW_H
