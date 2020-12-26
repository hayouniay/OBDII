#include "simulaion.hpp"
#include "ui_simulaion.h"

Simulaion::Simulaion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Simulaion)
{
    ui->setupUi(this);
}

Simulaion::~Simulaion()
{
    delete ui;
}
