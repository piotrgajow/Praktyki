#include "displaygameboardonthecommandline.h"




DisplayGameBoardOnTheCommandLine::DisplayGameBoardOnTheCommandLine()
{
coutnerOfIteration = 0;
}

void DisplayGameBoardOnTheCommandLine::displayGameBoardOnTheCommandLine(std::string stringConvertedFromBoard)
{
        std::cout<<stringConvertedFromBoard;
        std::cout<<"---------------------------- "<<++coutnerOfIteration<<std::endl;
}
