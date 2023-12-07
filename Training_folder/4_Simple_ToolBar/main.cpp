#include "QtWidgetsApplication_study.h"
#include <QtWidgets/QApplication>
#include "toolbar.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Toolbar window;
    window.resize(350, 150);
    window.setWindowTitle("Simple menu");
    window.show();
   
    return a.exec();
}
