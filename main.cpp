#include "mycustomwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myCustomWidget w;
    w.showFullScreen();

    return a.exec();
}
