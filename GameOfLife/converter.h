#ifndef CONVERTERBOOLBOARDTOSTRING_H
#define CONVERTERBOOLBOARDTOSTRING_H
#include <vector>
#include <iostream>

class Converter
{
public:

      std::string convertBoolBoardToString (std::vector<std::vector<bool> > theBoard);
      std::string getBoardConvertToString();

private:

      const static char deadCell=' ', liveCell='X';
      std::string boardConvertToString;
};

#endif // CONVERTERBOOLBOARDTOSTRING_H
