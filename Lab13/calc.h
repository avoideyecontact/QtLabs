#ifndef CALC_H
#define CALC_H

#include <QMainWindow>
#include <QStack>
#include <QString>

namespace Ui {
class calc;
}

class calc : public QMainWindow
{
    Q_OBJECT

public:
    explicit calc(QWidget *parent = 0);
    ~calc();

private slots:
    void on_pushButton_11_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_23_clicked();

    void on_checkBox_toggled(bool checked);

private:
    Ui::calc *ui;
    QStack<QString> stack;
    void calculate(QString sgn);
    double memory = 0.0;
};

#endif // CALC_H
