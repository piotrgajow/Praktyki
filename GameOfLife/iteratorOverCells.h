#ifndef ITERATOR_H
#define ITERATOR_H
#include "board.h"
#include "filler.h"
#include "cellwithneighbours.h"

class IteratorOverCells
{
public:
    IteratorOverCells();
    Board iterateOverAllCells(Board newBoard, Board oldBoard);
};

#endif // ITERATOR_H
