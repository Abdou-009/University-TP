#ifndef LISTDC_H_INCLUDED
#define LISTDC_H_INCLUDED
typedef struct Box{
    int data;
    struct Box * next;
    struct Box * prev;
}Box;
typedef Box * List;
void AjAuDebut(List * debut , int e){
    Box b;
    b=(Box*)malloc(sizeof(Box));
    b->data=e;
    b->next=b->prev=NULL;
    b->next=*debut
    if(*debut!=NULL)
        (*debut)->prev=b;
    *debut=b;
}
void affiche(List * debut){
    Box * temp;
    temp=debut;
    if(debut==NULL){
        printf("la list est vide ");
    }
    else{
    while(temp != NULL){
        printf(" %d -- ",temp->data);
        temp = temp->next;
    }}

}

#endif // LISTDC_H_INCLUDED
