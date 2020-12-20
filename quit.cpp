#include "quit.hpp"
#include "ui_quit.h"

Quit::Quit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Quit)
{
    ui->setupUi(this);
}

Quit::~Quit()
{
    delete ui;
}

void Quit::on_quitbtn_clicked()
{
    //quit only this window
    qDebug() <<this->metaObject()->className()<< ": Exit from project registration succefelly !!";
    this->close();
    //quit main window
    qApp->quit();
}
