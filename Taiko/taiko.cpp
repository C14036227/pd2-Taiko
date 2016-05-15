#include "taiko.h"
#include "ui_taiko.h"
#include <QDesktopWidget>
#include <QPushButton>
#include <QTCore>
Taiko::Taiko(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Taiko)
{
    ui->setupUi(this);

    entry = new Scene();
    /*QGraphicsView *back = new QGraphicsView();
    back->setScene(entry);
    back->setGeometry(20,10,960,480);
    QPixmap pix( "../Taiko/taiko cover.jpg" );
    entry->addPixmap( pix );
    entry->Entry();*/

    ui->graphicsView->setGeometry(20,10,960,480);
    ui->graphicsView->setScene(entry);
    entry->Entry();

    connect(entry->start, SIGNAL(clicked()), entry, SLOT(changeBg()));
    connect(entry->stop, SIGNAL(clicked()),  this, SLOT(close()));









    ui->graphicsView->show();


}



Taiko::~Taiko()
{
    delete ui;
}
