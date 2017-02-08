#ifndef FILLER_H
#define FILLER_H
#include <vector>
//#include "board.h"
//#include "fillerwithrandomvalues.h"
class Filler
{
public:
 Filler();
 std::vector<std::vector<bool>> fillBoardWithRandomBoolValues( std::vector<std::vector<bool>> theBoard);
 std::vector<std::vector<bool>> fillWithDeadCells( std::vector<std::vector<bool>> DeadBoard);


};

#endif // FILLER_H
