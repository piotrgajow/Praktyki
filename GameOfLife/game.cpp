#include "Game.h"
#include "sizewithframe.h"

Game::Game()
{
    counterOfIterations = 0;
    int yourChoice;
    do{
        showOptions();
        std::cin >> yourChoice;
        switch( yourChoice )  {
        case 1:
            LoadBordFromTxtFile();
            FillBoardIfValidated();
            break;
        case 2:
            //load board from image method
            //TO DO
            break;
        case 3:
            generateRandomBoard();
            break;
        case 0:
            std::cout <<"Goodbye.\n";
            exit(1);
            break;
        }
    }while (yourChoice != 0);
}

void Game::LoadBordFromTxtFile()
{
    nameOfFile.askUserAboutFileName();
    readerFromTxtFile.readFromGivenFile(nameOfFile.getFileName());
    sizeOfBoardPlusFrame = new SizeWithFrame(readerFromTxtFile.getReadString());
}

void Game::FillBoardIfValidated()
{
    if(validator.validateIfStringHasAllLinesEqual(readerFromTxtFile.getReadString()) && validator.validateIfStringHasInvalidCharacters(readerFromTxtFile.getReadString()))
    {
        board = new Board(*sizeOfBoardPlusFrame);
        delete sizeOfBoardPlusFrame;
        fillerWithValuesFromTxtFile.getStringFromTxtFileReader(readerFromTxtFile.getReadString());
        fillerWithValuesFromTxtFile.setBoard(*board);
        fillerWithValuesFromTxtFile.fillBoard();
        startInfiniteLoop();
    }
    else display.displayErrorsInformation(validator.getErrorMessage());
}

void Game::generateRandomBoard()
{
    board = new Board(20,50);
    fillerWithrandomValues.setBoard(*board);
    fillerWithrandomValues.fillBoard();
    startInfiniteLoop();
}

void Game::showOptions()
{
    std::cout << "What you want to do:\n";
    std::cout << "1. Load board from file txt\n";
    //std::cout << "2. Load board from file image\n";
    std::cout << "3. Generate random board\n";
    std::cout << "0. Exit\n";
}

void Game::displayCurrentBoard()
{
    converter.convertBoolBoardToString((board->getTheBoard()));
    display.displayGameBoardOnTheCommandLine(converter.getBoardConvertToString(),board->getNumberOfColumns());
    display.displayCounterOnTheCommandLine(counterOfIterations);
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
                nameOfFile.askUserAboutFileName();
                converter.convertBoolBoardToString((board->getTheBoard()));
                saveToFile.saveFile(converter.getBoardConvertToString(),nameOfFile.getFileName());
                newPressed.setSaveToFileStatus(false);
            }
            displayCurrentBoard();
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
