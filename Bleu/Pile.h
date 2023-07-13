#ifndef PILE_H_INCLUDED
#define PILE_H_INCLUDED
typedef struct {
    int taille;
    int sommet;
    int pile[50];
}MyPile;


int estVide(MyPile p){
    return p.sommet==0;
}

int estPleinne(MyPile p){
    return p.sommet==p.taille;
}

void empiler(MyPile *p, int v){
     p->pile[p->sommet++]=v;
}

int depiler(MyPile *p){
    return p->pile[--p->sommet];

}


#endif // PILE_H_INCLUDED
