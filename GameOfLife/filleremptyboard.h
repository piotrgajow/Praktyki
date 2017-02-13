#ifndef FILLEREMPTYBOARD_H
#define FILLEREMPTYBOARD_H
#include "filler.h"
#include <vector>

class FillerEmptyBoard:public virtual Filler
{
public:
   FillerEmptyBoard();
   void fillBoard(Board & board);

private: 
   std::vector<std::vector<bool>> deadBoard;
};

#endif // FILLEREMPTYBOARD_H
