#include <iostream>
#include "Utilisateur.h"

int main() {
    std::cout << "=== Simulation de connexions ===\n";

    Utilisateur u1("Alice", "admin");

    std::cout << "Nombre total d'utilisateurs connectes : "
              << Utilisateur::getNbUtilisateursConnectes() << "\n\n";

    std::cout << "=== Deconnexions automatiques ===\n";

    {
        Utilisateur u2("David", "etudiant");
        std::cout << "Nombre d'utilisateurs connectes : "
                  << Utilisateur::getNbUtilisateursConnectes() << "\n\n";
    }

    std::cout << "Apres destruction de u4 : "
              << Utilisateur::getNbUtilisateursConnectes() << "\n\n";

    std::cout << "=== Fin du programme ===\n";
    return 0;
}
