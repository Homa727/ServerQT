#include "server.h"
#include <QTcpServer>
#include <QTcpSocket>
 MyServer::MyServer(){

}
MyServer::~MyServer(){

}

void MyServer::startserver(){
    if(this->listen(QHostAddress::Any, 5555)){
        qDebug() << "Listening";
    }else{
        qDebug() << "Not Listening";
    }
}

void MyServer::incomingConnection(int soketDescription){
    socket = new QTcpSocket(this);
    socket->setSocketDescriptor(soketDescription);

    connect(socket, SIGNAL(readyRead()),this,SLOT(sockReady()));
    connect(socket, SIGNAL(disconnected()),this, SLOT(sockDisc()));
    qDebug()<<"Client connected";

    socket->write("You are connect");
    qDebug()<<"Send client connect status-YES";
}

void MyServer::sockReady(){

}

void MyServer::sockDisc(){
      socket->deleteLater();
}
