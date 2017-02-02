#include "mojeokno.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MoJeOkno w;
    w.show();

    return a.exec();
}
