#include "Game.h"
#include "sizewithframe.h"


Game::Game()
{
    counterOfIterations = 0;
    int yourChoice;
    do{
        std::cout << "What you want to do:\n";
        std::cout << "1. Load board from file txt\n";
        //std::cout << "2. Load board from file image\n";
        std::cout << "3. Generate random board\n";
        std::cout << "0. Exit\n";
        std::cin >> yourChoice;
        switch( yourChoice )  {
        case 1:
            nameOfFile.askUserAboutFileName();
            readerFromTxtFile.readFromGivenFile(nameOfFile.getFileName());
            sizeOfBoardPlusFrame = new SizeWithFrame(readerFromTxtFile.getReadString());
            if(validator.validateIfStringHasAllLinesEqual(readerFromTxtFile.getReadString()) && validator.validateIfStringHasInvalidCharacters(readerFromTxtFile.getReadString()))
            {
                board = new Board(*sizeOfBoardPlusFrame);
                fillerWithValuesFromTxtFile.getStringFromTxtFileReader(readerFromTxtFile);
                fillerWithValuesFromTxtFile.setBoard(*board);
                fillerWithValuesFromTxtFile.fillBoard();
                startInfiniteLoop();
            }
            else
            {
                display.displayErrorsInformation(validator.getErrorMessage());
            }
            delete sizeOfBoardPlusFrame;
            break;
        case 2:
            //load board from image method
            //TO DO
            break;
        case 3:
            board = new Board(20,50);
            fillerWithrandomValues.setBoard(*board);
            fillerWithrandomValues.fillBoard();
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
    delete board;
    command.cleanCommandPromptFunction();
}
