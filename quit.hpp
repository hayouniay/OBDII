#ifndef QUIT_HPP
#define QUIT_HPP

#include <QDialog>
#include "log.hpp"

namespace Ui {
class Quit;
}

class Quit : public QDialog
{
    Q_OBJECT

public:
    explicit Quit(QWidget *parent = nullptr);
    ~Quit();

private slots:
    void on_quitbtn_clicked();

private:
    Ui::Quit *ui;
};

#endif // QUIT_HPP
