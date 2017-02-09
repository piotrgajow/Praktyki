#include "board.h"
#include "filler.h"
#include "fillerwithrandomvalues.h"

int main()
{
    Board board;
    //Filler fill;
    FillerWithRandomValues fillRand;
    fillRand.fillBoardWithRandomBoolValues(board);
    fillRand.show(board);
    return 0;
}
