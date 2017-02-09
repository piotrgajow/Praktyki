#include "iteratorOverCells.h"

IteratorOverCells::IteratorOverCells()
{

}

Board IteratorOverCells::iterateOverAllCells(Board newBoard, Board oldBoard)
{
    cellPointer = new CellWithNeighbours;
    int neighboursCount;
    for (int numberOfRow = 1; numberOfRow < oldBoard.getTheBoard.size() -1;
         numberOfRow++){
        for (int numberOfColumn = 1; numberOfColumn < oldBoard.getTheBoard[numberOfRow].size() -1;
             numberOfColumn++){
            cellPointer->setCellState(oldBoard.getTheBoard()[numberOfRow][numberOfColumn]);
            neighboursCount = cellPointer->countAliveNeighbours(oldBoard, numberOfRow, numberOfColumn);
            cellPointer->implementRules(neighboursCount);
            newBoard.setStateOfCellInTheBoard(numberOfRow, numberOfColumn, cellPointer->cellState);
        }
    }
    return newBoard;
}
