#ifndef CONTAINERGUI_H
#define CONTAINERGUI_H

#include <QMainWindow>

namespace Ui {
class ContainerGui;
}

class ContainerGui : public QMainWindow
{
    Q_OBJECT

public:
    explicit ContainerGui(QWidget *parent = 0);
    ~ContainerGui();

private:
    Ui::ContainerGui *ui;
};

#endif // CONTAINERGUI_H
