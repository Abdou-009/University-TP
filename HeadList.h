#ifndef HEADLIST_H_INCLUDED
#define HEADLIST_H_INCLUDED
typedef struct Box {
    int data;
    Box * next;
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
    printf(" La list est Vide");
    else
    {
        while(parc!=NULL){
        printf("%d -->",parc->data);
        parc=parc->next;
        }
    }
}


#endif // HEADLIST_H_INCLUDED
