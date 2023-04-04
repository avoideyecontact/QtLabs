#ifndef LAB10_H
#define LAB10_H

#include <QMainWindow>
#include <QQueue>

namespace Ui {
class lab10;
}

class lab10 : public QMainWindow
{
    Q_OBJECT

public:
    explicit lab10(QWidget *parent = 0);
    ~lab10();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::lab10 *ui;
    QQueue <int> q;
};

#endif // LAB10_H
