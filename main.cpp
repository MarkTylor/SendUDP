#include "udpsend.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UDPsend w;
    w.show();

    return a.exec();
}
