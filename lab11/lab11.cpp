#include "lab11.h"
#include "ui_lab11.h"

#include <QMap>
#include <QSet>
#include <random>

Lab11::Lab11(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Lab11)
{
    ui->setupUi(this);

    places << "Горы";
    places << "Пещеры";
    places << "Водопады";
    places << "Гейзеры";
    places << "Реки";
    places << "Озера";

    book["Николай"] = {"Горы", "Водопады" ,"Озера"};
    book["Татьяна"] = {"Горы", "Водопады" ,"Озера"};
    book["Ангелина"] = {"Горы", "Водопады" ,"Реки"};

    for (auto it = book.begin(); it != book.end(); it++)
    {
        QString str = "";
        str += it.key()+"\n";
        for (auto i : it.value())
        {
            str += i+" ";
        }
        str += "\n";
        ui->textEdit->append(str);
    }
}

Lab11::~Lab11()
{
    delete ui;
}

void Lab11::on_pushButton_clicked()
{
    if (ui->radioButton->isChecked())
    {
        QString str = "";
        for (auto place : places)
        {
            bool flag = true;
            for (auto it = book.begin(); it != book.end(); it++)
            {
                if (!it.value().contains(place))
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                str += place+"\n";
            }
        }
        ui->textEdit_2->setText(str);
    }
    else if (ui->radioButton_2->isChecked())
    {
        QString str = "";
        for (auto place : places)
        {
            bool flag = false;
            for (auto it = book.begin(); it != book.end(); it++)
            {
                if (it.value().contains(place))
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
            {
                str += place+"\n";
            }
        }
        ui->textEdit_2->setText(str);
    }
    else if (ui->radioButton_3->isChecked())
    {
        QString str = "";
        for (auto place : places)
        {
            bool flag = true;
            for (auto it = book.begin(); it != book.end(); it++)
            {
                if (it.value().contains(place))
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                str += place+"\n";
            }
        }
        ui->textEdit_2->setText(str);
    }
}
