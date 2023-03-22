#ifndef SQUAREROOTS_H
#define SQUAREROOTS_H

#include <QMainWindow>

namespace Ui {
class SquareRoots;
}

class SquareRoots : public QMainWindow
{
    Q_OBJECT

public:
    explicit SquareRoots(QWidget *parent = 0);
    ~SquareRoots();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SquareRoots *ui;
};

#endif // SQUAREROOTS_H
