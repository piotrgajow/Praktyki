#include "iteratorOverCells.h"

IteratorOverCells::IteratorOverCells()
{

}

Board IteratorOverCells::iterateOverAllCells(Board & newBoard, Board oldBoard)
{
    int neighboursCount;
    CounterOfNeighbours counter;
    Rules rules;
    bool newState;
    RowsColumns RC;
    for (int unsigned numberOfRow = 1; numberOfRow < oldBoard.getTheBoard().size() -1;
         numberOfRow++){
        for (int unsigned numberOfColumn = 1; numberOfColumn < oldBoard.getTheBoard()[numberOfRow].size() -1;
             numberOfColumn++){
            neighboursCount = counter.countAliveNeighbours(oldBoard,numberOfRow,numberOfColumn);
            newState = rules.applyRules(neighboursCount, oldBoard.getTheBoard()[numberOfRow][numberOfColumn]);
            RC.positionInRow = numberOfRow;
            RC.positionInColumn = numberOfColumn;
            newBoard.setStateOfCellInTheBoard(RC ,newState);
        }
    }
    return newBoard;
}
