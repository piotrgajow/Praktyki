#include "generator.h"
#include "filler.h"

Generator::Generator()
{

}

Board Generator::generateNewBoard(Board oldBoard)
{
    Board newBoard;
    Filler empty(newBoard);
    IteratorOverCells iterator;
    iterator.iterateOverAllCells(newBoard, oldBoard);
    return newBoard;
}
