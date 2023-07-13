#ifndef ARBER_H_INCLUDED
#define ARBER_H_INCLUDED

// ===============================================================
typedef struct Node {
    int data;
    struct Node *droit;
    struct Node *gauche;
}MyNode;
// ===============================================================
MyNode * newNode(int data){
    MyNode * n;
    n=(MyNode*)malloc(sizeof(MyNode));
    n->data=data;
    n->droit=n->gauche=NULL;
    return n;
}
// ===============================================================
void prefixe(MyNode *arb ){
    if(arb!=NULL){
        printf("%d -- ",arb->data);
        prefixe(arb->gauche);
        prefixe(arb->droit);
}}
// ===============================================================
void infixe(MyNode *arb ){
    if(arb!=NULL){

        infixe(arb->gauche);
        printf("%d -- ",arb->data);
        infixe(arb->droit);
}}
// ===============================================================
void posfixe(MyNode *arb ){
    if(arb!=NULL){

        posfixe(arb->gauche);
        posfixe(arb->droit);
        printf("%d -- ",arb->data);
}}

// ===============================================================
void insertRec(int val, MyNode **arb ){
    if(*arb==NULL){
        *arb=newNode(val);
        return;
    }
    if(val<(*arb)->data)
             insertRec(val,&(*arb)->gauche);
    else
             insertRec(val,&(*arb)->droit);
}
// ===============================================================
void rech(MyNode *arb,int val)
{
    if(arb->data != NULL){
        if(arb->data == val)
            printf("val est exist");
            return;
        if(val<arb->data)
            rech(arb->gauche,val);
        if(val>arb->data)
            rech(arb->droit,val);
    }
    else{
        printf("val n'est exist pas");}
}
#endif // ARBER_H_INCLUDED
