#include "./Header/essaiListeChaine.h"

typedef struct Noeud
{
    int valeur; // Un maillon possède une valeur
    struct Noeud *pointeur; // et un pointeur vers le maillon suivant
}Noeud;

void printNoeud(Noeud *entree)
{
    printf("[%d] -> ",entree->valeur); // on affiche la valeur du maillon pointé
}

void printListeChaine(Noeud *entree)
{
    Noeud *temp = entree; // pour eviter de modifier la liste on en crée une temporaire
    while(temp!=NULL) // tant que le maillon sur lequel nous sommes n'est pas nul
    {
        printNoeud(temp); // On utilise la fonction plus haut pour afficher
        temp = temp->pointeur; // on passe au maillon suivant
    }
    printf("NULL"); // on affiche la valeur du dernier maillon, donc le maillon nul
    printf("\n");
}

Noeud *AjouterElement(Noeud *Liste, int valeur)
{
    Noeud *nouveau = malloc(sizeof(Noeud)); // Pour ajouter un élément a la liste il faut allouer de l'espace pour donner une adresse au pointeur et éviter ainsi les erreurs potentielles
    nouveau->valeur = valeur; // on met la valeur en paramètre au maillon
    nouveau->pointeur = Liste; // on fait pointer le maillon crée vers la liste courrante, autrement dit, on ajoute le maillon a gauche de la chaine
    return nouveau; // on retourne la totalité de la chaine du coup
}

Noeud *RemplirAlea(Noeud *Liste,int size)
{
    int i = 0; 
    while(i<size) // On ajouté size Maillon a la liste
    {
        Liste = AjouterElement(Liste,rand()%100); // on utilise la fonction ajouterElement pour en ajouter un de valeur aléatoire
        i++;
    }
    return Liste; // On retourne toute la liste
}

Noeud *FreeListeC(Noeud *Liste) 
{
    Noeud *tmp; // On crée une liste temporaire
    int acc =  0;
    while(Liste)
    {
        tmp = Liste; // On donne l'adresse de Liste a tmp
        Liste = Liste->pointeur; //on parcourt toute la liste 
        free(tmp); // on libère le maillon courant
       
        acc++;
    }
    printf("Espace memoire lib%cr%c \n",130,130);
}