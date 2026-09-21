#include <iostream>
int main(){
    int r;
    std::cout << "Hello, World!" << std::endl;// Modification du haut par la personne A
    std::cout << "Modification du haut par la personne c" << std::endl;//affiche le résultat
    std::cout << "Modification du bas par la personne D" << std::endl;//affiche le résultat
    std::cout << "Ton papa" << std::endl;
    std::cout << "Entrer un nombre: ";//l'utilisateur doit entrer un nombre
    int nombre;
    std::cin >> nombre;// En cours de travail
    r= nombre*nombre;
    std::cout << "Le carré de " << nombre << " est: " << r << std::endl;//affiche le résultat
    return 0;
}
