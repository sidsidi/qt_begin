#include "mojeokno.h"
#include "ui_mojeokno.h"

MoJeOkno::MoJeOkno(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MoJeOkno)
{
    ui->setupUi(this);
}

MoJeOkno::~MoJeOkno()
{
    delete ui;
}
