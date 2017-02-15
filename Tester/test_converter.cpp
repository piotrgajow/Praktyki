#include "Tester_Catch.h"
#include <vector>
#include "../GameOfLife/converterboolboardtostring.h"

TEST_CASE("check in convert to string properly","[Converter]"){
//std::vector<std::vector<bool>>temporary;
//{
//    for(int=0; i<4; i++){
//      temporary.push_back(rand()%2);
//    }
//
    std::string convertedString;
std::vector<std::vector<bool>> temporary(4, std::vector<bool>(4));

//for(int i=1; i<3; i++){
//    for(int j=1;j<3;j++){
//        temporary[i][j] = rand()%2;
//    }
//}

//vector
temporary[1][1]=1;
temporary[1][2]=1;
temporary[2][1]=0;
temporary[2][2]=0;

ConverterBoolBoardToString *converter;
converter = new ConverterBoolBoardToString;
//convertedString = ;

CHECK(converter->convertBoolBoardToString(temporary).size()== 6);


//CHECK(converter->convertBoolBoardToString(temporary)[0]=='.'); // nie zadziala
CHECK(converter->convertBoolBoardToString(temporary)[0]=='x');
CHECK(converter->convertBoolBoardToString(temporary)[1]=='x');
CHECK(converter->convertBoolBoardToString(temporary)[2]=='\n');
CHECK(converter->convertBoolBoardToString(temporary)[3]=='.');
CHECK(converter->convertBoolBoardToString(temporary)[4]=='.');
CHECK(converter->convertBoolBoardToString(temporary)[5]=='\n');

temporary.clear();

std::cout<<temporary[1][1];
delete converter;
}


