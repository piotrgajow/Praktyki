#include "Game.h"

Board board(20,50);

Game::Game()
{
    counterOfIterations = 0;
    filler.fillBoard(board);
    startInfiniteLoop();
}

#ifdef _WIN32
void Game::startInfiniteLoop()
{
    while(1)
    {
        newPressed.checkStatusOfButtonPressed();
        do
        {
            command.cleanCommandPromptFunction();
            if (newPressed.getSaveToFileStatus() == true)
            {
                filenameReader.askUserAboutFileName();
                converter.convertBoolBoardToString(board.getTheBoard());
                saveToFile.saveFile(converter.getBoardConvertToString(),filenameReader.getFileName());
                newPressed.setSaveToFileStatus(false);
            }
            converter.convertBoolBoardToString((board.getTheBoard()));
            display.displayGameBoardOnTheCommandLine(converter.getBoardConvertToString(),board.getNumberOfColumns());
            display.displayCounterOnTheCommandLine(counterOfIterations);
            counterOfIterations++;
            board = generator.generateNextBoard(board);
            newPressed.checkStatusOfButtonPressed();
            command.setLoopStatus(newPressed.getStatusOfLoop());
            command.waitAsLongAsDeclaredToGenerateTheNextBoard(newPressed.getHowManySecondToGenerateNextBoard());
        }
        while (newPressed.getStatusOfLoop() == true);
        command.systemPause();
    }
    command.cleanCommandPromptFunction();
}

#elif __linux__
void Game::startInfiniteLoop()
{
    while(1)
    {
        do
        {
            command.cleanCommandPromptFunction();
            if (newPressed.getSaveToFileStatus() == true)
            {
                filenameReader.askUserAboutFileName();
                converter.convertBoolBoardToString(board.getTheBoard());
                saveToFile.saveFile(converter.getBoardConvertToString(),filenameReader.getFileName());
                newPressed.setSaveToFileStatus(false);
            }
            converter.convertBoolBoardToString((board.getTheBoard()));
            display.displayGameBoardOnTheCommandLine(converter.getBoardConvertToString(),board.getNumberOfColumns());
            display.displayCounterOnTheCommandLine(counterOfIterations);
            counterOfIterations++;
            board = generator.generateNextBoard(board);
            newPressed.checkStatusOfButtonPressed();
            command.setLoopStatus(newPressed.getStatusOfLoop());
            command.waitAsLongAsDeclaredToGenerateTheNextBoard(newPressed.getHowManySecondToGenerateNextBoard());
        }
        while (newPressed.getStatusOfLoop() == true);
        command.systemPause();
    }
    command.cleanCommandPromptFunction();
}
#endif
