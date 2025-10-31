#include "Utilisateur.h"
#include <iostream>

int Utilisateur::nbUtilisateursConnectes = 0;

Utilisateur::Utilisateur(const std::string& nom, const std::string& role)
    : nom(nom), role(role)
{
    nbUtilisateursConnectes++;
    std::cout << nom << " (" << role << ") s'est connecte.\n";
    std::cout << "Utilisateurs connectes : " << nbUtilisateursConnectes << "\n\n";
}

Utilisateur::~Utilisateur() {
    nbUtilisateursConnectes--;
    std::cout << nom << " s'est deconnecte.\n";
    std::cout << "Utilisateurs connectes : " << nbUtilisateursConnectes << "\n\n";
}

int Utilisateur::getNbUtilisateursConnectes() {
    return nbUtilisateursConnectes;
}

void Utilisateur::afficher() const {
    std::cout << "Nom : " << nom << ", Role : " << role << "\n";
}
