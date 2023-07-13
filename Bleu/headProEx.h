#ifndef HEADPROEX_H_INCLUDED
#define HEADPROEX_H_INCLUDED
//======================================
typedef struct box {
    int data;
    struct box * next;
    struct box * prev;
}box;
//=======================================
void affiche(box * debut)
{
    if(debut == NULL){
        printf("la list est vide ! ");}
    else{
        printf(" Debut == ");
        while(debut != NULL)
    {
       printf(" %d ==",debut->data);
       debut=debut->next;
    }
        printf(" Fin ");}
}
//=======================================
box * newElem(int n)
{
    box * b;
    b=(box*)malloc(sizeof(box));
    b->data=n;
    b->next=b->prev=NULL;
    return b;
}
//========================================
typedef box *lis;

void AjAuDebut(lis *debut, int n)
{
    box * b;
    b=newElem(n);
    b->next=*debut;
    if(*debut != NULL){
       (*debut)->prev = b;
    }
    *debut=b;
}
//==========================================
void AjAFin(lis *debut, int n)
{
    box * b, * temp;
    b=newElem(n);
    temp = *debut;
    if(*debut== NULL){
        *debut=b;
    }
    else {
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next=b;
    }
    return debut;
}
//===========================================
box * AjAuMilieu(lis *debut , int n,int r)
{
    box * b, *temp;
    b=newElem(n);
    if(*debut!=NULL)
    {
        temp=*debut;
        while(temp->next!= NULL && temp->next->data!=r){
            temp = temp->next;
        }

        if(temp->next->data==r){
           b->next = temp->next->next;
           b->prev = temp;
           temp->next = b;
        }
        else{
            printf("l'element n'est exist pas ");}


    }
    return debut;
}
//========================================================
box * supAuDebut(box * debut){
    box * p;
    if(debut != NULL){
        p=debut;
        debut=debut->next;
        debut->next->prev=NULL;
        free(p);
    }
    return debut;
}
// ==============================================================
void supp(lis * debut,int n){
    box * temp, *p;
    if(*debut != NULL)
    {
        while( temp->data != n && temp != NULL)
            temp = temp->next;

        if(temp->data == n)
            if(temp->prev != NULL)
                temp->prev->next = temp->next;
            else
                *debut = temp->next;
            if(temp->next != NULL)
                temp->next->prev = temp->prev;
            free(temp);

    }

}
#endif // HEADPROEX_H_INCLUDED
