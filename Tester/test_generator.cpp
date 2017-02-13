#include "Tester_Catch.h"
#include "../GameOfLife/generator.h"

#include <iostream>
TEST_CASE( "test1", "[test1]" ){

    Board board1;
    Board board2;

    std::vector<std::vector <bool>> inputData = {{1,0,1,0},
                                                 {1,1,1,0},
                                                 {1,0,1,0}};

    std::vector<std::vector <bool>> outputData = {{1,0,1,0},
                                                  {1,0,1,1},
                                                  {1,0,1,0}};
    board1.setStateOfBoard(inputData);
    board2.setStateOfBoard(outputData);
    Generator generator;
    generator.generateNextBoard(board1);
    for (int i=0; i<board1.getTheBoard().size();i++)
    {
        for (int j=0; j<board1.getTheBoard().size();j++)
        {
            std::cout << board1.getTheBoard()[0].size();
        }
    }
    if (board1.getTheBoard() == board2.getTheBoard()) std::cout << "true"; else std::cout << "false";
}
