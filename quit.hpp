#ifndef QUIT_HPP
#define QUIT_HPP

#include <QDialog>

namespace Ui {
class Quit;
}

class Quit : public QDialog
{
    Q_OBJECT

public:
    explicit Quit(QWidget *parent = nullptr);
    ~Quit();

private:
    Ui::Quit *ui;
};

#endif // QUIT_HPP
