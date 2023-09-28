/********************************************************************************
** Form generated from reading UI file 'takepassengerticketform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAKEPASSENGERTICKETFORM_H
#define UI_TAKEPASSENGERTICKETFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TakePassengerTicketForm
{
public:
    QLabel *label;
    QPushButton *back;
    QTableWidget *tableWidget;
    QPushButton *submit;
    QSpinBox *spinBox;
    QLabel *label_2;
    QSpinBox *number;
    QLabel *label_3;

    void setupUi(QWidget *TakePassengerTicketForm)
    {
        if (TakePassengerTicketForm->objectName().isEmpty())
            TakePassengerTicketForm->setObjectName("TakePassengerTicketForm");
        TakePassengerTicketForm->resize(1053, 555);
        label = new QLabel(TakePassengerTicketForm);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 0, 531, 51));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        back = new QPushButton(TakePassengerTicketForm);
        back->setObjectName("back");
        back->setGeometry(QRect(860, 450, 151, 41));
        back->setFont(font);
        tableWidget = new QTableWidget(TakePassengerTicketForm);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 50, 1041, 381));
        submit = new QPushButton(TakePassengerTicketForm);
        submit->setObjectName("submit");
        submit->setGeometry(QRect(350, 450, 231, 41));
        submit->setFont(font);
        spinBox = new QSpinBox(TakePassengerTicketForm);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(220, 440, 61, 41));
        spinBox->setFont(font);
        label_2 = new QLabel(TakePassengerTicketForm);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 440, 191, 41));
        label_2->setFont(font);
        number = new QSpinBox(TakePassengerTicketForm);
        number->setObjectName("number");
        number->setGeometry(QRect(280, 500, 61, 41));
        number->setFont(font);
        label_3 = new QLabel(TakePassengerTicketForm);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 500, 261, 41));
        label_3->setFont(font);

        retranslateUi(TakePassengerTicketForm);

        QMetaObject::connectSlotsByName(TakePassengerTicketForm);
    } // setupUi

    void retranslateUi(QWidget *TakePassengerTicketForm)
    {
        TakePassengerTicketForm->setWindowTitle(QCoreApplication::translate("TakePassengerTicketForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("TakePassengerTicketForm", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\277\320\276\320\265\320\267\320\264 \320\264\320\273\321\217 \320\277\320\276\320\272\321\203\320\277\320\272\320\270 \320\261\320\270\320\273\320\265\321\202\320\260", nullptr));
        back->setText(QCoreApplication::translate("TakePassengerTicketForm", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        submit->setText(QCoreApplication::translate("TakePassengerTicketForm", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("TakePassengerTicketForm", "\320\235\320\276\320\274\320\265\321\200 \320\277\320\276\320\265\320\267\320\264\320\260:", nullptr));
        label_3->setText(QCoreApplication::translate("TakePassengerTicketForm", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\261\320\270\320\273\320\265\321\202\320\276\320\262:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TakePassengerTicketForm: public Ui_TakePassengerTicketForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAKEPASSENGERTICKETFORM_H
