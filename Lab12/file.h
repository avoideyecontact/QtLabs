#ifndef FILE_H
#define FILE_H

#include <QMainWindow>

namespace Ui {
class file;
}

class file : public QMainWindow
{
    Q_OBJECT

public:
    explicit file(QWidget *parent = 0);
    ~file();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::file *ui;
};

#endif // FILE_H
