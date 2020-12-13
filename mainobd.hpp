#ifndef MAINOBD_HPP
#define MAINOBD_HPP

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainOBD; }
QT_END_NAMESPACE

class MainOBD : public QMainWindow
{
    Q_OBJECT

public:
    MainOBD(QWidget *parent = nullptr);
    ~MainOBD();

private:
    Ui::MainOBD *ui;
};
#endif // MAINOBD_HPP
