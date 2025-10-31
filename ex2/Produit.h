#ifndef PRODUIT_H
#define PRODUIT_H

#include <string>

class Produit {
private:
    std::string nom;
    double prixHT;
    static float tauxTVA;  

public:
    Produit(const std::string& nom, double prixHT);

    double getPrixTTC() const;

    static void modifierTVA(float nouveauTaux);

    std::string getNom() const;
    double getPrixHT() const;
};

#endif