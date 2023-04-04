#ifndef LAB11_H
#define LAB11_H

#include <QMainWindow>
#include <QSet>
#include <QMap>

namespace Ui {
class Lab11;
}

class Lab11 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Lab11(QWidget *parent = 0);
    ~Lab11();

private slots:
    void on_pushButton_clicked();

private:
    QSet <QString> places;
    QMap <QString, QSet<QString>> book;
    Ui::Lab11 *ui;
};

#endif // LAB11_H
