#include "Game.h"

Game::Game()
{
Board board;
Filler filler;
filler.FillerWithRandomValues::fillBoard(&board);
ConverterCharBoardToString converter;
Converter.convertBoolBoardToString(board.theBoard);
DisplayGameBoardOnTheCommandLine display;
display(convert.boardConvertToString);

}
