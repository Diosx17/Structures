#ifndef ESSAILISTECHAINE_H
#define ESSAILISTECHAINE_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Noeud Noeud;

void printNoeud(Noeud *entree);
void printListeChaine(Noeud *entree);
Noeud *AjouterElement(Noeud *Liste, int valeur);
Noeud *RemplirAlea(Noeud *Liste,int size);
Noeud *FreeListeC(Noeud *Liste);

#endif