#include "file.h"
#include "ui_file.h"
#include <QTextStream>
#include <QFile>
#include <QDataStream>
#include <QMessageBox>

file::file(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::file)
{
    ui->setupUi(this);
}

file::~file()
{
    delete ui;
}

void file::on_pushButton_clicked()
{
    QFile myFile("../Lab12/f.txt");
    if (!myFile.exists())
    {
        QMessageBox::warning(this,"Ошибка","Файл не найден");
        return;
    }
    if (!myFile.open(QIODevice::ReadOnly))
    {
        QMessageBox::warning(this,"Ошибка","Файл нельзя открыть для чтения");
        return;
    }
    QTextStream stream(&myFile);
    QString buffer = stream.readAll();
    ui->textEdit->setText(buffer);
    myFile.close();
}

void file::on_pushButton_2_clicked()
{
    QFile myFile("../Lab12/g.txt");
    if (!myFile.exists())
    {
        QMessageBox::warning(this,"Ошибка","Файл не найден");
        return;
    }
    if (!myFile.open(QIODevice::ReadOnly))
    {
        QMessageBox::warning(this,"Ошибка","Файл нельзя открыть для чтения");
        return;
    }
    QTextStream stream(&myFile);
    QString buffer = stream.readAll();
    ui->textEdit->setText(buffer);
    myFile.close();
}

void file::on_pushButton_3_clicked()
{
    QFile myFile("../Lab12/h.txt");
    if (!myFile.exists())
    {
        QMessageBox::warning(this,"Ошибка","Файл не найден");
        return;
    }
    if (!myFile.open(QIODevice::ReadOnly))
    {
        QMessageBox::warning(this,"Ошибка","Файл нельзя открыть для чтения");
        return;
    }
    QTextStream stream(&myFile);
    QString buffer = stream.readAll();
    ui->textEdit->setText(buffer);
    myFile.close();
}

void file::on_pushButton_4_clicked()
{
    QFile myFile("../Lab12/f.txt");
    if (!myFile.exists())
    {
        QMessageBox::warning(this,"Ошибка","Файл не найден");
        return;
    }
    if (!myFile.open(QIODevice::ReadOnly))
    {
        QMessageBox::warning(this,"Ошибка","Файл нельзя открыть для чтения");
        return;
    }
    QTextStream stream(&myFile);
    QString buffer = stream.readAll();
    QStringList numbers =
    buffer.split(" ",QString::SkipEmptyParts);
    myFile.close();

    QFile myFileG("../Lab12/g.txt");
    if (!myFileG.exists())
    {
        QMessageBox::warning(this,"Ошибка","Файл не найден");
        return;
    }
    if (!myFileG.open(QIODevice::WriteOnly))
    {
        QMessageBox::warning(this,"Ошибка","Файл нельзя открыть для записи");
        return;
    }

    QFile myFileH("../Lab12/h.txt");
    if (!myFileH.exists())
    {
        QMessageBox::warning(this,"Ошибка","Файл не найден");
        return;
    }
    if (!myFileH.open(QIODevice::WriteOnly))
    {
        QMessageBox::warning(this,"Ошибка","Файл нельзя открыть для записи");
        return;
    }

    QTextStream streamG(&myFileG);
    QTextStream streamH(&myFileH);
    int k = 1;
    for (int i = 0; i < numbers.length()-1; i++)
    {
        int val = numbers[i].toInt() + numbers[i+1].toInt();
        if (k % 2 == 0)
        {
            streamG << QString::number(val) + " ";
        }
        else
        {
            streamH << QString::number(val) + " ";
        }
        k++;
    }
    myFileG.close();
    myFileH.close();
}

void file::on_pushButton_5_clicked()
{
    QFile myFileG("../Lab12/g.txt");
    if (!myFileG.exists())
    {
        QMessageBox::warning(this,"Ошибка","Файл не найден");
        return;
    }
    if (!myFileG.open(QIODevice::WriteOnly))
    {
        QMessageBox::warning(this,"Ошибка","Файл нельзя открыть для записи");
        return;
    }

    QFile myFileH("../Lab12/h.txt");
    if (!myFileH.exists())
    {
        QMessageBox::warning(this,"Ошибка","Файл не найден");
        return;
    }
    if (!myFileH.open(QIODevice::WriteOnly))
    {
        QMessageBox::warning(this,"Ошибка","Файл нельзя открыть для записи");
        return;
    }

    QTextStream streamG(&myFileG);
    QTextStream streamH(&myFileH);
    streamG << QString("");
    streamH << QString("");
    myFileG.close();
    myFileH.close();
}
