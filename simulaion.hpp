#ifndef SIMULAION_HPP
#define SIMULAION_HPP

#include <QDialog>

namespace Ui {
class Simulaion;
}

class Simulaion : public QDialog
{
    Q_OBJECT

public:
    explicit Simulaion(QWidget *parent = nullptr);
    ~Simulaion();

private:
    Ui::Simulaion *ui;
};

#endif // SIMULAION_HPP
