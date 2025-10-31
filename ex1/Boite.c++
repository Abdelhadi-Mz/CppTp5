#include<iostream>
#include "Boite.h"

Boite::Boite(double hau,double larg,double longr):hau(hau),larg(larg),longr(longr){
    nbBoites++;
    std::cout<<"boite cree le nb de boites est : "<<nbBoites<<std::endl;
}
Boite::~Boite(){
    nbBoites--;
    std::cout<<"boite detruite le nb de boites est : "<<nbBoites<<std::endl;
}
int Boite::getMbBoites(){
    return nbBoites;
}
int Boite::nbBoites=0;