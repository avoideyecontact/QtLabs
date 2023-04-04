#ifndef LAB8_H
#define LAB8_H

#include <QMainWindow>
#include <QVector>

namespace Ui {
class lab8;
}

class lab8 : public QMainWindow
{
    Q_OBJECT

public:
    explicit lab8(QWidget *parent = 0);
    ~lab8();



private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::lab8 *ui;
    QVector <QVector <int> > matrix;
    int strCount;
};

#endif // LAB8_H
