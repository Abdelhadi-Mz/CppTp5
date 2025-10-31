#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <string>

class Utilisateur {
private:
    std::string nom;
    std::string role;
    static int nbUtilisateursConnectes;

public:
    Utilisateur(const std::string& nom, const std::string& role);
    ~Utilisateur();
    static int getNbUtilisateursConnectes();
    void afficher() const;
};

#endif
