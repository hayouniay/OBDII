#ifndef MAINOBD_HPP
#define MAINOBD_HPP

#include <QMainWindow>
#include "quit.hpp"

QT_BEGIN_NAMESPACE
namespace Ui { class MainOBD; }
QT_END_NAMESPACE

class MainOBD : public QMainWindow
{
    Q_OBJECT

public:
    MainOBD(QWidget *parent = nullptr);
    ~MainOBD();

private slots:
    //void on_btnmenu_clicked();
    void on_quitbtn_clicked();

private:
    Ui::MainOBD *ui;
    Quit *ptrQuit;
};
#endif // MAINOBD_HPP
