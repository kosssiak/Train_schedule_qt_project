#include "menuwindow.h"
#include "ui_menuwindow.h"

MenuWindow::MenuWindow(int variant, QString id) : variant(variant), id(id), ui(new Ui::MenuWindow)
{
    ui->setupUi(this);
}

MenuWindow::~MenuWindow()
{
    delete ui;
}

void MenuWindow::on_back_clicked()
{
    MainWindow *w = new MainWindow;
    w->setVisible(true);
    this->close();
    delete this;
}

void MenuWindow::on_cargo_clicked()
{
    if (variant == 1)
    {
        AdminMenuWindow *w = new AdminMenuWindow(1);
        w->setVisible(true);
    }
    else
    {
        PassengerMenuWindow *w = new PassengerMenuWindow(1, id);
        w->setVisible(true);
    }
    this->close();
    delete this;
}

void MenuWindow::on_passenger_clicked()
{
    if (variant == 1)
    {
        AdminMenuWindow *w = new AdminMenuWindow(2);
        w->setVisible(true);
    }
    else
    {
        PassengerMenuWindow *w = new PassengerMenuWindow(2, id);
        w->setVisible(true);
    }
    this->close();
    delete this;
}
