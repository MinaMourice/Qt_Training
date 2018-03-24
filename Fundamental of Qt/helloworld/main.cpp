#include <QtGui>
#include <QApplication>
#include <QPushButton>

int main(int argc,char *argv[])
{
    QApplication app( argc, argv);  //Object
    QPushButton * button = new QPushButton("Hello World"); //Create new PushButton
    button->show() ;
    return app.exec();
}

/*Program Consist of
main.cpp - application code
helloworld.pro - projectfile
    list sources
    project configuration

*/
