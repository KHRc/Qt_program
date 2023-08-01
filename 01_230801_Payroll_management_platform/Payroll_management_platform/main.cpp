#include "Payroll_management_platform.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Payroll_management_platform w;
    w.show();
    return a.exec();
}
