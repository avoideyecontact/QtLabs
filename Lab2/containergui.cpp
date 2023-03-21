#include "containergui.h"
#include "ui_containergui.h"

ContainerGui::ContainerGui(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ContainerGui)
{
    ui->setupUi(this);
}

ContainerGui::~ContainerGui()
{
    delete ui;
}
