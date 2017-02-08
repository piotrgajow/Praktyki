#include "cellwithneighbours.h"

CellWithNeighbours::CellWithNeighbours()
{

}

void CellWithNeighbours::implementRules(int neighboursCount)
{
    if (neighboursCount < 2)
                      cellState = false;
                  else if (neighboursCount == 3)
                      cellState = true;
                  else if (neighboursCount > 3)
                      cellState = false;
}

int CellWithNeighbours::countAliveNeighbours(Board & board, int numberOfRow, int numberOfColumn) {
  int aliveNeighboursCount = 0;
  if (board.getTheBoard()[numberOfRow-1][numberOfColumn-1])
  {
      aliveNeighboursCount++;
  }
  if (board.getTheBoard()[numberOfRow-1][numberOfColumn])
  {
      aliveNeighboursCount++;
  }
  if (board.getTheBoard()[numberOfRow-1][numberOfColumn+1])
  {
      aliveNeighboursCount++;
  }
  if (board.getTheBoard()[numberOfRow][numberOfColumn-1])
  {
      aliveNeighboursCount++;
  }
  if (board.getTheBoard()[numberOfRow][numberOfColumn+1])
  {
      aliveNeighboursCount++;
  }
  if (board.getTheBoard()[numberOfRow+1][numberOfColumn-1])
  {
      aliveNeighboursCount++;
  }
  if (board.getTheBoard()[numberOfRow+1][numberOfColumn])
  {
      aliveNeighboursCount++;
  }
  if (board.getTheBoard()[numberOfRow+1][numberOfColumn+1])
  {
      aliveNeighboursCount++;
  }

  return aliveNeighboursCount;
}
