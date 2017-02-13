#ifndef COUNTEROFNEIGHBOURS_H
#define COUNTEROFNEIGHBOURS_H
#include "board.h"

class CounterOfNeighbours
{
public:
    CounterOfNeighbours();
    countAliveNeighbours(Board & board, int numberOfRow, int numberOfColumn);
};

#endif // COUNTEROFNEIGHBOURS_H
