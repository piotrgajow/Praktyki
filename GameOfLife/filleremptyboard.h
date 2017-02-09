#ifndef FILLEREMPTYBOARD_H
#define FILLEREMPTYBOARD_H
#include "filler.h"
#include <vector>

class FillerEmptyBoard:public virtual Filler
{
public:
   FillerEmptyBoard();
   void fillWithDeadCells(Board & board);

};

#endif // FILLEREMPTYBOARD_H
