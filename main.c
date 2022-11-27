#include "essaiListeChaine.h"

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    Noeud *entree = NULL;
    entree = RemplirAlea(entree,50);
    printListeChaine(entree);
    FreeListeC(entree);
    return 0;
}
