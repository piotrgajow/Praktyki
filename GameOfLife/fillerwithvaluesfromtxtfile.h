#ifndef FILLERWITHVALUESFROMTXTFILE_H
#define FILLERWITHVALUESFROMTXTFILE_H
#include <string>
#include "board.h"

class FillerWithValuesFromTxtFile
{
public:
    FillerWithValuesFromTxtFile();
    fillBoardWithGivenString(Board&, std::string);
};

#endif // FILLERWITHVALUESFROMTXTFILE_H
