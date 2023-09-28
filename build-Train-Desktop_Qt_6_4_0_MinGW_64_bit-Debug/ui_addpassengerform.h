/********************************************************************************
** Form generated from reading UI file 'addpassengerform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPASSENGERFORM_H
#define UI_ADDPASSENGERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPassengerForm
{
public:
    QPushButton *submit;
    QPushButton *back;
    QLabel *label;
    QCheckBox *monday;
    QCheckBox *tuesday;
    QCheckBox *wednesday;
    QCheckBox *thurtday;
    QCheckBox *friday;
    QCheckBox *saturday;
    QCheckBox *sunday;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *class_2;
    QLabel *label_4;
    QLineEdit *id;
    QLabel *label_5;
    QLineEdit *numberOfSeats;
    QLabel *label_6;
    QSpinBox *destination;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *price;
    QLabel *label_12;

    void setupUi(QWidget *AddPassengerForm)
    {
        if (AddPassengerForm->objectName().isEmpty())
            AddPassengerForm->setObjectName("AddPassengerForm");
        AddPassengerForm->resize(481, 499);
        submit = new QPushButton(AddPassengerForm);
        submit->setObjectName("submit");
        submit->setGeometry(QRect(40, 440, 181, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        submit->setFont(font);
        back = new QPushButton(AddPassengerForm);
        back->setObjectName("back");
        back->setGeometry(QRect(280, 440, 111, 41));
        back->setFont(font);
        label = new QLabel(AddPassengerForm);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 461, 41));
        label->setFont(font);
        monday = new QCheckBox(AddPassengerForm);
        monday->setObjectName("monday");
        monday->setGeometry(QRect(350, 99, 91, 31));
        monday->setFont(font);
        tuesday = new QCheckBox(AddPassengerForm);
        tuesday->setObjectName("tuesday");
        tuesday->setGeometry(QRect(350, 130, 91, 31));
        tuesday->setFont(font);
        wednesday = new QCheckBox(AddPassengerForm);
        wednesday->setObjectName("wednesday");
        wednesday->setGeometry(QRect(350, 160, 91, 31));
        wednesday->setFont(font);
        thurtday = new QCheckBox(AddPassengerForm);
        thurtday->setObjectName("thurtday");
        thurtday->setGeometry(QRect(350, 190, 91, 31));
        thurtday->setFont(font);
        friday = new QCheckBox(AddPassengerForm);
        friday->setObjectName("friday");
        friday->setGeometry(QRect(350, 220, 91, 31));
        friday->setFont(font);
        saturday = new QCheckBox(AddPassengerForm);
        saturday->setObjectName("saturday");
        saturday->setGeometry(QRect(350, 250, 91, 31));
        saturday->setFont(font);
        sunday = new QCheckBox(AddPassengerForm);
        sunday->setObjectName("sunday");
        sunday->setGeometry(QRect(350, 280, 91, 31));
        sunday->setFont(font);
        label_2 = new QLabel(AddPassengerForm);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(300, 60, 151, 31));
        label_2->setFont(font);
        label_3 = new QLabel(AddPassengerForm);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 390, 91, 41));
        label_3->setFont(font);
        class_2 = new QSpinBox(AddPassengerForm);
        class_2->setObjectName("class_2");
        class_2->setGeometry(QRect(130, 400, 61, 31));
        class_2->setFont(font);
        label_4 = new QLabel(AddPassengerForm);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 100, 91, 31));
        label_4->setFont(font);
        id = new QLineEdit(AddPassengerForm);
        id->setObjectName("id");
        id->setGeometry(QRect(130, 100, 171, 31));
        id->setFont(font);
        label_5 = new QLabel(AddPassengerForm);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 140, 221, 31));
        label_5->setFont(font);
        numberOfSeats = new QLineEdit(AddPassengerForm);
        numberOfSeats->setObjectName("numberOfSeats");
        numberOfSeats->setGeometry(QRect(230, 140, 113, 31));
        numberOfSeats->setFont(font);
        label_6 = new QLabel(AddPassengerForm);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 180, 241, 31));
        label_6->setFont(font);
        destination = new QSpinBox(AddPassengerForm);
        destination->setObjectName("destination");
        destination->setGeometry(QRect(270, 180, 61, 31));
        destination->setFont(font);
        label_7 = new QLabel(AddPassengerForm);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 210, 241, 31));
        label_7->setFont(font);
        label_8 = new QLabel(AddPassengerForm);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 240, 241, 31));
        label_8->setFont(font);
        label_9 = new QLabel(AddPassengerForm);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 270, 241, 31));
        label_9->setFont(font);
        label_10 = new QLabel(AddPassengerForm);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 300, 241, 31));
        label_10->setFont(font);
        label_11 = new QLabel(AddPassengerForm);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 330, 261, 31));
        label_11->setFont(font);
        price = new QLineEdit(AddPassengerForm);
        price->setObjectName("price");
        price->setGeometry(QRect(130, 360, 171, 31));
        price->setFont(font);
        label_12 = new QLabel(AddPassengerForm);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(20, 360, 91, 31));
        label_12->setFont(font);

        retranslateUi(AddPassengerForm);

        QMetaObject::connectSlotsByName(AddPassengerForm);
    } // setupUi

    void retranslateUi(QWidget *AddPassengerForm)
    {
        AddPassengerForm->setWindowTitle(QCoreApplication::translate("AddPassengerForm", "Form", nullptr));
        submit->setText(QCoreApplication::translate("AddPassengerForm", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        back->setText(QCoreApplication::translate("AddPassengerForm", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label->setText(QCoreApplication::translate("AddPassengerForm", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\276 \320\275\320\276\320\262\320\276\320\274 \320\277\320\276\320\265\320\267\320\264\320\265", nullptr));
        monday->setText(QCoreApplication::translate("AddPassengerForm", "\320\237\320\275", nullptr));
        tuesday->setText(QCoreApplication::translate("AddPassengerForm", "\320\222\321\202", nullptr));
        wednesday->setText(QCoreApplication::translate("AddPassengerForm", "\320\241\321\200", nullptr));
        thurtday->setText(QCoreApplication::translate("AddPassengerForm", "\320\247\321\202", nullptr));
        friday->setText(QCoreApplication::translate("AddPassengerForm", "\320\237\321\202", nullptr));
        saturday->setText(QCoreApplication::translate("AddPassengerForm", "\320\241\320\261", nullptr));
        sunday->setText(QCoreApplication::translate("AddPassengerForm", "\320\222\321\201", nullptr));
        label_2->setText(QCoreApplication::translate("AddPassengerForm", "\320\240\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("AddPassengerForm", "\320\232\320\273\320\260\321\201\321\201:", nullptr));
        label_4->setText(QCoreApplication::translate("AddPassengerForm", "\320\235\320\276\320\274\320\265\321\200:", nullptr));
        label_5->setText(QCoreApplication::translate("AddPassengerForm", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\274\320\265\321\201\321\202:", nullptr));
        label_6->setText(QCoreApplication::translate("AddPassengerForm", "\320\237\321\203\320\275\320\272\321\202 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217:", nullptr));
        label_7->setText(QCoreApplication::translate("AddPassengerForm", "1. \320\240\320\276\321\201\321\201\320\270\321\217", nullptr));
        label_8->setText(QCoreApplication::translate("AddPassengerForm", "2. \320\232\320\270\321\202\320\260\320\271", nullptr));
        label_9->setText(QCoreApplication::translate("AddPassengerForm", "3. \320\237\320\276\320\273\321\214\321\210\320\260", nullptr));
        label_10->setText(QCoreApplication::translate("AddPassengerForm", "4. \320\243\320\272\321\200\320\260\320\270\320\275\320\260", nullptr));
        label_11->setText(QCoreApplication::translate("AddPassengerForm", "5. \320\236\321\201\321\202\320\260\320\273\321\214\320\275\321\213\320\265 \321\201\321\202\321\200\320\260\320\275\321\213", nullptr));
        label_12->setText(QCoreApplication::translate("AddPassengerForm", "\320\246\320\265\320\275\320\260:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPassengerForm: public Ui_AddPassengerForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPASSENGERFORM_H
