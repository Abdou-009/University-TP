#ifndef HEADLIST_H_INCLUDED
#define HEADLIST_H_INCLUDED
typedef struct Box {
    int data;
    struct Box * next;
} Box;

/******************************************************************************/
/******************************************************************************/

 Box* ajoutAuDebut(Box * debut,int elem){
    Box * b;
    b= (Box *)malloc(sizeof(Box));
    b->data=elem;
    b->next=debut;
    debut=b;
    return debut;
}

/******************************************************************************/
/******************************************************************************/

Box * AjoutALaFin(Box * debut, int e ){
    Box * b, * temp;
    b = (Box *)malloc(sizeof(Box));
    b->data = e;
    b->next = NULL;
    if (debut == NULL)
        debut = b;
    else {
        temp = debut;
        while (temp->next != NULL )
            temp = temp->next;
        temp->next=b;
    }
    return debut;

}

/******************************************************************************/
/******************************************************************************/

Box * AjoutAuMilieu(Box * debut,int r,int elm)
{
    Box * b, *temp;
    if(debut==NULL)
        printf("La List est vide");
    else{
        temp=debut;
        b=(Box*)malloc(sizeof(Box));
        b->data=elm;
        while(temp != NULL && temp->data!=r){
            temp=temp->next;
        }
        if(temp!=NULL){
            b->next=temp->next;
            temp->next=b;
        }
        else{
           printf(" Element %d not exist ",r);
        }
    }
    return debut;
}

/******************************************************************************/
/******************************************************************************/


void Afffiche( Box * debut){
    Box * parc;
    parc=debut;
    if(debut=NULL)
    printf(" La list est Vide");
    else
    {
        while(parc!=NULL){
        printf(" | %d | -- ",parc->data);
        //printf(" | %d | -- ",parc);
        parc=parc->next;
        }
    }
}

/******************************************************************************/
/******************************************************************************/

Box * suppAuDebut(Box * debut){
    Box * p;
    if(debut!=NULL){
        p = debut;
        debut = debut->next;
        free(p);
    }

    return debut;
}

/******************************************************************************/
/******************************************************************************/
Box * supp(Box * debut, int v){
    Box * temp, * p;
    if(debut!=NULL)
        if(debut->data == v){
            p = debut;
            debut=debut->next;
            free(p);
        }
        else{
            temp=debut;
            while(temp != NULL && temp->next->data != v){
                temp=temp->next;
            }
            if(temp != NULL){
                p=temp->next;
                temp->next=temp->next->next;
                free(p);
            }
           if(temp == NULL) {
                printf("element exist pas");
            }
        }
    return debut;
}

/******************************************************************************/
/******************************************************************************/

void rech(Box  * debut,int v){
    Box * temp;
    if(debut != NULL)
        temp = debut;
        while(temp != NULL && temp->data != v){
            temp=temp->next;
        }
        if(temp != NULL){
            printf("Oui l'element est exist ");
        }
        else{
            printf("Non l'element n'est exist pas ");
        }


}

/******************************************************************************/
/******************************************************************************/
Box * suppair(Box * debut)
{
    Box * temp, *p;
    if(debut != NULL)
    {
        temp=debut;
        while(temp != NULL && temp->next->data%2 !=0){
            temp =temp->next;
        }
        if(temp->data%2 == 0)
            p=temp->next;
            temp = temp->next->next;
            free(p);
    }
    return debut;
}

/******************************************************************************/
/******************************************************************************/
void mul(Box * debut)
{
    Box *temp;
    if(debut != NULL)
    {
        temp=debut;
        while(temp != NULL ){
            temp->data = temp->data*2;
            temp =temp->next;
        }

    }

}

/******************************************************************************/
/******************************************************************************/
Box * suppairV2(Box * debut)
{
    Box * temp, *p;
    if(debut != NULL)
    {
        temp=debut;
        while(temp != NULL ){


        if(temp->data%2 == 0){
            p=temp;
            temp = temp->next;
            free(p);}
        else{
            temp =temp->next;}}
    }
    return debut;
}
/******************************************************************************/
/******************************************************************************/


#endif // HEADLIST_H_INCLUDED
