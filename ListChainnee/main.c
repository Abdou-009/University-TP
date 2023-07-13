#include <stdio.h>
#include <stdlib.h>
#include "HeadList.h"

int main()
{
    struct Box * list=NULL;
    int n,i,nbr,r,ins;
    /*printf("Donner le nombre des element : ");
    scanf("%d",&nbr);
    for(i=0;i<nbr;i++){
        printf("Donner val %d : ",i+1);
        scanf("%d",&n);
        list = AjoutALaFin(list,n);
    } */
    list = AjoutALaFin(list,1);
    list = AjoutALaFin(list,2);
    list = AjoutALaFin(list,3);
    list = AjoutALaFin(list,4);
    list = AjoutALaFin(list,5);
    list = AjoutALaFin(list,6);
    Afffiche(list);
    //printf("\n Donner la val qui vous veut rechercher : ");
    //scanf("%d",&r);
    //list=suppAuDebut(list);
    // = supp(list,4);
    //rech(list,5);

        //list = suppairV2(list);

        //mul(list);

        list=supp(list,4);
    printf("\n new list \n");
    Afffiche(list);



    return 0;
}
