#include "squareroots.h"
#include "ui_squareroots.h"
#include <QMessageBox>
#include <string>

SquareRoots::SquareRoots(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SquareRoots)
{
    ui->setupUi(this);
}

SquareRoots::~SquareRoots()
{
    delete ui;
}

float getDiscriminant(float a, float b, float c)
{
    float d = b*b - 4*a*c;

    return d;
}

float getRoot1(float a, float b, float c)
{
    float d = getDiscriminant(a, b, c);

    float root = (-b + sqrt(d)) / (2*a);

    return root;
}

float getRoot2(float a, float b, float c)
{
    float d = getDiscriminant(a, b, c);

    float root = (-b - sqrt(d)) / (2*a);

    return root;
}

void SquareRoots::on_pushButton_clicked()
{
    QString firstNumStr = ui ->lineEdit->text();
    QString secondNumStr = ui->lineEdit_2->text();
    QString thirdNumStr = ui->lineEdit_3->text();

    bool ok;

    float A = firstNumStr.toFloat(&ok);
    if (!ok or A==0)
    {
        QMessageBox::information(this,"Ошибка", "Введите число!");
        return;
    }

    float B = secondNumStr.toFloat(&ok);
    if (!ok)
    {
        QMessageBox::information(this,"Ошибка", "Введите число!");
        return;
    }

    float C = thirdNumStr.toFloat(&ok);
    if (!ok)
    {
        QMessageBox::information(this,"Ошибка", "Введите число!");
        return;
    }

    float d = getDiscriminant(A, B, C);

    if (d > 0)
    {
        float root1 = getRoot1(A, B, C);
        float root2 = getRoot2(A, B, C);

        QString text = QString("Два различных корня:\n\n%1\n%2").arg(root1).arg(root2);

        ui->label_4->setText(text);
    }
    else if (d == 0)
    {
        float root = getRoot1(A, B, C);

        QString text = QString("Два совпадающих корня:\n\n%1").arg(root);

        ui->label_4->setText(text);
    }
    else if (d < 0)
    {
        QString text = QString("Корней нет.\n\nДискриминант меньше нуля.");

        ui->label_4->setText(text);
    }
}
