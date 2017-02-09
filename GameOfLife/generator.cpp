#include "generator.h"
#include "filler.h"

Generator::Generator()
{

}

Board Generator::generateNewBoard(Board oldBoard)
{
    Board newBoard;
    FillerEmptyBoard empty;
    empty.fillBoard(newBoard);
    IteratorOverCells iterator;
    iterator.iterateOverAllCells(newBoard, oldBoard);
    return newBoard;
}
