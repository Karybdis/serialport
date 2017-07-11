#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSerialPort>
#include<QtSerialPort/QSerialPortInfo>
#include<QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QSerialPort *serial;
    void String2Hex(QString str, QByteArray &senddata);
    char ConvertHexChar(char);

private slots:
    void portscan();
    void connectport();
    void send();
    void receive();
    void clean();
};

#endif // MAINWINDOW_H
