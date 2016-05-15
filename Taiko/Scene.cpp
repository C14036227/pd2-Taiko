#include "Scene.h"
#include "resultboard.h"
#include <QTCore>
#include <QKeyEvent>
#include "taiko.h"
Scene::Scene()
{
    mode=0;
}

void Scene::Entry(){
    /*QPixmap entry_img ;
    entry_img.load(":/Taiko/taiko cover.jpg");
    entry_img = entry_img.scaled(900,450);

    addPixmap(entry_img);*/

    /*entry_img = new QPixmap("../Taiko/taiko cover.jpg");
    *entry_img = entry_img->scaled(900,450);
    addPixmap(*entry_img);//add background pic*/


    background = new QLabel();
    QPixmap pixmap;
    pixmap.load(":/pics/taiko cover.jpg");
    background->setPixmap(pixmap);
    background->setGeometry(20,10,900,450);
    background->setScaledContents(true);

    start = new QPushButton();
    start->setIcon(QIcon("../Taiko/start.jpg"));
    start->setGeometry(100,350,100,50);
    start->setIconSize(start->size());


    stop = new QPushButton();
    stop ->setIcon(QIcon("../Taiko/stop.jpg"));
    stop->setGeometry(700,350,100,50);
    stop ->setIconSize(stop->size());


    addWidget(background);
    addWidget(start);
    addWidget(stop);

}

void Scene::changeBg(){
    start->close();
    stop->close();
    background->clear();

    QPixmap game_img;
    game_img.load(":/pics/game bg.png");
    background->setPixmap(game_img);
    background->setGeometry(20,10,900,450);
    background->setScaledContents(true);

    drum_main = new QLabel();
    drum_main->setGeometry(20,116,235,135);
    drum_main->setStyleSheet("background-color: rgba(255,255,255,0);");
    pix.load(":/pics/drum_bg.png");
    drum_main->setPixmap(pix);
    drum_main->setScaledContents(true);
    addWidget(drum_main);

    core = new QLabel();
    //QPixmap core_p;
    core->setGeometry(270,90,135,135);
    core->setStyleSheet("background-color: rgba(255,255,255,0);");
    pix.load(":/pics/core.png");
    core->setPixmap(pix);
    core->setScaledContents(true);
    addWidget(core);

    bottom = new QLabel();
    bottom->setGeometry(255,223,665,28);
    bottom->setStyleSheet("background-color: rgba(255,255,255,0);");
    pix.load(":/pics/bottom.png");
    bottom->setPixmap(pix);
    bottom->setScaledContents(true);
    addWidget(bottom);

    character = new QLabel();
    character->setGeometry(30,5,250,120);
    character->setStyleSheet("background-color: rgba(255,255,255,0);");
    pix.load(":/pics/miku2.png");
    character->setPixmap(pix);
    character->setScaledContents(true);
    addWidget(character);

    dancer1 = new QLabel();
    dancer1->setGeometry(400,260,140,180);
    dancer1->setStyleSheet("background-color: rgba(255,255,255,0);");
    pix.load(":/pics/honoka.png");
    dancer1->setPixmap(pix);
    dancer1->setScaledContents(true);
    addWidget(dancer1);

    dancer2 = new QLabel();
    dancer2->setGeometry(220,260,140,180);
    dancer2->setStyleSheet("background-color: rgba(255,255,255,0);");
    pix.load(":/pics/kotori.png");
    dancer2->setPixmap(pix);
    dancer2->setScaledContents(true);
    addWidget(dancer2);

    dancer3 = new QLabel();
    dancer3->setGeometry(580,260,140,180);
    dancer3->setStyleSheet("background-color: rgba(255,255,255,0);");
    pix.load(":/pics/umi.png");
    dancer3->setPixmap(pix);
    dancer3->setScaledContents(true);
    addWidget(dancer3);

    countdown = new QLabel();
    countdown->setGeometry(700,0,120,120);
    countdown->setStyleSheet("background-color: rgba(255,255,255,0);");
    pix.load(":/pics/countdown.png");
    countdown->setPixmap(pix);
    countdown->setScaledContents(true);
    addWidget(countdown);


    numone = new QLabel();
    numone->setGeometry(120,120,20,25);
    numone->setStyleSheet("background-color: rgba(255,255,255,0);");
    pix.load(":/pics/num0.png");
    numone->setPixmap(pix);
    numone->setScaledContents(true);
    addWidget(numone);

    numten = new QLabel();
    numten->setGeometry(100,120,20,25);
    numten->setStyleSheet("background-color: rgba(255,255,255,0);");
    pix.load(":/pics/num0.png");
    numten->setPixmap(pix);
    numten->setScaledContents(true);
    addWidget(numten);

    numhun = new QLabel();
    numhun->setGeometry(80,120,20,25);
    numhun->setStyleSheet("background-color: rgba(255,255,255,0);");
    pix.load(":/pics/num0.png");
    numhun->setPixmap(pix);
    numhun->setScaledContents(true);
    addWidget(numhun);

    numtho = new QLabel();
    numtho->setGeometry(60,120,20,25);
    numtho->setStyleSheet("background-color: rgba(255,255,255,0);");
    pix.load(":/pics/num0.png");
    numtho->setPixmap(pix);
    numtho->setScaledContents(true);
    addWidget(numtho);

    numttn = new QLabel();
    numttn->setGeometry(40,120,20,25);
    numttn->setStyleSheet("background-color: rgba(255,255,255,0);");
    pix.load(":/pics/num0.png");
    numttn->setPixmap(pix);
    numttn->setScaledContents(true);
    addWidget(numttn);

    numtop = new QLabel();
    numtop->setGeometry(20,120,20,25);
    numtop->setStyleSheet("background-color: rgba(255,255,255,0);");
    pix.load(":/pics/num0.png");
    numtop->setPixmap(pix);
    numtop->setScaledContents(true);
    addWidget(numtop);

    num_count_ten = new QLabel();
    num_count_ten->setGeometry(710,20,50,80);
    num_count_ten->setStyleSheet("background-color: rgba(255,255,255,0);");
    pix.load(":/pics/num0.png");
    num_count_ten->setPixmap(pix);
    num_count_ten->setScaledContents(true);
    addWidget(num_count_ten);

    num_count_one = new QLabel();
    num_count_one->setGeometry(765,20,50,80);
    num_count_one->setStyleSheet("background-color: rgba(255,255,255,0);");
    pix.load(":/pics/num0.png");
    num_count_one->setPixmap(pix);
    num_count_one->setScaledContents(true);
    addWidget(num_count_one);


    timecount = 30;
    clk1 = new QTimer(this);
    if(tryagain > 0)disconnect(clk1, SIGNAL(timeout()), this, SLOT(countingDown()));
    connect(clk1, SIGNAL(timeout()), this, SLOT(countingDown()));
    clk1->start(1000);



    if(tryagain>0)disconnect(clk2, SIGNAL(timeout()), this, SLOT(generateDrums()));
    clk2 = new QTimer(this);
    connect(clk2, SIGNAL(timeout()), this, SLOT(generateDrums()));
    clk2->start(1000);







    amount = 0;
    drums = new QLabel();
    drums_sign[0].drums_array=drums;
    drums->setGeometry(845,133,75,75);
    drums->setStyleSheet("background-color: rgba(255,255,255,0);");
    selectDrums(0);
    addWidget(drums);

    clk7 = new QTimer();
    //if(tryagain>0)disconnect(clk7, SIGNAL(timeout()), this, SLOT(move()));
    if(tryagain==0)connect(clk7, SIGNAL(timeout()), this, SLOT(move()));
    clk7->start(20);









}


void Scene::countingDown(){
    changeTimeNum();
    timecount--;
    if(timecount<-1)clk1->stop();
}

void Scene::changeTimeNum(){
    int a,b;
    a=timecount/10;
    b=timecount%10;
    switch(a){
    case 9:
        pix.load(":/pics/num9.png");
        num_count_ten->setPixmap(pix);
        num_count_ten->setScaledContents(true);
        break;
    case 8:
        pix.load(":/pics/num8.png");
        num_count_ten->setPixmap(pix);
        num_count_ten->setScaledContents(true);
        break;

    case 7:
        pix.load(":/pics/num7.png");
        num_count_ten->setPixmap(pix);
        num_count_ten->setScaledContents(true);
        break;
    case 6:
        pix.load(":/pics/num6.png");
        num_count_ten->setPixmap(pix);
        num_count_ten->setScaledContents(true);
        break;
    case 5:
        pix.load(":/pics/num5.png");
        num_count_ten->setPixmap(pix);
        num_count_ten->setScaledContents(true);
        break;
    case 4:
        pix.load(":/pics/num4.png");
        num_count_ten->setPixmap(pix);
        num_count_ten->setScaledContents(true);
        break;
    case 3:
        pix.load(":/pics/num3.png");
        num_count_ten->setPixmap(pix);
        num_count_ten->setScaledContents(true);
        break;
    case 2:
        pix.load(":/pics/num2.png");
        num_count_ten->setPixmap(pix);
        num_count_ten->setScaledContents(true);
        break;
    case 1:
        pix.load(":/pics/num1.png");
        num_count_ten->setPixmap(pix);
        num_count_ten->setScaledContents(true);
        break;
    case 0:
        pix.load(":/pics/num0.png");
        num_count_ten->setPixmap(pix);
        num_count_ten->setScaledContents(true);
        break;
    }

    switch(b){
    case 9:
        pix.load(":/pics/num9.png");
        num_count_one->setPixmap(pix);
        num_count_one->setScaledContents(true);
        break;
    case 8:
        pix.load(":/pics/num8.png");
        num_count_one->setPixmap(pix);
        num_count_one->setScaledContents(true);
        break;
    case 7:
        pix.load(":/pics/num7.png");
        num_count_one->setPixmap(pix);
        num_count_one->setScaledContents(true);
        break;
    case 6:
        pix.load(":/pics/num6.png");
        num_count_one->setPixmap(pix);
        num_count_one->setScaledContents(true);
        break;
    case 5:
        pix.load(":/pics/num5.png");
        num_count_one->setPixmap(pix);
        num_count_one->setScaledContents(true);
        break;
    case 4:
        pix.load(":/pics/num4.png");
        num_count_one->setPixmap(pix);
        num_count_one->setScaledContents(true);
        break;
    case 3:
        pix.load(":/pics/num3.png");
        num_count_one->setPixmap(pix);
        num_count_one->setScaledContents(true);
        break;
    case 2:
        pix.load(":/pics/num2.png");
        num_count_one->setPixmap(pix);
        num_count_one->setScaledContents(true);
        break;
    case 1:
        pix.load(":/pics/num1.png");
        num_count_one->setPixmap(pix);
        num_count_one->setScaledContents(true);
        break;
    case 0:
        pix.load(":/pics/num0.png");
        num_count_one->setPixmap(pix);
        num_count_one->setScaledContents(true);
        break;
    }
}


void Scene::generateDrums(){
    if(timecount>0){

        qsrand(QTime::currentTime().msec());
        int a = qrand()%1000+200;
        b = qrand()%8;



        drums = new QLabel();
        amount++;
        drums_sign[amount].drums_array=drums;

        if(b==6||b==7||b==3||b==2)drums->setGeometry(870,145,50,50);
        else drums->setGeometry(845,133,75,75);
        drums->setStyleSheet("background-color: rgba(255,255,255,0);");
        selectDrums(b);
        addWidget(drums);




        //clk7->start(2);


        //block->raise();

       clk2->stop();
       disconnect(clk2, SIGNAL(timeout()), this, SLOT(generateDrums()));
       clk2->deleteLater();

       clk2 = new QTimer();

       connect(clk2, SIGNAL(timeout()), this, SLOT(generateDrums()));
       if(timecount>=0){clk2->start(a);}

       /* clk2->deleteLater();
        clk2 = new QTimer();
        connect(clk2, SIGNAL(timeout()), this, SLOT(generateDrums()));
        clk2->start(a);*/
    }

    if(timecount==-1){
        resultBoard yourResult;
        yourResult.setModal(true);
        int select = yourResult.exec();

        if(select==QDialog::Accepted){


            this->clear();
            tryagain++;
            timecount=0;
            timeincre=0;
            timeexplosion =0;
            amount=0 ;
            init=0;
            b=0;
            yourScore=0;

            this->Entry();
            connect(start, SIGNAL(clicked()),this, SLOT(changeBg()));
            this->start->clicked();


        }
        else if(select==QDialog::Rejected){

        }
    }


}


void Scene::selectDrums(int b){
    switch(b){
    case 7:
        pix.load(":/pics/note_blue1.png");
        drums->setPixmap(pix);
        drums->setScaledContents(true);
        drums_sign[amount].pattern=7;
        break;
    case 6:
        pix.load(":/pics/note_blue2.png");
        drums->setPixmap(pix);
        drums->setScaledContents(true);
        drums_sign[amount].pattern=6;
        break;
    case 5:
        pix.load(":/pics/note_blue_big1.png");
        drums->setPixmap(pix);
        drums->setScaledContents(true);
        drums_sign[amount].pattern=5;
        break;
    case 4:
        pix.load(":/pics/note_blue_big2.png");
        drums->setPixmap(pix);
        drums->setScaledContents(true);
        drums_sign[amount].pattern=4;
        break;
    case 3:
        pix.load(":/pics/note_red1.png");
        drums->setPixmap(pix);
        drums->setScaledContents(true);
        drums_sign[amount].pattern=3;
        break;
    case 2:
        pix.load(":/pics/note_red2.png");
        drums->setPixmap(pix);
        drums->setScaledContents(true);
        drums_sign[amount].pattern=2;
        break;
    case 1:
        pix.load(":/pics/note_red_big1.png");
        drums->setPixmap(pix);
        drums->setScaledContents(true);
        drums_sign[amount].pattern=1;
        break;
    case 0:
        pix.load(":/pics/note_red_big2.png");
        drums->setPixmap(pix);
        drums->setScaledContents(true);
        drums_sign[amount].pattern=0;
        break;
    }
}

void Scene::move(){

    if(timecount>15){
    for(int i=init;i<=amount;i++){
        int x = drums_sign[i].drums_array->pos().x();
        int y = drums_sign[i].drums_array->pos().y();
        drums_sign[i].drums_array->move(QPoint(x-5,y));
    }
    }
    else{
        for(int i=init;i<=amount;i++){
            int x = drums_sign[i].drums_array->pos().x();
            int y = drums_sign[i].drums_array->pos().y();
            drums_sign[i].drums_array->move(QPoint(x-20,y));
        }
    }

    for(int j=init;j<=amount;j++){
        if(drums_sign[j].drums_array->pos().x()<200){
            drums_sign[j].drums_array->close();
            init++;
        }
        for(int k=0;k<init;k++){
            if(drums_sign[k].drums_array->isEnabled()){
                drums_sign[k].drums_array->close();
            }
        }
    }

}


void Scene::judgeaccr_red(){
    for(int i=init;i<=amount;i++){
        if((drums_sign[i].pattern==0||drums_sign[i].pattern==1||drums_sign[i].pattern==2||drums_sign[i].pattern==3)&&drums_sign[i].drums_array->pos().x()>270&&drums_sign[i].drums_array->pos().x()<340){
           drums_sign[i].drums_array->close();
           init++;

           clk8 = new QTimer();
           connect(clk8, SIGNAL(timeout()), this, SLOT(incre_explosion()));
           clk8->start(10);
           explosion = new QLabel();
           explosion->setGeometry(265,100,135,135);
           explosion->setStyleSheet("background-color: rgba(255,255,255,0);");
           pix.load(":/pics/explosion.png");
           explosion->setPixmap(pix);
           explosion->setScaledContents(true);
           addWidget(explosion);

           if(drums_sign[i].pattern==0||drums_sign[i].pattern==1){
               yourScore = yourScore+3360;
               addBigScore();
           }
           else {
               yourScore = yourScore+1680;
               addSmallScore();
           }
           break;

        }
    }
}

void Scene::judgeaccr_blue(){
    for(int i=init;i<=amount;i++){
        if((drums_sign[i].pattern==7||drums_sign[i].pattern==4||drums_sign[i].pattern==5||drums_sign[i].pattern==6)&&drums_sign[i].drums_array->pos().x()>270&&drums_sign[i].drums_array->pos().x()<340){
           drums_sign[i].drums_array->close();
           init++;
           clk8 = new QTimer();
           connect(clk8, SIGNAL(timeout()), this, SLOT(incre_explosion()));
           clk8->start(10);
           explosion = new QLabel();
           explosion->setGeometry(265,100,135,135);
           explosion->setStyleSheet("background-color: rgba(255,255,255,0);");
           pix.load(":/pics/explosion.png");
           explosion->setPixmap(pix);
           explosion->setScaledContents(true);
           addWidget(explosion);

           if(drums_sign[i].pattern==4||drums_sign[i].pattern==5){
               yourScore = yourScore+3360;
               addBigScore();
           }
           else {
               yourScore = yourScore+1680;
               addSmallScore();
           }
           break;

        }
    }
}


void Scene::keyPressEvent(QKeyEvent *event){
    if(event->key() == Qt::Key_A){
        clk3 = new QTimer();
        connect(clk3, SIGNAL(timeout()), this, SLOT(incre0()));
        clk3->start(10);
        left_red = new QLabel();
        left_red->setGeometry(160,135,35,60);
        left_red->setStyleSheet("background-color: rgba(255,255,255,0);");
        pix.load(":/pics/left_red.png");
        left_red->setPixmap(pix);
        left_red->setScaledContents(true);
        addWidget(left_red);

        judgeaccr_red();

    }

    if(event->key() == Qt::Key_S){
        clk4 = new QTimer();
        connect(clk4, SIGNAL(timeout()), this, SLOT(incre1()));
        clk4->start(10);
        right_red = new QLabel();
        right_red->setGeometry(195,135,35,60);
        right_red->setStyleSheet("background-color: rgba(255,255,255,0);");
        pix.load(":/pics/right_red.png");
        right_red->setPixmap(pix);
        right_red->setScaledContents(true);
        addWidget(right_red);

        judgeaccr_red();

    }

    if(event->key() == Qt::Key_Q){
        clk5 = new QTimer();
        connect(clk5, SIGNAL(timeout()), this, SLOT(incre2()));
        clk5->start(10);
        left_blue = new QLabel();
        left_blue->setGeometry(150,120,35,95);
        left_blue->setStyleSheet("background-color: rgba(255,255,255,0);");
        pix.load(":/pics/left_blue.png");
        left_blue->setPixmap(pix);
        left_blue->setScaledContents(true);
        addWidget(left_blue);

        judgeaccr_blue();

    }

    if(event->key() == Qt::Key_E){
        clk6 = new QTimer();
        connect(clk6, SIGNAL(timeout()), this, SLOT(incre3()));
        clk6->start(10);
        right_blue = new QLabel();
        right_blue->setGeometry(205,120,35,95);
        right_blue->setStyleSheet("background-color: rgba(255,255,255,0);");
        pix.load(":/pics/right_blue.png");
        right_blue->setPixmap(pix);
        right_blue->setScaledContents(true);
        addWidget(right_blue);

        judgeaccr_blue();

    }
}

void Scene::incre0(){
    timeincre++;
    if(timeincre==5){
        disconnect(clk3, SIGNAL(timeout()), this, SLOT(incre0()));
        clk3->deleteLater();
        timeincre=0;
        left_red->clear();
    }
}

void Scene::incre1(){
    timeincre++;
    if(timeincre==5){
        disconnect(clk4, SIGNAL(timeout()), this, SLOT(incre1()));
        clk4->deleteLater();
        timeincre=0;
        right_red->clear();
    }
}

void Scene::incre2(){
    timeincre++;
    if(timeincre==5){
        disconnect(clk5, SIGNAL(timeout()), this, SLOT(incre2()));
        clk5->deleteLater();
        timeincre=0;
        left_blue->clear();
    }
}
void Scene::incre3(){
    timeincre++;
    if(timeincre==5){
        disconnect(clk6, SIGNAL(timeout()), this, SLOT(incre3()));
        clk6->deleteLater();
        timeincre=0;
        right_blue->clear();
    }
}

void Scene::incre_explosion(){
    timeexplosion++;
    if(timeexplosion==5){
        disconnect(clk8, SIGNAL(timeout()), this, SLOT(incre_explosion()));
        clk8->deleteLater();
        timeexplosion=0;
        explosion->clear();
    }
}

void Scene::addBigScore(){
    int hth = yourScore/100000;
    int tth = (yourScore%100000)/10000;
    int oth = (yourScore%10000)/1000;
    int hun = (yourScore%1000)/100;
    int ten = (yourScore%100)/10;

    switch(ten){
    case 9:
        pix.load(":/pics/num9.png");
        numten->setPixmap(pix);
        numten->setScaledContents(true);
        break;
    case 8:
        pix.load(":/pics/num8.png");
        numten->setPixmap(pix);
        numten->setScaledContents(true);
        break;
    case 7:
        pix.load(":/pics/num7.png");
        numten->setPixmap(pix);
        numten->setScaledContents(true);
        break;
    case 6:
        pix.load(":/pics/num6.png");
        numten->setPixmap(pix);
        numten->setScaledContents(true);
        break;
    case 5:
        pix.load(":/pics/num5.png");
        numten->setPixmap(pix);
        numten->setScaledContents(true);
        break;
    case 4:
        pix.load(":/pics/num4.png");
        numten->setPixmap(pix);
        numten->setScaledContents(true);
        break;
    case 3:
        pix.load(":/pics/num3.png");
        numten->setPixmap(pix);
        numten->setScaledContents(true);
        break;
    case 2:
        pix.load(":/pics/num2.png");
        numten->setPixmap(pix);
        numten->setScaledContents(true);
        break;
    case 1:
        pix.load(":/pics/num1.png");
        numten->setPixmap(pix);
        numten->setScaledContents(true);
        break;
    case 0:
        pix.load(":/pics/num0.png");
        numten->setPixmap(pix);
        numten->setScaledContents(true);
        break;
    }

    switch(hth){
    case 9:
        pix.load(":/pics/num9.png");
        numtop->setPixmap(pix);
        numtop->setScaledContents(true);
        break;
    case 8:
        pix.load(":/pics/num8.png");
        numtop->setPixmap(pix);
        numtop->setScaledContents(true);
        break;
    case 7:
        pix.load(":/pics/num7.png");
        numtop->setPixmap(pix);
        numtop->setScaledContents(true);
        break;
    case 6:
        pix.load(":/pics/num6.png");
        numtop->setPixmap(pix);
        numtop->setScaledContents(true);
        break;
    case 5:
        pix.load(":/pics/num5.png");
        numtop->setPixmap(pix);
        numtop->setScaledContents(true);
        break;
    case 4:
        pix.load(":/pics/num4.png");
        numtop->setPixmap(pix);
        numtop->setScaledContents(true);
        break;
    case 3:
        pix.load(":/pics/num3.png");
        numtop->setPixmap(pix);
        numtop->setScaledContents(true);
        break;
    case 2:
        pix.load(":/pics/num2.png");
        numtop->setPixmap(pix);
        numtop->setScaledContents(true);
        break;
    case 1:
        pix.load(":/pics/num1.png");
        numtop->setPixmap(pix);
        numtop->setScaledContents(true);
        break;
    case 0:
        pix.load(":/pics/num0.png");
        numtop->setPixmap(pix);
        numtop->setScaledContents(true);
        break;
    }

    switch(tth){
    case 9:
        pix.load(":/pics/num9.png");
        numttn->setPixmap(pix);
        numttn->setScaledContents(true);
        break;
    case 8:
        pix.load(":/pics/num8.png");
        numttn->setPixmap(pix);
        numttn->setScaledContents(true);
        break;
    case 7:
        pix.load(":/pics/num7.png");
        numttn->setPixmap(pix);
        numttn->setScaledContents(true);
        break;
    case 6:
        pix.load(":/pics/num6.png");
        numttn->setPixmap(pix);
        numttn->setScaledContents(true);
        break;
    case 5:
        pix.load(":/pics/num5.png");
        numttn->setPixmap(pix);
        numttn->setScaledContents(true);
        break;
    case 4:
        pix.load(":/pics/num4.png");
        numttn->setPixmap(pix);
        numttn->setScaledContents(true);
        break;
    case 3:
        pix.load(":/pics/num3.png");
        numttn->setPixmap(pix);
        numttn->setScaledContents(true);
        break;
    case 2:
        pix.load(":/pics/num2.png");
        numttn->setPixmap(pix);
        numttn->setScaledContents(true);
        break;
    case 1:
        pix.load(":/pics/num1.png");
        numttn->setPixmap(pix);
        numttn->setScaledContents(true);
        break;
    case 0:
        pix.load(":/pics/num0.png");
        numttn->setPixmap(pix);
        numttn->setScaledContents(true);
        break;
    }
    switch(oth){
    case 9:
        pix.load(":/pics/num9.png");
        numtho->setPixmap(pix);
        numtho->setScaledContents(true);
        break;
    case 8:
        pix.load(":/pics/num8.png");
        numtho->setPixmap(pix);
        numtho->setScaledContents(true);
        break;
    case 7:
        pix.load(":/pics/num7.png");
        numtho->setPixmap(pix);
        numtho->setScaledContents(true);
        break;
    case 6:
        pix.load(":/pics/num6.png");
        numtho->setPixmap(pix);
        numtho->setScaledContents(true);
        break;
    case 5:
        pix.load(":/pics/num5.png");
        numtho->setPixmap(pix);
        numtho->setScaledContents(true);
        break;
    case 4:
        pix.load(":/pics/num4.png");
        numtho->setPixmap(pix);
        numtho->setScaledContents(true);
        break;
    case 3:
        pix.load(":/pics/num3.png");
        numtho->setPixmap(pix);
        numtho->setScaledContents(true);
        break;
    case 2:
        pix.load(":/pics/num2.png");
        numtho->setPixmap(pix);
        numtho->setScaledContents(true);
        break;
    case 1:
        pix.load(":/pics/num1.png");
        numtho->setPixmap(pix);
        numtho->setScaledContents(true);
        break;
    case 0:
        pix.load(":/pics/num0.png");
        numtho->setPixmap(pix);
        numtho->setScaledContents(true);
        break;
    }
    switch(hun){
    case 9:
        pix.load(":/pics/num9.png");
        numhun->setPixmap(pix);
        numhun->setScaledContents(true);
        break;
    case 8:
        pix.load(":/pics/num8.png");
        numhun->setPixmap(pix);
        numhun->setScaledContents(true);
        break;
    case 7:
        pix.load(":/pics/num7.png");
        numhun->setPixmap(pix);
        numhun->setScaledContents(true);
        break;
    case 6:
        pix.load(":/pics/num6.png");
        numhun->setPixmap(pix);
        numhun->setScaledContents(true);
        break;
    case 5:
        pix.load(":/pics/num5.png");
        numhun->setPixmap(pix);
        numhun->setScaledContents(true);
        break;
    case 4:
        pix.load(":/pics/num4.png");
        numhun->setPixmap(pix);
        numhun->setScaledContents(true);
        break;
    case 3:
        pix.load(":/pics/num3.png");
        numhun->setPixmap(pix);
        numhun->setScaledContents(true);
        break;
    case 2:
        pix.load(":/pics/num2.png");
        numhun->setPixmap(pix);
        numhun->setScaledContents(true);
        break;
    case 1:
        pix.load(":/pics/num1.png");
        numhun->setPixmap(pix);
        numhun->setScaledContents(true);
        break;
    case 0:
        pix.load(":/pics/num0.png");
        numhun->setPixmap(pix);
        numhun->setScaledContents(true);
        break;
    }
}

void Scene::addSmallScore(){
    int hth = yourScore/100000;
    int tth = (yourScore%100000)/10000;
    int oth = (yourScore%10000)/1000;
    int hun = (yourScore%1000)/100;
    int ten = (yourScore%100)/10;

    switch(ten){
    case 9:
        pix.load(":/pics/num9.png");
        numten->setPixmap(pix);
        numten->setScaledContents(true);
        break;
    case 8:
        pix.load(":/pics/num8.png");
        numten->setPixmap(pix);
        numten->setScaledContents(true);
        break;
    case 7:
        pix.load(":/pics/num7.png");
        numten->setPixmap(pix);
        numten->setScaledContents(true);
        break;
    case 6:
        pix.load(":/pics/num6.png");
        numten->setPixmap(pix);
        numten->setScaledContents(true);
        break;
    case 5:
        pix.load(":/pics/num5.png");
        numten->setPixmap(pix);
        numten->setScaledContents(true);
        break;
    case 4:
        pix.load(":/pics/num4.png");
        numten->setPixmap(pix);
        numten->setScaledContents(true);
        break;
    case 3:
        pix.load(":/pics/num3.png");
        numten->setPixmap(pix);
        numten->setScaledContents(true);
        break;
    case 2:
        pix.load(":/pics/num2.png");
        numten->setPixmap(pix);
        numten->setScaledContents(true);
        break;
    case 1:
        pix.load(":/pics/num1.png");
        numten->setPixmap(pix);
        numten->setScaledContents(true);
        break;
    case 0:
        pix.load(":/pics/num0.png");
        numten->setPixmap(pix);
        numten->setScaledContents(true);
        break;
    }

    switch(hth){
    case 9:
        pix.load(":/pics/num9.png");
        numtop->setPixmap(pix);
        numtop->setScaledContents(true);
        break;
    case 8:
        pix.load(":/pics/num8.png");
        numtop->setPixmap(pix);
        numtop->setScaledContents(true);
        break;
    case 7:
        pix.load(":/pics/num7.png");
        numtop->setPixmap(pix);
        numtop->setScaledContents(true);
        break;
    case 6:
        pix.load(":/pics/num6.png");
        numtop->setPixmap(pix);
        numtop->setScaledContents(true);
        break;
    case 5:
        pix.load(":/pics/num5.png");
        numtop->setPixmap(pix);
        numtop->setScaledContents(true);
        break;
    case 4:
        pix.load(":/pics/num4.png");
        numtop->setPixmap(pix);
        numtop->setScaledContents(true);
        break;
    case 3:
        pix.load(":/pics/num3.png");
        numtop->setPixmap(pix);
        numtop->setScaledContents(true);
        break;
    case 2:
        pix.load(":/pics/num2.png");
        numtop->setPixmap(pix);
        numtop->setScaledContents(true);
        break;
    case 1:
        pix.load(":/pics/num1.png");
        numtop->setPixmap(pix);
        numtop->setScaledContents(true);
        break;
    case 0:
        pix.load(":/pics/num0.png");
        numtop->setPixmap(pix);
        numtop->setScaledContents(true);
        break;
    }

    switch(tth){
    case 9:
        pix.load(":/pics/num9.png");
        numttn->setPixmap(pix);
        numttn->setScaledContents(true);
        break;
    case 8:
        pix.load(":/pics/num8.png");
        numttn->setPixmap(pix);
        numttn->setScaledContents(true);
        break;
    case 7:
        pix.load(":/pics/num7.png");
        numttn->setPixmap(pix);
        numttn->setScaledContents(true);
        break;
    case 6:
        pix.load(":/pics/num6.png");
        numttn->setPixmap(pix);
        numttn->setScaledContents(true);
        break;
    case 5:
        pix.load(":/pics/num5.png");
        numttn->setPixmap(pix);
        numttn->setScaledContents(true);
        break;
    case 4:
        pix.load(":/pics/num4.png");
        numttn->setPixmap(pix);
        numttn->setScaledContents(true);
        break;
    case 3:
        pix.load(":/pics/num3.png");
        numttn->setPixmap(pix);
        numttn->setScaledContents(true);
        break;
    case 2:
        pix.load(":/pics/num2.png");
        numttn->setPixmap(pix);
        numttn->setScaledContents(true);
        break;
    case 1:
        pix.load(":/pics/num1.png");
        numttn->setPixmap(pix);
        numttn->setScaledContents(true);
        break;
    case 0:
        pix.load(":/pics/num0.png");
        numttn->setPixmap(pix);
        numttn->setScaledContents(true);
        break;
    }
    switch(oth){
    case 9:
        pix.load(":/pics/num9.png");
        numtho->setPixmap(pix);
        numtho->setScaledContents(true);
        break;
    case 8:
        pix.load(":/pics/num8.png");
        numtho->setPixmap(pix);
        numtho->setScaledContents(true);
        break;
    case 7:
        pix.load(":/pics/num7.png");
        numtho->setPixmap(pix);
        numtho->setScaledContents(true);
        break;
    case 6:
        pix.load(":/pics/num6.png");
        numtho->setPixmap(pix);
        numtho->setScaledContents(true);
        break;
    case 5:
        pix.load(":/pics/num5.png");
        numtho->setPixmap(pix);
        numtho->setScaledContents(true);
        break;
    case 4:
        pix.load(":/pics/num4.png");
        numtho->setPixmap(pix);
        numtho->setScaledContents(true);
        break;
    case 3:
        pix.load(":/pics/num3.png");
        numtho->setPixmap(pix);
        numtho->setScaledContents(true);
        break;
    case 2:
        pix.load(":/pics/num2.png");
        numtho->setPixmap(pix);
        numtho->setScaledContents(true);
        break;
    case 1:
        pix.load(":/pics/num1.png");
        numtho->setPixmap(pix);
        numtho->setScaledContents(true);
        break;
    case 0:
        pix.load(":/pics/num0.png");
        numtho->setPixmap(pix);
        numtho->setScaledContents(true);
        break;
    }
    switch(hun){
    case 9:
        pix.load(":/pics/num9.png");
        numhun->setPixmap(pix);
        numhun->setScaledContents(true);
        break;
    case 8:
        pix.load(":/pics/num8.png");
        numhun->setPixmap(pix);
        numhun->setScaledContents(true);
        break;
    case 7:
        pix.load(":/pics/num7.png");
        numhun->setPixmap(pix);
        numhun->setScaledContents(true);
        break;
    case 6:
        pix.load(":/pics/num6.png");
        numhun->setPixmap(pix);
        numhun->setScaledContents(true);
        break;
    case 5:
        pix.load(":/pics/num5.png");
        numhun->setPixmap(pix);
        numhun->setScaledContents(true);
        break;
    case 4:
        pix.load(":/pics/num4.png");
        numhun->setPixmap(pix);
        numhun->setScaledContents(true);
        break;
    case 3:
        pix.load(":/pics/num3.png");
        numhun->setPixmap(pix);
        numhun->setScaledContents(true);
        break;
    case 2:
        pix.load(":/pics/num2.png");
        numhun->setPixmap(pix);
        numhun->setScaledContents(true);
        break;
    case 1:
        pix.load(":/pics/num1.png");
        numhun->setPixmap(pix);
        numhun->setScaledContents(true);
        break;
    case 0:
        pix.load(":/pics/num0.png");
        numhun->setPixmap(pix);
        numhun->setScaledContents(true);
        break;
    }
}


