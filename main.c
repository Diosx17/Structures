#include "essaiListeChaine.h"

int main(int argc, char const *argv[])
{
    srand(time(NULL)); // Pour l'aléatoire 
    Noeud *entree = NULL; // Initialisation d'une liste chainée
    entree = RemplirAlea(entree,50);// ajout de 50 maillons à cette liste
    printListeChaine(entree); // affichage de la liste
    FreeListeC(entree); // liberation espace memoire reservé dynamiquement
    return 0;
}
