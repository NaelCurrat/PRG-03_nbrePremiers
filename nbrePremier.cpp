/*
  ------------------------------------------------------------------------------
  Fichier     : nbre_1er.cpp
  Auteur(s)   : Naël Currat
  Date        : 07.10.26

  But         : identifier tous les nombres premiers compris
                et une valeur choisie par l'utilisateur

  Remarque(s) : les erreurs de saisie ne sont pas vérifiées

  Compilateur : gcc
  ------------------------------------------------------------------------------
*/
#include <iostream>

int main() {

    const int limiteMin = 2;
    const int limiteMax = 1000;
    const char recommencer = 'O';
    const char pasRecommencer = 'N';
    char recommencerUtilisateur;

    int nbUtilisateurLimite;
   do{
    do {
        std::cout << "Entrer une valeur [ " << limiteMin << " - " << limiteMax << "]" <<std::endl;
        std::cin >> nbUtilisateurLimite;
    }while ((nbUtilisateurLimite < limiteMin || nbUtilisateurLimite > limiteMax));

    std::cout << "Voici la liste des nombres premiers" << std::endl;
    for (int i = 2; i <= nbUtilisateurLimite; ++i) {
        bool premier = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                premier = false;
            }
        }
        if (premier == true) {
            std::cout<<i<<std::endl;
        }
    }
       std::cout << "Voulez-vous recommencer ? [O/N]"<<std::endl;
       std::cin >> recommencerUtilisateur;

   }while (recommencerUtilisateur == recommencer);

    std::cout << "Fin du programme" << std::endl;
}