#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#ifndef HEADERSTACK_H_INCLUDED
#define HEADERSTACK_H_INCLUDED

typedef struct tElmtHis *addresS;

typedef struct tElmtHis {
    char *hari;
    char *tanggal;
    char *bulan;
    char *jam;
    char *tahun;
    char *nama;
    int id;
    float jumlah;
    addresS next;
}h;

typedef struct {
    addresS top;
} Stack;

// HEADER PROSEDUR DAN FUNGSI
void createEmpty(Stack *S); //create stack kosong
addresS alokasi(char hari[100],char bulan[100],char tanggal[100],char jam[100],char tahun[100],char nama[100],int id,float jumlah);
void dealokasi(addresS p);
bool IsEmpty(Stack S);
void push(Stack *S,addresS p);
void pop(Stack *S, char *hari,char *bulan,char *tanggal,char *jam,char *tahun,char *nama,int *id,float *jumlah);

#endif // HEADERSTACK_H_INCLUDED
