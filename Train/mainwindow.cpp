#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clickException.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_exit_clicked()
{
    QApplication::exit(0);
}

void MainWindow::on_passengerB_clicked()
{
    try
    {
        if(ui->passenger->text() == "")
        {
            throw ClickException(Except::emptyLines, this, "Введите имя пользователя!");
        }
        id = ui->passenger->text();
        List<QString> * list = new List<QString>();
        File::openUser(list, "users.txt");
        bool flag = false;
        for (Iterator it = list->begin(); it != list->end() + 1; ++it)
        {
            if(it.getPtr() == nullptr)
            {
                break;
            }
            if ((*it) == id)
            {
                flag = true;
            }
        }
        if (!flag)
        {
            string str = id.toStdString() + "P.txt";
            ofstream of(str.c_str());
            of.close();
            str = id.toStdString() + "C.txt";
            ofstream on(str.c_str());
            on.close();
            list->push(id);
            File::saveUser(list, "users.txt");
        }
        MenuWindow *w = new MenuWindow(2, id);
        w->setVisible(true);
        this->close();
        delete this;
    }
    catch(ClickException<MainWindow> &obj)
    {
        obj.show();
                return;
    }
}

void MainWindow::on_admin_clicked()
{
    id = "";
    MenuWindow *w = new MenuWindow(1, "");
    w->setVisible(true);
    this->close();
    delete this;
}
