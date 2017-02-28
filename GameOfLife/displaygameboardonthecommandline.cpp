#include "displaygameboardonthecommandline.h"


DisplayGameBoardOnTheCommandLine::DisplayGameBoardOnTheCommandLine()
{
}

void DisplayGameBoardOnTheCommandLine::displayGameBoardOnTheCommandLine(std::string stringConvertedFromBoard)
{
        std::cout<<stringConvertedFromBoard;
        std::cout<<"---------------------------- ";
}

void DisplayGameBoardOnTheCommandLine::displayCounterOnTheCommandLine(int counterOfIterations)
{
    std::cout<<counterOfIterations<<std::endl;
}

void DisplayGameBoardOnTheCommandLine::displayErrorsCommand(std::__cxx11::string error)
{
    std::cout<<error<<std::endl;
}
