#include "calculator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    calculator w;
    w.show();
    w.setFixedSize(400,300);
    w.setWindowTitle("计算器");
    w.myLayout();
    return a.exec();
}
