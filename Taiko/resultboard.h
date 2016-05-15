#ifndef RESULTBOARD_H
#define RESULTBOARD_H

#include <QDialog>

namespace Ui {
class resultBoard;
}

class resultBoard : public QDialog
{
    Q_OBJECT

public:
    explicit resultBoard(QWidget *parent = 0);
    ~resultBoard();

private:
    Ui::resultBoard *ui;
};

#endif // RESULTBOARD_H
