#include <stdio.h>
#include <stdlib.h>
#include "LDC.h"

void main()
{
    List l = NULL;
    int n,nbr,i;
    printf(" la taille : ");
    scanf("%d",&nbr);
    for(i=0; i<nbr ; i++){
        printf(" Donner le val : ");
        scanf("%d",&n);
        AjAlaFin(&l,n);
    }
    affiche(l);
    //AjAuDebut(&l,10);
    //affiche(l);
    /*printf(" val supp   : ");
    scanf("%d",&nbr);*/
    //supp(&l,3);
    AjAuMilieuAv(&l,10,3);
    affiche(l);
}
