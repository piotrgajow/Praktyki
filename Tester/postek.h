#include "../GameOfLife/savetofile.h"


TEST_CASE("Test If Savetofile creates file with Random text", "file")
{
    QString txt;
    SaveTofile saver1( "test2.txt" ,"Random text");
    QFile file("test2.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream stream(&file);
    txt = stream.readAll();
    file.close();
    REQUIRE(txt == "Random text");
    file.remove();
}

TEST_CASE("Test If Savetofile creates readable file", "file")
{
    SaveTofile saver( "filename.txt" ,"Random text");
    QFile file("filename.txt");

    REQUIRE(file.open(QIODevice::ReadOnly | QIODevice::Text) == 1);
    file.remove();

}
