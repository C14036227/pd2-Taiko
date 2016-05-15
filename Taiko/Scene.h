#ifndef SCENE_H
#define SCENE_H

#include <QTCore>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QPushButton>
#include <QIcon>
#include <QLabel>
#include <QKeyEvent>
class Scene : public QGraphicsScene
{
    Q_OBJECT

public:
    Scene();

    //QPixmap *entry_img;
    //QPixmap *start_img;
    QPushButton *start;
   // QPixmap *stop;
    QPushButton *stop;
    QPixmap pix;

    QLabel *background;
    QLabel *drum_main;
    QLabel *core;
    QLabel *bottom;
    QLabel *character;
    QLabel *dancer1;
    QLabel *dancer2;
    QLabel *dancer3;
    QLabel *countdown;
    QLabel *left_red;
    QLabel *right_red;
    QLabel *left_blue;
    QLabel *right_blue;
    QLabel *numhun;
    QLabel *numone;
    QLabel *numttn;
    QLabel *numtop;
    QLabel *numten;
    QLabel *numtho;
    QLabel *num_count_ten;
    QLabel *num_count_one;
    struct Drums_sign{
        QLabel *drums_array;
        int pattern;
    };
    Drums_sign drums_sign[10000];
    QLabel *drums;
    QLabel *explosion;


    QLabel *block;

    QTimer *clk1;
    QTimer *clk2;
    QTimer *clk7;

    QTimer *clk3;
    QTimer *clk4;
    QTimer *clk5;
    QTimer *clk6;

    QTimer *clk8;

    int mode =0;
    int timecount;
    int timeincre=0;
    int timeexplosion =0;
    int randdrum;
    int randtime;
    int amount ;
    int init;
    int b;
    int yourScore=0;
    int tryagain = 0;


    void Entry();
    void bgChange();
    void bgBack();
    void changeTimeNum();
    void selectDrums(int b);
    void judgeaccr_red();
    void judgeaccr_blue();
    void addBigScore();
    void addSmallScore();


    void keyPressEvent(QKeyEvent *event);

private slots:
    void changeBg();
    void move();
    void countingDown();
    void generateDrums();
    void incre0();
    void incre1();
    void incre2();
    void incre3();
    void incre_explosion();

};

#endif // SCENE_H
