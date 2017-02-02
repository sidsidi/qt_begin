#ifndef MOJEOKNO_H
#define MOJEOKNO_H

#include <QMainWindow>

namespace Ui {
class MoJeOkno;
}

class MoJeOkno : public QMainWindow
{
    Q_OBJECT

public:
    explicit MoJeOkno(QWidget *parent = 0);
    ~MoJeOkno();

private:
    Ui::MoJeOkno *ui;
};

#endif // MOJEOKNO_H
