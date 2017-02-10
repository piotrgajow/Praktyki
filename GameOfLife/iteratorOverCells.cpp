#include "iteratorOverCells.h"

IteratorOverCells::IteratorOverCells()
{

}

void IteratorOverCells::iterateOverAllCells(Board & newBoard, Board oldBoard)
{
    int neighboursCount;
    CounterOfNeighbours counter;
    Rules rules;
    bool newState;
    for (int numberOfRow = 1; numberOfRow < oldBoard.getTheBoard.size() -1;
         numberOfRow++){
        for (int numberOfColumn = 1; numberOfColumn < oldBoard.getTheBoard[numberOfRow].size() -1;
             numberOfColumn++){
            neighboursCount = counter.countAliveNeighbours(oldBoard,numberOfRow,numberOfColumn);
            newState = rules.applyRules(neighboursCount, oldBoard.getTheBoard()[numberOfRow][numberOfColumn]);
            newBoard.setStateOfCellInTheBoard(numberOfRow,numberOfColumn,newState);
        }
    }
    return newBoard;
}
