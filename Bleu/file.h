#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED
typedef struct{
    int tete;
    int Queue;
    int taille;
    int file[50];
}MyFile;

int estVide(MyFile f){
    return f.Queue==f.tete;
}
int estPleinne(MyFile f){
    return f.Queue==f.taille;
}
void enfiler(MyFile *f, int v){
    f->file[f->Queue++]=v;
}
int defiler(MyFile *f){
    return f->file[f->tete++];
}

#endif // FILE_H_INCLUDED
