#include "weatherappmainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WeatherAppMainWindow w;
    w.show();
    return a.exec();
}
