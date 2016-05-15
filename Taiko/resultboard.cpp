#include "resultboard.h"
#include "ui_resultboard.h"


resultBoard::resultBoard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::resultBoard)
{
    ui->setupUi(this);
}

resultBoard::~resultBoard()
{
    delete ui;
}


