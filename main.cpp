#include <QApplication>
#include <QtWidgets>
#include "fenetre.h"
#include <string>
#include <vector>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Fenetre fen;
    fen.show();

    return app.exec();
}
