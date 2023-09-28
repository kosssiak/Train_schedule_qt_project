/********************************************************************************
** Form generated from reading UI file 'takecargotecketform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAKECARGOTECKETFORM_H
#define UI_TAKECARGOTECKETFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TakeCargoTecketForm
{
public:
    QTableWidget *tableWidget;
    QPushButton *back;
    QLabel *label;
    QSpinBox *number;
    QSpinBox *spinBox;
    QPushButton *submit;
    QLabel *label_3;
    QLabel *label_2;

    void setupUi(QWidget *TakeCargoTecketForm)
    {
        if (TakeCargoTecketForm->objectName().isEmpty())
            TakeCargoTecketForm->setObjectName("TakeCargoTecketForm");
        TakeCargoTecketForm->resize(1059, 566);
        tableWidget = new QTableWidget(TakeCargoTecketForm);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 50, 1041, 381));
        back = new QPushButton(TakeCargoTecketForm);
        back->setObjectName("back");
        back->setGeometry(QRect(860, 450, 151, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        back->setFont(font);
        label = new QLabel(TakeCargoTecketForm);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 0, 361, 51));
        label->setFont(font);
        number = new QSpinBox(TakeCargoTecketForm);
        number->setObjectName("number");
        number->setGeometry(QRect(290, 500, 61, 41));
        number->setFont(font);
        spinBox = new QSpinBox(TakeCargoTecketForm);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(230, 440, 61, 41));
        spinBox->setFont(font);
        submit = new QPushButton(TakeCargoTecketForm);
        submit->setObjectName("submit");
        submit->setGeometry(QRect(360, 450, 231, 41));
        submit->setFont(font);
        label_3 = new QLabel(TakeCargoTecketForm);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 500, 261, 41));
        label_3->setFont(font);
        label_2 = new QLabel(TakeCargoTecketForm);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 440, 191, 41));
        label_2->setFont(font);

        retranslateUi(TakeCargoTecketForm);

        QMetaObject::connectSlotsByName(TakeCargoTecketForm);
    } // setupUi

    void retranslateUi(QWidget *TakeCargoTecketForm)
    {
        TakeCargoTecketForm->setWindowTitle(QCoreApplication::translate("TakeCargoTecketForm", "Form", nullptr));
        back->setText(QCoreApplication::translate("TakeCargoTecketForm", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label->setText(QCoreApplication::translate("TakeCargoTecketForm", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\263\321\200\321\203\320\267\320\276\320\262\321\213\321\205 \320\277\320\276\320\265\320\267\320\264\320\276\320\262", nullptr));
        submit->setText(QCoreApplication::translate("TakeCargoTecketForm", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("TakeCargoTecketForm", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\261\320\270\320\273\320\265\321\202\320\276\320\262:", nullptr));
        label_2->setText(QCoreApplication::translate("TakeCargoTecketForm", "\320\235\320\276\320\274\320\265\321\200 \320\277\320\276\320\265\320\267\320\264\320\260:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TakeCargoTecketForm: public Ui_TakeCargoTecketForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAKECARGOTECKETFORM_H
