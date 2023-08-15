#include "fileeditorwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FileEditorWindow w;
    w.show();
    return a.exec();
}
