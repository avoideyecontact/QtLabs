#include "calc.h"
#include "ui_calc.h"
#include <QStack>
#include <QString>

calc::calc(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::calc)
{
    ui->setupUi(this);
}

calc::~calc()
{
    delete ui;
}

void calc::on_pushButton_11_clicked()
{
    ui->lineEdit->insert("0");
}

void calc::on_pushButton_clicked()
{
    ui->lineEdit->insert("1");
}

void calc::on_pushButton_2_clicked()
{
    ui->lineEdit->insert("2");
}

void calc::on_pushButton_3_clicked()
{
    ui->lineEdit->insert("3");
}

void calc::on_pushButton_6_clicked()
{
    ui->lineEdit->insert("4");
}

void calc::on_pushButton_5_clicked()
{
    ui->lineEdit->insert("5");
}

void calc::on_pushButton_4_clicked()
{
    ui->lineEdit->insert("6");
}

void calc::on_pushButton_9_clicked()
{
    ui->lineEdit->insert("7");
}

void calc::on_pushButton_8_clicked()
{
    ui->lineEdit->insert("8");
}

void calc::on_pushButton_7_clicked()
{
    ui->lineEdit->insert("9");
}

void calc::on_pushButton_12_clicked()
{
    stack.clear();
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
}

void calc::on_pushButton_10_clicked()
{
    if (ui->lineEdit->text().length() == 0 || ui->lineEdit->text().at(ui->lineEdit->text().length()- 1) == '-' ||ui->lineEdit->text().indexOf('.') != -1)
        return;
    ui->lineEdit->setText(ui->lineEdit->text()+'.');
}

void calc::on_pushButton_14_clicked()
{
    calculate("+");
}

void calc::on_pushButton_15_clicked()
{
    calculate("-");
}

void calc::on_pushButton_16_clicked()
{
    calculate("*");
}

void calc::on_pushButton_17_clicked()
{
    calculate("/");
}

void calc::on_pushButton_13_clicked()
{
    /*если есть первый операнд и знак и в строке lineedit не пусто, то
    помещаемиз lineEdit в стек*/
    if (ui->lineEdit->text().length() != 0 && stack.length() == 2) {
        stack.push(ui->lineEdit->text());}
    if (stack.length() < 3) {return;}
    //извлекаем из стека числа и знак операции
    double val2 = stack.pop().toDouble();
    QString sign = stack.pop();
    double val1 = stack.pop().toDouble();
    //помещаем в стек результат действия в зависимости от знака операции
    if (sign == "+") {
        stack.push(QString::number(val1+val2));
    } else if (sign == "-") {
        stack.push(QString::number(val1-val2));
    } else if (sign == "*") {
        stack.push(QString::number(val1*val2));
    } else if (sign == "/") {
        if (val2 == 0) { stack.push(QString::number(val1));
            stack.push(sign);
            ui->lineEdit->clear();
            return;}
        stack.push(QString::number(val1/val2));
    }
    else if (sign == "|") {
        int val1_int = static_cast<int>(val1);
        int val2_int = static_cast<int>(val2);
        stack.push(QString::number(val1_int | val2_int));
    }
    else if (sign == "&") {
        int val1_int = static_cast<int>(val1);
        int val2_int = static_cast<int>(val2);
        stack.push(QString::number(val1_int & val2_int));
    }
    else if(sign == "~" ){
        int val1_int = static_cast<int>(val1);
        stack.push(QString::number(~val1_int));
    }
    ui->lineEdit->setText(stack.pop());
    ui->lineEdit_2->setText(stack.toList().join(""));
}

void calc::calculate(QString sgn){
    if (ui->lineEdit->text().isEmpty()) {
        return;
    }
    if (sgn == "~"){
        double val1 = ui->lineEdit->text().toDouble();
        int val1_int = static_cast<int>(val1);
        stack.push(QString::number(~val1_int));
        ui->lineEdit_2->setText(stack.toList().join(""));
        ui->lineEdit->clear();
        return;
    }
    if (stack.length() >= 2) {
        double val2 = ui->lineEdit->text().toDouble();
        QString sign = stack.pop();
        double val1 = stack.pop().toDouble();
        if (sign == "+") {
            stack.push(QString::number(val1 + val2));
        } else if (sign == "-") {
            stack.push(QString::number(val1 - val2));
        } else if (sign == "*") {
            stack.push(QString::number(val1 * val2));
        } else if (sign == "/") {
            if (val2 == 0) {
                stack.push(QString::number(val1));
            } else {
                stack.push(QString::number(val1 / val2));
            }
        } else if (sign == "|"){
            int val1_int = static_cast<int>(val1);
            int val2_int = static_cast<int>(val2);
            stack.push(QString::number(val1_int | val2_int));
        } else if (sign == "&"){
            int val1_int = static_cast<int>(val1);
            int val2_int = static_cast<int>(val2);
            stack.push(QString::number(val1_int & val2_int));
        }
        stack.push(sgn);
    } else {
        stack.push(ui->lineEdit->text());
        stack.push(sgn);
    }
    ui->lineEdit->clear();
    ui->lineEdit_2->setText(stack.toList().join(""));
}

void calc::on_pushButton_18_clicked()
{
    memory = ui->lineEdit->text().toDouble();
}

void calc::on_pushButton_19_clicked()
{
    ui->lineEdit_2->setText(QString::number(memory));
}

void calc::on_pushButton_20_clicked()
{
    memory = 0.0;
}

void calc::on_pushButton_21_clicked()
{
    memory += ui->lineEdit->text().toDouble();
}

void calc::on_pushButton_22_clicked()
{
    memory -= ui->lineEdit->text().toDouble();
}

void calc::on_pushButton_23_clicked()
{
    if (ui->lineEdit->text().length() == 0 || ui->lineEdit->text().at(0) != '-')
        ui->lineEdit->setText("-" + ui->lineEdit->text());
    else
    ui->lineEdit->setText(ui->lineEdit->text().remove(0,1));
}
