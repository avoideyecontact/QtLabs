#ifndef LAB9_H
#define LAB9_H

#include <QMainWindow>

namespace Ui {
class lab9;
}

class lab9 : public QMainWindow
{
    Q_OBJECT

public:
    explicit lab9(QWidget *parent = 0);
    ~lab9();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::lab9 *ui;
    QList <int> list;
};

#endif // LAB9_H
