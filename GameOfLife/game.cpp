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
            comand.cleanFunction();
            converter.convertBoolBoardToString((board.getTheBoard()));
            display.displayGameBoardOnTheCommandLine(converter.getBoardConvertToString());
            board = generator.generateNextBoard(board);
            newPressed.checkStatusOfButtonPressed();
            comand.sleepFunction(newPressed.getStatusOfLoop(),newPressed.getHowManySec());
            if (newPressed.getSaveToFileStatus() == true)
            {
                saveToFile.saveFile("table.txt",converter.getBoardConvertToString());
            }
        }
        while (newPressed.getStatusOfLoop() == true);
        comand.systemPause();
        }
    comand.cleanFunction();
}
