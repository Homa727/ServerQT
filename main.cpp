#include <QCoreApplication>
#include "server.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MyServer server;
    server.startserver();

    return a.exec();
}
