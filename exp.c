#include <stdio.h>
#include <stdlib.h>

typedef struct Box {
    int data;
    struct Box * next;
} Box;
Box* ajoutAuDebut(Box * debut,int elem){
    Box * b;
    b= (Box *)malloc(sizeof(Box));
    b->data=elem;
    b->next=debut;
    debut=b;
    return debut;
}
void Afffiche( Box * debut){
    Box * parc=debut;
    if(debut=NULL)
    printf(" Lalist est Vide");
    else
    {
        while(parc!=NULL){
        printf("%d -->",parc->data);
        parc=parc->next;
        }
    }
}
int main()
{
    Box * list;
    int n,i,nbr;
    printf("Donner le nombrez des element : "):
    scanf("%d",&nbr);
    for(i=0;i<nbr;i++){
    list=ajoutAuDebut(list,n);
    }
    Afffiche(list);

return 0;
}