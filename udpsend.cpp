#include "udpsend.h"
#include "ui_udpsend.h"


UDPsend::UDPsend(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UDPsend)
{
    ui->setupUi(this);
    socket = new QUdpSocket(this);
    socket->bind(QHostAddress::LocalHost, 29999);
    connect(socket, SIGNAL(readyRead()), this, SLOT (MyRead()));
}

UDPsend::~UDPsend()
{
    delete ui;
}

void UDPsend::JustSend()
{
    QByteArray Data;
    Data.append(ui->textEdit->toPlainText());
    //QHostAddress adam = "127.0.0.1";
    socket->writeDatagram(Data, QHostAddress(ui->textEdit_IP->toPlainText()), (ui->textEdit_Port->toPlainText()).toInt());
}

void UDPsend::on_pushButton_clicked()
{
    UDPsend::JustSend();
}

void UDPsend::on_Slider_x_valueChanged(int value)
{
    QByteArray Data;
    Data.append("A");
    Data.append(ui->Slider_x->value());
    socket->writeDatagram(Data, QHostAddress(ui->textEdit_IP->toPlainText()), (ui->textEdit_Port->toPlainText()).toInt());
}

void UDPsend::on_Slider_y_valueChanged(int value)
{
    QByteArray Data;
    Data.append("B");
    Data.append(ui->Slider_y->value());
    socket->writeDatagram(Data, QHostAddress(ui->textEdit_IP->toPlainText()), (ui->textEdit_Port->toPlainText()).toInt());
}

void UDPsend::on_Slider_z_valueChanged(int value)
{
    QByteArray Data;
    Data.append("C");
    Data.append(ui->Slider_z->value());
    socket->writeDatagram(Data, QHostAddress(ui->textEdit_IP->toPlainText()), (ui->textEdit_Port->toPlainText()).toInt());
}

void UDPsend::on_Slider_x_rot_valueChanged(int value)
{
    QByteArray Data;
    Data.append("D");
    Data.append(ui->Slider_x_rot->value());
    socket->writeDatagram(Data, QHostAddress(ui->textEdit_IP->toPlainText()), (ui->textEdit_Port->toPlainText()).toInt());
}

void UDPsend::on_Slider_y_rot_valueChanged(int value)
{
    QByteArray Data;
    Data.append("E");
    Data.append(ui->Slider_y_rot->value());
    socket->writeDatagram(Data, QHostAddress(ui->textEdit_IP->toPlainText()), (ui->textEdit_Port->toPlainText()).toInt());
}

void UDPsend::on_Slider_z_rot_valueChanged(int value)
{
    QByteArray Data;
    Data.append("F");
    Data.append(ui->Slider_z_rot->value());
    socket->writeDatagram(Data, QHostAddress(ui->textEdit_IP->toPlainText()), (ui->textEdit_Port->toPlainText()).toInt());
}
