#include "Game.h"

Board board(20,50);

Game::Game()
{
counterOfIterations = 0;
filler.fillBoard(board);
startInfiniteLoop();
}

void Game::startInfiniteLoop()
{
    while(1)
        {
        button.checkWhatButtonWasPressed();
        do
        {
            command.cleanCommandPromptFunction();
            if (button.getControlWithSKey().getSaveToFileStatus() == true)
            {
                saveToFile.saveFile(board.getTheBoard());
                button.getControlWithSKey().setSaveToFileStatus(false);
            }
            converter.convertBoolBoardToString((board.getTheBoard()));
            display.displayGameBoardOnTheCommandLine(converter.getBoardConvertToString(),board.getNumberOfColumns());
            display.displayCounterOnTheCommandLine(counterOfIterations);
            counterOfIterations++;
            board = generator.generateNextBoard(board);
            button.checkWhatButtonWasPressed();
            command.setLoopStatus(button.getSpace().getLoopStatus());
            command.waitAsLongAsDeclaredToGenerateTheNextBoard(button.getMinusOrPlus().getHowManySecondToGenerateNextBoard());
        }
        while (button.getSpace().getLoopStatus() == true);
        command.systemPause();
        }
    command.cleanCommandPromptFunction();
}
