#include <QCoreApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QString mStr = "Hello World";


    qDebug() << "Hello World";

    return a.exec();
}
