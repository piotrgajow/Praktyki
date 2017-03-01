#include "Game.h"

Board * board;

Game::Game()
{

    counterOfIterations = 0;
    int yourChoice;
    do{

        std::cout << "What you want to do:\n";
        std::cout << "1. Load board form file txt\n";
        std::cout << "2. Load board form file image\n";
        std::cout << "3. Generating random board\n";
        std::cout << "0. Exit\n";
        std::cin >> yourChoice;
        switch( yourChoice )  {
        case 1:
            std::cout<<"Type file name to load: ";
            std::cin>>fileNameToLoad;
            readerFromTxtFile.readFromGivenFile(fileNameToLoad);
            if(validator.validate(readerFromTxtFile.getReadString()))
            {
                board = new Board(validator.getSizeOfBoard());
                fillerWithValuesFromTxtFile.fillBoardWithGivenString(*board,readerFromTxtFile.getReadString());
                startInfiniteLoop();
                break;
            }
            else
            {
                display.displayErrorsCommand(validator.getErrorMessage());
                break;
            }
        case 2:
            //load board from image method
            break;
        case 3:
            board = new Board(20,50);
            filler.fillBoard(*board);
            startInfiniteLoop();
            break;
        case 0:
            std::cout <<"Goodbye.\n";
            exit(1);
            break;
        }
    }while (yourChoice != 0);
}

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
                saveToFile.saveFile(board->getTheBoard());
                newPressed.setSaveToFileStatus(false);
            }
            converter.convertBoolBoardToString((board->getTheBoard()));
            display.displayGameBoardOnTheCommandLine(converter.getBoardConvertToString(),board->getNumberOfColumns());
            display.displayCounterOnTheCommandLine(counterOfIterations);
            counterOfIterations++;
            *board = generator.generateNextBoard(*board);
            newPressed.checkStatusOfButtonPressed();
            command.setLoopStatus(newPressed.getStatusOfLoop());
            command.waitAsLongAsDeclaredToGenerateTheNextBoard(newPressed.getHowManySecondToGenerateNextBoard());
        }
        while (newPressed.getStatusOfLoop() == true);
        command.systemPause();
    }
    command.cleanCommandPromptFunction();
}
