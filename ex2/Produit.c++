#include "Produit.h"

float Produit::tauxTVA = 20.0;

Produit::Produit(const std::string& nom, double prixHT)
    : nom(nom), prixHT(prixHT) {}

double Produit::getPrixTTC() const {
    return prixHT * (1 + tauxTVA / 100);
}

void Produit::modifierTVA(float nouveauTaux) {
    tauxTVA = nouveauTaux;
}

std::string Produit::getNom() const { return nom; }
double Produit::getPrixHT() const { return prixHT; }