#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Noeud
{
    int valeur;
    struct Noeud *pointeur;
}Noeud;

void printNoeud(Noeud *entree)
{
    printf("[%d] -> ",entree->valeur);
}

void printListeChaine(Noeud *entree)
{
    Noeud *temp = entree;
    while(temp!=NULL)
    {
        printNoeud(temp);
        temp = temp->pointeur;
    }
    printf("NULL");
    printf("\n");
}

Noeud *AjouterElement(Noeud *Liste, int valeur)
{
    Noeud *nouveau = malloc(sizeof(Noeud));
    nouveau->valeur = valeur;
    nouveau->pointeur = Liste;
    return nouveau;
}

Noeud *RemplirAlea(Noeud *Liste,int size)
{
    int i = 0;
    while(i<size)
    {
        Liste = AjouterElement(Liste,rand()%100);
        i++;
    }
    return Liste;
}

Noeud *FreeListeC(Noeud *Liste)
{
    Noeud *tmp;
    int acc =  0;
    while(Liste)
    {
        tmp = Liste;
        Liste = Liste->pointeur; 
        free(tmp);
       
        acc++;
    }
    printf("Espace memoire libere \n");
}

int main(void)
{
    srand(time(NULL));
    Noeud *entree = NULL;
    entree = RemplirAlea(entree,50);
    printListeChaine(entree);
    FreeListeC(entree);
    return 0;
}
