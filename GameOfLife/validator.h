#ifndef VALIDATOR_H
#define VALIDATOR_H
#include <string>
#include "size.h"
class Validator
{
public:
    Validator();
    bool validate(std::string);
    void CouterOfFirstLineWidth(std::__cxx11::string readString, int &lineWidth);

    Size getSizeOfBoard() const;

private:
    Size * sizeOfBoard;
    std::string errorMessage;
};

#endif // VALIDATOR_H
