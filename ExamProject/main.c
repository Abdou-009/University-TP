#include <stdio.h>
#include <stdlib.h>
#include "headProEx.h"
int main()
{
    box * List=NULL;
    int n,i,s, nbr;
    /* printf(" donner la taille de list : ");
    scanf("%d",&nbr);
    for(i=0;i<nbr;i++){
        printf(" donner element : ");
        scanf("%d",&n);
        AjAFin(&List, n);
    } */

    AjAFin(&List, 1);
    AjAFin(&List, 2);
    AjAFin(&List, 3);
    AjAFin(&List, 4);

    affiche(List);
    supp(&List,2);
    printf(" \n new list : \n ");
    affiche(List);



}
