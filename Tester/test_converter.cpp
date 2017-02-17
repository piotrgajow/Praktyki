#include "Tester_Catch.h"
#include "../GameOfLife/converterboolboardtostring.h"
#include <vector>



TEST_CASE("Check if the positions in vector give proper symbols", "[Converterboolboardtostring]")
{
    std::vector<std::vector<bool>> TesttheBoard {{0,0,0,0},
                                                 {0,1,1,0},
                                                 {0,0,1,0},
                                                 {0,0,0,0}};


 ConverterBoolBoardToString *converter=new ConverterBoolBoardToString;
 CHECK(converter->convertBoolBoardToString(TesttheBoard)[0]=='x');
 CHECK(converter->convertBoolBoardToString(TesttheBoard)[1]=='x');
 CHECK(converter->convertBoolBoardToString(TesttheBoard)[2]=='\n');
 CHECK(converter->convertBoolBoardToString(TesttheBoard)[3]=='.');
 CHECK(converter->convertBoolBoardToString(TesttheBoard)[4]=='x');
 CHECK(converter->convertBoolBoardToString(TesttheBoard)[5]=='\n');

    delete converter;
}

TEST_CASE("Check if conversation of TesttheBoard gives proper size of the string", "[Converterboolboardtostring]")
{
    std::vector<std::vector<bool>> TesttheBoard {{0,0,0,0},
                                                 {0,1,1,0},
                                                 {0,0,1,0},
                                                 {0,0,0,0}};

  ConverterBoolBoardToString *converter=new ConverterBoolBoardToString;
  CHECK(converter->convertBoolBoardToString(TesttheBoard).size()== 6);

    delete converter;
}
