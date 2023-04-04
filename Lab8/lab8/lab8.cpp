#include "lab8.h"
#include "ui_lab8.h"

#include <random>
#include <QMessageBox>

lab8::lab8(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::lab8)
{
    ui->setupUi(this);
}

lab8::~lab8()
{
    delete ui;
}

void lab8::on_pushButton_clicked()
{
    bool ok;
    qint8 m = ui->lineEdit->text().toInt(&ok);
    qint8 n = ui->lineEdit_2->text().toInt(&ok);

    if(!ok)
    {
        QMessageBox::information(this,"Ошибка", "Введите число!"); return;
    }

    matrix.clear();
    for (int i=0; i < m; i++)
    {
        QVector<int> vec;
        for (int j=0; j < n; j++)
        {
            vec.append(rand() % 10);
        }
        matrix.append(vec);
    }
    ui->textEdit->clear();
    for (int i = 0; i < matrix.length(); i++)
    {
        QString str = "";
        for (int j = 0; j < matrix[i].length(); j++)
        {
            str += QString::number(matrix[i][j]) + "  ";
        }
        ui->textEdit->append(str);
    }

//    matrix.clear();
//    for (int i = 0; i < 5; i++) {
//    QVector<int> vec;
//    for (int j = 0; j <= i; j++) {
//    vec.append(i*j); }
//    matrix.append(vec); }
//    strCount = 5;
//    ui->textEdit->clear();
//    for (int i = 0; i < matrix.length(); i++) {
//    QString str = "";
//    for (int j = 0; j < matrix[i].length(); j++) {
//    str += QString::number(matrix[i][j])+" | "; }
//    ui->textEdit->append(str);}
}

void lab8::on_pushButton_2_clicked()
{
    if (matrix.length() == 0)
    {
        QMessageBox::information(this,"Ошибка", "Создайте матрицу!"); return;
    }
    switch (ui->comboBox->currentIndex())
    {
        case 0:
        {
            int k=0;

            for (int i=0; i < matrix.length(); i++)
            {
                for (int j=0; j < matrix[i].length(); j++)
                {
                    if (matrix[i][j] == 0)
                    {
                        k++;
                    }
                }
            }
            ui->label->setText(QString("Количество: ")+QString::number(k));
            break;
        }
        case 1:
        {
        int k=0;

        for (int i=0; i < matrix.length(); i++)
        {
            for (int j=0; j < matrix[i].length(); j++)
            {
                if (matrix[i][j] != 0)
                {
                    k++;
                }
            }
        }
        ui->label->setText(QString("Количество: ")+QString::number(k));
        break;
        }
    }
}
