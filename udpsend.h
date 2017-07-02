#ifndef UDPSEND_H
#define UDPSEND_H

#include <QMainWindow>
#include <QObject>
#include <QUdpSocket>
#include <QString>

namespace Ui {
class UDPsend;
}

class UDPsend : public QMainWindow
{
    Q_OBJECT

public:
    explicit UDPsend(QWidget *parent = 0);
    ~UDPsend();
    void JustSend();

private:
    Ui::UDPsend *ui;

signals:

public slots:


private slots:
    void on_pushButton_clicked();

    void on_Slider_x_valueChanged(int value);

    void on_Slider_y_valueChanged(int value);

    void on_Slider_z_valueChanged(int value);

    void on_Slider_x_rot_valueChanged(int value);

    void on_Slider_y_rot_valueChanged(int value);

    void on_Slider_z_rot_valueChanged(int value);

private:
    QUdpSocket *socket;
};

#endif // UDPSEND_H
