#include "mainobd.hpp"
#include "ui_mainobd.h"

MainOBD::MainOBD(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainOBD)
{
    ui->setupUi(this);
    //ptrMenu = new Menu(this);
    ptrQuit = new Quit(this);

    //connect(ptrMenu, SIGNAL(clicked()), this, SLOT(on_btnmenu_clicked()));
    connect(ptrQuit, SIGNAL(clicked()), this, SLOT(on_quitbtn_clicked()));
}

MainOBD::~MainOBD()
{
    delete ui;
}

void MainOBD::on_quitbtn_clicked()
{
    qDebug() <<this->metaObject()->className()<< ": Cancellation in process ...";
    ptrQuit->show();
}

