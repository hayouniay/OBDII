#include "mainobd.hpp"
#include "ui_mainobd.h"

MainOBD::MainOBD(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainOBD)
{
    ui->setupUi(this);
}

MainOBD::~MainOBD()
{
    delete ui;
}

