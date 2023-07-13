#include <stdio.h>
#include <stdlib.h>
#include "pile.h"
void main()
{
    MyPile p1,p2;
    int n;
    printf("Donner la taille de p : ");
    scanf("%d",&p1.taille);
    p1.sommet=0;

    while(!estPleinne(p1)){
        printf("Donner le valeur : ");
        scanf("%d",&n);
        empiler(&p1,n);
    }
    while(!estVide(p1)){
        printf("%d\n",depiler(&p1));
    }
}
