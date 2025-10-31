#include <iostream>
#include "Produit.h"

int main() {
    Produit p1("Livre", 100);
    Produit p2("Stylo", 5);
    Produit p3("Cahier", 20);

    std::cout << "Prix TTC initial :\n";
    std::cout << p1.getNom() << " : " << p1.getPrixTTC() << " Eur\n";
    std::cout << p2.getNom() << " : " << p2.getPrixTTC() << " Eur\n";
    std::cout << p3.getNom() << " : " << p3.getPrixTTC() << " Eur\n";

    Produit::modifierTVA(10);

    std::cout << "\nPrix TTC après modification du taux de TVA à 10% :\n";
    std::cout << p1.getNom() << " : " << p1.getPrixTTC() << " EUR\n";
    std::cout << p2.getNom() << " : " << p2.getPrixTTC() << " EUR\n";
    std::cout << p3.getNom() << " : " << p3.getPrixTTC() << " EUR\n";

    return 0;
}