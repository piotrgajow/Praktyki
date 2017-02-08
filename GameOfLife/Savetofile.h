#ifndef SAVETOFILE_H
#define SAVETOFILE_H
//#include <QFileDialog>
#include <QTextStream>
#include <QFile>
#include <vector>

class SaveTofile
{
public:
    SaveTofile();
    SaveTofile(QString,std::vector <std::vector<char>>);

};

#endif // SAVETOFILE_H
