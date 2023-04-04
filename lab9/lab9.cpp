#include "lab9.h"
#include "ui_lab9.h"

#include <random>
#include <QMessageBox>

lab9::lab9(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::lab9)
{
    ui->setupUi(this);
}

lab9::~lab9()
{
    delete ui;
}

void lab9::on_pushButton_clicked()
{
    list.clear();
    QString str = "";
    for (int i=0; i < 20; i++)
    {
        int n = rand() % 10;
        list.push_back(n);
        str += QString::number(n)+" ";
    }
    ui->lineEdit->setText(str);
}

void lab9::on_pushButton_2_clicked()
{
    if (list.isEmpty())
    {
        QMessageBox::information(this,"Ошибка", "Создайте список!"); return;
    }

    QVector <int> list2;
    if (ui->radioButton->isChecked())
    {
        for (auto i : list)
        {
            if (i % 2 == 0)
                list2.append(i);
        }
    }
    else if (ui->radioButton_2->isChecked())
    {
        for (auto i : list)
        {
            if (i % 2 != 0)
                list2.append(i);
        }
    }
    QString str = "";

    for (auto i : list2)
    {
        str += QString::number(i) + " ";
    }

    ui->lineEdit_2->setText(str);
}
