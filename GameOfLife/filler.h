#ifndef FILLER_H
#define FILLER_H
#include "board.h"


class Filler
{
public:
    Filler();
    virtual void fillBoard()=0;
    void setBoard(Board &value);

protected:
    Board *board;
};

#endif
