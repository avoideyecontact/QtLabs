#include "lab10.h"
#include "ui_lab10.h"

#include <random>
#include <QMessageBox>

lab10::lab10(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::lab10)
{
    ui->setupUi(this);
}

lab10::~lab10()
{
    delete ui;
}

void lab10::on_pushButton_clicked()
{
    q.clear();
    QString str = "";
    for (int i=0; i < 10; i++)
    {
        int n = rand() % 9 + 1;
        q.enqueue(n);
        str += QString::number(n) + " ";
    }
    ui->lineEdit->setText(str);
}

void lab10::on_pushButton_2_clicked()
{
    if (q.empty())
    {
        QMessageBox::information(this,"Ошибка", "Сфомируйте очереь!"); return;
    }

    int min = 999999;
    for (int i=0; i < 10; i++)
    {
        int n = q.dequeue();
        if (n < min)
        {
            min = n;
        }
        q.enqueue(n);
    }
    QString str = "Минимальное число: " + QString::number(min);
    ui->label->setText(str);

    str.clear();
    for (int i=0; i < 10; i++)
    {
        int n = q.dequeue();
        n -= min;
        q.enqueue(n);
        str += QString::number(n) + " ";
    }
    ui->lineEdit_2->setText(str);
}
