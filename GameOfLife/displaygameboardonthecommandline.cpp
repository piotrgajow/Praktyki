#include "displaygameboardonthecommandline.h"

DisplayGameBoardOnTheCommandLine::DisplayGameBoardOnTheCommandLine()
{

}

void displayGameBoardOnTheCommandLine(std::vector <std::vector <char>> convertedTable)
{
    int cutLastLineColumn = 1 ;

    for(unsigned positionInLine = 0 ; positionInLine < convertedTable.size() ; positionInLine++)
    {
        for(int positionInColumn = 0 ; positionInColumn < convertedTable[positionInLine].size() ; positionInColumn++)
        {
            if(positionInLine  == 0 || positionInColumn == 0 || positionInLine == convertedTable.size()-cutLastLineColumn||positionInColumn == convertedTable[positionInLine].size()-cutLastLineColumn) {;}
            else std::cout<<convertedTable[positionInLine][positionInColumn];
         }
         std::cout<<std::endl;
     }
}
