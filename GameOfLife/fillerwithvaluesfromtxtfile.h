#ifndef FILLERWITHVALUESFROMTXTFILE_H
#define FILLERWITHVALUESFROMTXTFILE_H
#include <string>
#include "board.h"
#include "readerfromtxtfile.h"
#include "filler.h"

class FillerWithValuesFromTxtFile:public virtual Filler
{
public:
    FillerWithValuesFromTxtFile();
    void fillBoard();
    void getStringFromTxtFileReader(ReaderFromTxtFile);
private:
    std::string readString;

};

#endif
