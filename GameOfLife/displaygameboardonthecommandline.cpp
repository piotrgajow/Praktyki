#include "displaygameboardonthecommandline.h"


DisplayGameBoardOnTheCommandLine::DisplayGameBoardOnTheCommandLine()
{
}

void DisplayGameBoardOnTheCommandLine::displayGameBoardOnTheCommandLine(std::string stringConvertedFromBoard,int lengthBoardWidth)
{
        std::cout<<stringConvertedFromBoard;
        for(int i =0; i< lengthBoardWidth; i++){
            std::cout<<"-";
        }
}

void DisplayGameBoardOnTheCommandLine::displayCounterOnTheCommandLine(int counterOfIterations)
{
        std::cout<<" Iteration count : "<<counterOfIterations<<std::endl;
}
