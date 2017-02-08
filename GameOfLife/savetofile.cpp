#include "Savetofile.h"



SaveTofile::SaveTofile(QString fileName, vector < vector <char>> text)
{
    QFile plik(fileName);
        plik.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text);
int SIZE_OF_ROW = text[0].size();
int SIZE_OF_COLUMN = text.size();
        QTextStream stream(&plik);
          for (int i = 0 ; i< SIZE_OF_COLUMN;i++)
          {
              for(int k = 0 ; k < SIZE_OF_ROW; k++)
              {
                  stream << text[i][k];
              }
          }

        plik.close();


}

