#include "mainwindow.h"
#include <QApplication>
#include<QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("utf-8"));


    MainWindow w;
    w.setWindowTitle("MyEditor");
    w.show();

    return a.exec();
}
