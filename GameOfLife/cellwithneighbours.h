#ifndef CELLWITHNEIGHBOURS_H
#define CELLWITHNEIGHBOURS_H
#include "board.h"
class CellWithNeighbours
{
private:
    bool cellState;
public:
    CellWithNeighbours();
    bool getCellState(){return cellState;};
    void setCellState(bool newCellState){cellState = newCellState;};
    void implementRules(int);
    int countAliveNeighbours(Board &, int, int);
};

#endif // CELLWITHNEIGHBOURS_H
