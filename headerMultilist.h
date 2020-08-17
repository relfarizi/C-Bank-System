#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Database *adrDat;
typedef struct tabungan *adrTab;
typedef struct Nasabah *adrNsbh;

typedef struct Database {
    float jumlah;
    char* jenisBarang;
    adrDat nextDat;
}Data ;

typedef struct tabungan {
    char* jenisTabungan;
    adrDat firstDat;
    adrTab nextTab;
    adrNsbh firstNsbh;

}tbngn;

typedef struct Nasabah{
    char* namaNasabah;
    int idNasabah;
    char* jenisKelamin;
    char * noHp;
    char* kecamatan;
    float saldo;
    adrNsbh nextNsbh;

} Nsbh;

typedef struct {
    adrTab firstTab;
}listTab;
void createlist(listTab *L);
bool isEmpty(listTab L);
adrDat alokasiDatabase(char* jenisBarang, float Banyak);
void insertfirstDat(listTab *L, adrDat p);
adrTab alokasTabungan(char* tabungan);
adrNsbh alokasiNasabah(char* namaNasabah,int idNasabah, char* jenisKelamin,char* noHp,char* kecamatan, float saldo);
void tambahNasabah(listTab *L, adrNsbh a, int idNasabah);
void tambahDatabase(listTab *L);
void tambahTabungan(listTab *L, adrTab a, char* jenisTabungan );
void cetaklist(listTab L);
int hitung(listTab L, int nip);
void insertlastTab(listTab *L, adrTab p);
void insertlastDat(listTab *L, adrDat p, char *jenis);
void insertlastNsbh(listTab *L, adrNsbh p);
void insertlastBiasa(listTab *L, char jenis[100], adrNsbh p);
void makeListTab(listTab *L);
void penarikan(int x, int y);
void insertlast(listTab *L,float saldoy, char jenistab[100],int idcar);
void gotoxy(int x, int y);

#endif // HEADER_H_INCLUDED
