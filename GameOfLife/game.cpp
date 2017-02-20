#include "Game.h"


Game::Game()
{
filler.fillBoard(board);
startInfiniteLoop();
}

void Game::sleepFunction(int howManySec)
{
    if (newPressed.getStatusOfLoop() == true)
    {
         Sleep(howManySec*1000);
    }
}

void Game::startInfiniteLoop()
{
    for(; getch() != 27; )
        {
        newPressed.checkStatusOfButtonPressed();
        do
        {
            system("cls");
            converter.convertBoolBoardToString((board.getTheBoard()));
            display.displayGameBoardOnTheCommandLine(converter.getBoardConvertToString());
            board = generator.generateNextBoard(board);
            newPressed.checkStatusOfButtonPressed();
            sleepFunction(newPressed.getHowManySec());
        }
        while (newPressed.getStatusOfLoop() == true);
        }
}
