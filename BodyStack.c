#include <string.h>
#include "headerStack.h"

void createEmpty(Stack *S){
    (*S).top = NULL;
}
addresS alokasi(char hari[100],char bulan[100],char tanggal[100],char jam[100],char tahun[100],char nama[100],int id,float jumlah){
    addresS p ;
    p=(addresS)malloc(sizeof(h));
    if(p!=NULL){
        p->hari = hari;
        p->tanggal = tanggal;
        p->bulan = bulan;
        p->jam = jam;
        p->tahun = tahun;
        p->nama = nama;
        p->id = id;
        p->jumlah = jumlah;
        p->next  = NULL;
    }
    return p;
}

bool IsEmpty(Stack S){
    return S.top == NULL;
}

void push(Stack *S,addresS p){
    p->next = (*S).top;
    (*S).top = p;
}

void pop(Stack *S,char hari[100],char bulan[100],char tanggal[100],char jam[100],char tahun[100],char nama[100],int *id,float *jumlah){
    addresS p;
    p = (*S).top;
    strcpy(hari,p->hari);
    strcpy(tanggal,p->tanggal);
    strcpy(bulan,p->bulan);
    strcpy(jam,p->jam);
    strcpy(tahun,p->tahun);
    strcpy(nama,p->nama);
    *id=p->id;
    *jumlah = p->jumlah;
    (*S).top = p->next;
    free(p);
}
