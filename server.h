#ifndef SERVER_H
#define SERVER_H
#include <QTcpServer>
#include <QTcpSocket>

class MyServer: public QTcpServer{
    Q_OBJECT
public:
    MyServer();
    ~MyServer();
    void startserver();
    QTcpSocket* socket;
    QByteArray Data;
private slots:
    void incomingConnection(int soketDescription);
    void sockReady();
    void sockDisc();

};

#endif // SERVER_H
