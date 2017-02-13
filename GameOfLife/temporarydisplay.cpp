#include "temporarydisplay.h"

TemporaryDisplay::TemporaryDisplay()
{

}

TemporaryDisplay::TemporaryDisplay(std::vector<std::vector <bool>> plansza)
{
 for(int i =1 ; i< plansza.size()-1;i++)
 {
     for(int j =1 ; j< plansza.size()-1;j++)
     {
         (plansza[i][j]) ? std::cout<<"x" : std::cout<<".";

     }
   std::cout<<"\n";
 }
 std::cout<<"-------------------------------------"<<std::endl;
}

