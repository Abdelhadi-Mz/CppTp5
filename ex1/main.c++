#include<iostream>
#include "Boite.h"

int main(){
    Boite b1(34.5,23,33.5);
    Boite b2(32.5,32,37);
    {
    Boite b3(31.5,12,37);
    std::cout << "Nombre total de boites : " << Boite::getMbBoites() << std::endl;

    }
    std::cout << "Nombre total de boites : " << Boite::getMbBoites() << std::endl;
    return 1;
}