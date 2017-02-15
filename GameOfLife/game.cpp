#include "Game.h"


Game::Game()
{
filler.fillBoard(board);
startInfiniteLoop();
}

void Game::startInfiniteLoop()
{
    while(1)
        {
        newPressed.checkStatusOfButtonPressed();
        do
        {
            system("cls");
            converter.convertBoolBoardToString((board.getTheBoard()));
            display.displayGameBoardOnTheCommandLine(converter.getBoardConvertToString());
            board = generator.generateNextBoard(board);
            newPressed.checkStatusOfButtonPressed();
            Sleep(1000);
        }
        while (newPressed.getStatusOfIncrementLoop() == true);
        system("pause");
        }
}
