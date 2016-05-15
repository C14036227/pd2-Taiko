#include "taiko.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Taiko w;

    QDesktopWidget setsize;
    int sizex = 1000;
    int sizey = 500;
    w.setGeometry(setsize.screen()->width()/2-(sizex/2),setsize.screen()->height()/2-(sizey/2),sizex,sizey);
    w.show();


    /*QPushButton *start= new QPushButton("START!") ;
    start->resize(100,50);
    start->show();*/

    return a.exec();
}
