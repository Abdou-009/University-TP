#include <stdio.h>
#include <stdlib.h>
#include "file.h"
int main()
{
    int n;
    MyFile f1,f2;
    printf("Donner la taille de file : ");
    scanf("%d",&f1.taille);
    f1.tete=0;
    while(!estPleinne(f1)){
       printf("Donner le valeur : ");
       scanf("%d",&n);
       enfiler(&f1,n);
    }
    while(!estVide(f1) && f1.file[f1.tete]!=6){
       printf("%d -- ",defiler(&f1));
    }


}
