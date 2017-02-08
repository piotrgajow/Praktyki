#include "Savetofile.h"



SaveTofile::SaveTofile(QString fileName, QString text)
{
    QFile plik(fileName);
        plik.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text);

        QTextStream stream(&plik);
        stream << text;
        plik.close();

}
