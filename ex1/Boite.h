#ifndef BOITE_H
#define BOITE_H
#include<string>
class Boite{
    private:
        double hau,larg,longr;
        static int nbBoites;
    public:
        Boite(double hau,double larg,double longr);
        ~Boite();
            
        static int getMbBoites();
};

#endif