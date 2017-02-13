#include "generator.h"

Generator::Generator()
{

}

Board Generator::generateNextBoard(Board oldBoard)
{
    Board newBoard;
    FillerEmptyBoard empty;
    empty.fillBoard(newBoard);
    IteratorOverCells iterator;
    iterator.iterateOverAllCells(newBoard, oldBoard);
    return newBoard;
}
