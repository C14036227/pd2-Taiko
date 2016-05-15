#ifndef TAIKO_H
#define TAIKO_H

#include "Scene.h"
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QTCore>
#include <QTimer>
namespace Ui {
class Taiko;
}

class Taiko : public QMainWindow
{
    Q_OBJECT

public:
    explicit Taiko(QWidget *parent = 0);
    ~Taiko();
    Scene *entry;
    //QTimer *clk1;

private slots:


private:
    Ui::Taiko *ui;
    //QGraphicsScene *entry;
    //QPixmap *entry_img;


};

#endif // TAIKO_H
