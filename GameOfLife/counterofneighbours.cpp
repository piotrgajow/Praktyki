#include "counterofneighbours.h"

CounterOfNeighbours::CounterOfNeighbours()
{

}

int CounterOfNeighbours::countAliveNeighbours(Board & board, int numberOfRow, int numberOfColumn) {
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
