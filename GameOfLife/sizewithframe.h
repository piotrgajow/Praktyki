#ifndef SIZE_H
#define SIZE_H
#include <string>
#include <iostream>
#include <sstream>

int const frame = 2;

class SizeWithFrame
{
public:
    SizeWithFrame(int,int);
    SizeWithFrame(std::string stringBoard);
    int getHeight() const;
    int getWidth() const;
    int counterOfLineWidth(std::string);
    int counterOfBoardHeight(std::string);

private:
    int height;
    int width;
};

#endif
