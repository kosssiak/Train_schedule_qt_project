/********************************************************************************
** Form generated from reading UI file 'addcargoform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCARGOFORM_H
#define UI_ADDCARGOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddCargoForm
{
public:
    QCheckBox *sunday;
    QLabel *label_7;
    QCheckBox *friday;
    QLabel *label_10;
    QLabel *label_8;
    QPushButton *back;
    QLineEdit *price;
    QLabel *label;
    QLineEdit *numberOfSeats;
    QCheckBox *saturday;
    QSpinBox *destination;
    QLabel *label_9;
    QLabel *label_3;
    QCheckBox *wednesday;
    QLabel *label_5;
    QCheckBox *monday;
    QLineEdit *id;
    QLabel *label_6;
    QCheckBox *tuesday;
    QPushButton *submit;
    QLabel *label_12;
    QLabel *label_2;
    QLabel *label_11;
    QLabel *label_4;
    QCheckBox *thurtday;
    QLineEdit *capacity;

    void setupUi(QWidget *AddCargoForm)
    {
        if (AddCargoForm->objectName().isEmpty())
            AddCargoForm->setObjectName("AddCargoForm");
        AddCargoForm->resize(475, 508);
        sunday = new QCheckBox(AddCargoForm);
        sunday->setObjectName("sunday");
        sunday->setGeometry(QRect(350, 270, 91, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        sunday->setFont(font);
        label_7 = new QLabel(AddCargoForm);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 200, 241, 31));
        label_7->setFont(font);
        friday = new QCheckBox(AddCargoForm);
        friday->setObjectName("friday");
        friday->setGeometry(QRect(350, 210, 91, 31));
        friday->setFont(font);
        label_10 = new QLabel(AddCargoForm);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 290, 241, 31));
        label_10->setFont(font);
        label_8 = new QLabel(AddCargoForm);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 230, 241, 31));
        label_8->setFont(font);
        back = new QPushButton(AddCargoForm);
        back->setObjectName("back");
        back->setGeometry(QRect(280, 430, 111, 41));
        back->setFont(font);
        price = new QLineEdit(AddCargoForm);
        price->setObjectName("price");
        price->setGeometry(QRect(130, 350, 171, 31));
        price->setFont(font);
        label = new QLabel(AddCargoForm);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 461, 41));
        label->setFont(font);
        numberOfSeats = new QLineEdit(AddCargoForm);
        numberOfSeats->setObjectName("numberOfSeats");
        numberOfSeats->setGeometry(QRect(230, 130, 113, 31));
        numberOfSeats->setFont(font);
        saturday = new QCheckBox(AddCargoForm);
        saturday->setObjectName("saturday");
        saturday->setGeometry(QRect(350, 240, 91, 31));
        saturday->setFont(font);
        destination = new QSpinBox(AddCargoForm);
        destination->setObjectName("destination");
        destination->setGeometry(QRect(270, 170, 61, 31));
        destination->setFont(font);
        label_9 = new QLabel(AddCargoForm);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 260, 241, 31));
        label_9->setFont(font);
        label_3 = new QLabel(AddCargoForm);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 380, 241, 41));
        label_3->setFont(font);
        wednesday = new QCheckBox(AddCargoForm);
        wednesday->setObjectName("wednesday");
        wednesday->setGeometry(QRect(350, 150, 91, 31));
        wednesday->setFont(font);
        label_5 = new QLabel(AddCargoForm);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 130, 221, 31));
        label_5->setFont(font);
        monday = new QCheckBox(AddCargoForm);
        monday->setObjectName("monday");
        monday->setGeometry(QRect(350, 89, 91, 31));
        monday->setFont(font);
        id = new QLineEdit(AddCargoForm);
        id->setObjectName("id");
        id->setGeometry(QRect(130, 90, 171, 31));
        id->setFont(font);
        label_6 = new QLabel(AddCargoForm);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 170, 241, 31));
        label_6->setFont(font);
        tuesday = new QCheckBox(AddCargoForm);
        tuesday->setObjectName("tuesday");
        tuesday->setGeometry(QRect(350, 120, 91, 31));
        tuesday->setFont(font);
        submit = new QPushButton(AddCargoForm);
        submit->setObjectName("submit");
        submit->setGeometry(QRect(40, 430, 181, 41));
        submit->setFont(font);
        label_12 = new QLabel(AddCargoForm);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(20, 350, 91, 31));
        label_12->setFont(font);
        label_2 = new QLabel(AddCargoForm);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(300, 50, 151, 31));
        label_2->setFont(font);
        label_11 = new QLabel(AddCargoForm);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 320, 261, 31));
        label_11->setFont(font);
        label_4 = new QLabel(AddCargoForm);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 90, 91, 31));
        label_4->setFont(font);
        thurtday = new QCheckBox(AddCargoForm);
        thurtday->setObjectName("thurtday");
        thurtday->setGeometry(QRect(350, 180, 91, 31));
        thurtday->setFont(font);
        capacity = new QLineEdit(AddCargoForm);
        capacity->setObjectName("capacity");
        capacity->setGeometry(QRect(280, 390, 171, 31));
        capacity->setFont(font);

        retranslateUi(AddCargoForm);

        QMetaObject::connectSlotsByName(AddCargoForm);
    } // setupUi

    void retranslateUi(QWidget *AddCargoForm)
    {
        AddCargoForm->setWindowTitle(QCoreApplication::translate("AddCargoForm", "Form", nullptr));
        sunday->setText(QCoreApplication::translate("AddCargoForm", "\320\222\321\201", nullptr));
        label_7->setText(QCoreApplication::translate("AddCargoForm", "1. \320\240\320\276\321\201\321\201\320\270\321\217", nullptr));
        friday->setText(QCoreApplication::translate("AddCargoForm", "\320\237\321\202", nullptr));
        label_10->setText(QCoreApplication::translate("AddCargoForm", "4. \320\243\320\272\321\200\320\260\320\270\320\275\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("AddCargoForm", "2. \320\232\320\270\321\202\320\260\320\271", nullptr));
        back->setText(QCoreApplication::translate("AddCargoForm", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label->setText(QCoreApplication::translate("AddCargoForm", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\276 \320\275\320\276\320\262\320\276\320\274 \320\277\320\276\320\265\320\267\320\264\320\265", nullptr));
        saturday->setText(QCoreApplication::translate("AddCargoForm", "\320\241\320\261", nullptr));
        label_9->setText(QCoreApplication::translate("AddCargoForm", "3. \320\237\320\276\320\273\321\214\321\210\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("AddCargoForm", "\320\223\321\200\321\203\320\267\320\276\320\277\320\276\320\264\321\212\321\221\320\274\320\275\320\276\321\201\321\202\321\214:", nullptr));
        wednesday->setText(QCoreApplication::translate("AddCargoForm", "\320\241\321\200", nullptr));
        label_5->setText(QCoreApplication::translate("AddCargoForm", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\274\320\265\321\201\321\202:", nullptr));
        monday->setText(QCoreApplication::translate("AddCargoForm", "\320\237\320\275", nullptr));
        label_6->setText(QCoreApplication::translate("AddCargoForm", "\320\237\321\203\320\275\320\272\321\202 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217:", nullptr));
        tuesday->setText(QCoreApplication::translate("AddCargoForm", "\320\222\321\202", nullptr));
        submit->setText(QCoreApplication::translate("AddCargoForm", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_12->setText(QCoreApplication::translate("AddCargoForm", "\320\246\320\265\320\275\320\260:", nullptr));
        label_2->setText(QCoreApplication::translate("AddCargoForm", "\320\240\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        label_11->setText(QCoreApplication::translate("AddCargoForm", "5. \320\236\321\201\321\202\320\260\320\273\321\214\320\275\321\213\320\265 \321\201\321\202\321\200\320\260\320\275\321\213", nullptr));
        label_4->setText(QCoreApplication::translate("AddCargoForm", "\320\235\320\276\320\274\320\265\321\200:", nullptr));
        thurtday->setText(QCoreApplication::translate("AddCargoForm", "\320\247\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddCargoForm: public Ui_AddCargoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCARGOFORM_H
