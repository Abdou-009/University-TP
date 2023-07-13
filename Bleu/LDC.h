#ifndef LDC_H_INCLUDED
#define LDC_H_INCLUDED


typedef struct Box{
    int data;
    struct Box* next;
    struct Box* prev;
}Box;

// ====================================================================
// ====================================================================

typedef Box * List;

void AjAuDebut(List * debut , int e){
    Box * b;
    b =(Box*)malloc(sizeof(Box));
    b->next=b->prev=NULL;
    b->data=e;
    b->next=*debut;
    if(*debut!=NULL){
        (*debut)->prev=b;}
    *debut=b;
}
void affiche(List * debut){
    Box * temp;
    temp=debut;
    if(debut==NULL){
        printf("la list est vide ");
    }
    else{
       printf("Debut -- ");
    while(temp != NULL){
        printf(" %d -- ",temp->data);
        temp = temp->next;
    }

    }
    printf("Fin ");
    printf("\n");
}

// ====================================================================
// ====================================================================

void AjAlaFin(List * debut,int e ){
    Box * temp,*b;
    b=(Box*)malloc(sizeof(Box));
    b->next=b->prev=NULL;
    b->data=e;
    if(*debut==NULL){
        *debut=b;
    }
    else{
    temp=*debut;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=b;
    b->prev=temp;
    }
}

// ====================================================================
// ====================================================================

void AjAuMilieuAp(List * debut,int e, int v){
    Box * temp, * b;
    if(*debut != NULL){
        b=(Box*)malloc(sizeof(Box));
        b->next=b->prev=NULL;
        b->data=e;
        temp = *debut;
        while(temp != NULL && temp->data != v)
            temp = temp->next;
        if(temp->data == v){
           b->next= temp->next;
           b->prev= temp;
           if(temp->next != NULL)
            temp->next->prev=b;
           temp->next=b;

        }
    }
}

// ====================================================================
// ====================================================================

void AjAuMilieuAv(List * debut,int e, int v){
    Box * temp, * b;
    if(*debut != NULL){
        b=(Box*)malloc(sizeof(Box));
        b->next=b->prev=NULL;
        b->data=e;
        temp = *debut;
        while(temp != NULL && temp->data != v)
            temp = temp->next;
        if(temp->data == v){
        b->next=temp;
        b->prev=temp->prev;
        if(temp->prev != NULL)
            temp->prev->next=b;
        if(temp->prev == NULL)
            *debut=b;
        temp->prev=b;

        }


}}

// ====================================================================
// ====================================================================

void suppAuDebut(List * debut){
    Box * temp;
    if(*debut != NULL){
        temp = *debut;
        *debut = temp->next;
        if(temp->next != NULL)
            temp->next->prev =NULL;
        free(temp);
    }

}
// ====================================================================
// ====================================================================
void supp(List * debut,int v){
    Box * temp;
    if(*debut !=NULL){
        temp = * debut;
        while(temp->data!=v && temp!= NULL)
            temp=temp->next;
        if(temp->data==v)
            if(temp->prev!=NULL)
                temp->prev->next=temp->next;
            else
                *debut=temp->next;
            if(temp->next!=NULL)
                temp->next->prev=temp->prev;
            free(temp);

    }


}
// ====================================================================
// ====================================================================

#endif // LDC_H_INCLUDED
