#include <stdio.h>
#include <string.h>
#include <windows.h>
#include "headerMultilist.h"
#include "headerProgram.h"

void createlist(listTab *L){
    (*L).firstTab = NULL;
}
bool isEmpty(listTab L){
    return L.firstTab == NULL;
}
adrDat alokasiDatabase(char* jenisBarang, float Banyak){
    adrDat p = (adrDat)malloc(sizeof(Data));
    if(p!=NULL){
        p->jenisBarang = jenisBarang;
        p->jumlah = Banyak; /// jumlah awal selalu nol;
        p->nextDat = NULL;
    }
    return p;
}

adrTab alokasiTabungan(char* tabungan){
    adrTab p =(adrTab)malloc(sizeof(tbngn));
    if(p!=NULL){
        p->jenisTabungan = tabungan;
        p->firstDat = NULL;
        p->firstNsbh = NULL;
        p->nextTab = NULL;
    }
}


adrNsbh alokasiNasabah(char* namaNasabah,int idNasabah, char* jenisKelamin,char* noHp,char* kecamatan, float saldo){
    adrNsbh p =(adrNsbh)malloc(sizeof(Nsbh));
    if(p!=NULL){
        p->namaNasabah = namaNasabah;
        p->idNasabah = idNasabah;
        p->jenisKelamin = jenisKelamin;
        p->noHp = noHp;
        p->kecamatan = kecamatan;
        p->saldo = saldo;
        p->nextNsbh = NULL;
    }
    return p;
}



void insertlastTab(listTab *L, adrTab p){
    adrTab q;
    q=(*L).firstTab;
    if(q==NULL){
        (*L).firstTab = p;
    }
    else{
    while(q->nextTab != NULL){
        q=q->nextTab;
    }
    q->nextTab = p;
    }
}


void insertlastDat(listTab *L, adrDat p, char *jenis){
    adrTab q;
    adrDat r;
    q = (*L).firstTab;
    while(q!=NULL){ ///mencari list yang sesuai;
    if(strcmp(q->jenisTabungan,jenis)==0){
        r = q->firstDat;
        if(r==NULL){
            r = p;
            r->nextDat =NULL;
            q->firstDat = r;
        }
        else{
            while(r->nextDat!=NULL){///traversal
                r=r->nextDat;
            }
            r->nextDat = p;
            p->nextDat = NULL;
    }
    break;
    }
    else{
    q=q->nextTab;
    }
    }

}

void insertlastNsbh(listTab *L, adrNsbh p){
    adrTab q;
    adrNsbh r;
    q = (*L).firstTab;
    r = q->firstNsbh;
    while(q!=NULL){ ///mengisi semua list
    if(r==NULL){
        r = p;
    }
    else{
        while(r->nextNsbh!=NULL){///traversal
            r=r->nextNsbh;
        }
        r->nextNsbh = p;
    }
    q=q->nextTab;
    }
}

void insertlastBiasa(listTab *L, char jenis[100], adrNsbh p){
    adrTab q;
    adrNsbh r;
    q = (*L).firstTab;
    while(q!=NULL){ ///mencari list yang sesuai;
    if(strcmp(q->jenisTabungan,jenis)==0){
        r = q->firstNsbh;
        if(r==NULL){
            r = p;
            r->nextNsbh =NULL;
            q->firstNsbh = r;
        }
        else{
            while(r->nextNsbh!=NULL){///traversal
                r=r->nextNsbh;
            }
            r->nextNsbh = p;
            p->nextNsbh = NULL;
    }
        break;
    }
    else{
    q=q->nextTab;
    }
    }
}

void insertlast(listTab *L,float saldoy, char jenistab[100],int idcari){
    /// prosedur untuk memasukkan list ke file sekuensial

   char nama[100][100], JK[100][100], nohp[100][100], keca[100][100]; ///buat dimasukin ke txt
    char namax[100], JKx[100], nohpx[100], kecax[100];
    char pilih,pilih1;
    int i,idx,n;
    float saldo, saldox, saldoxy;
    adrNsbh tampung[100],tampung1[100];
    adrTab q;
    adrNsbh p;
           listTab L1;
           makeListTab(&L1);

   if(strcmp(jenistab,"plastik")==0){
        FILE *in=fopen("nasabahplastik.txt","r"); ///ngisi di txt yang total
        i=1;
        if(in){
        while(!feof(in)){
            fscanf(in,"%s %d %s %s %s %f\n",&namax, &idx, &JKx, &nohpx, &kecax, &saldox);
            if(idcari == idx){
            saldoxy = saldox+saldoy;
            }
            else{
                saldoxy = saldox;
            }
            strcpy(nama[i],namax);
            strcpy(JK[i],JKx);
            strcpy(nohp[i],nohpx);
            strcpy(keca[i],kecax);
            tampung[i] = alokasiNasabah(nama[i],idx,JK[i],nohp[i],keca[i],saldoxy);
            i=i+1;
        }

            n = i -1;
           i =1;
           while(i<=n){
                insertlastBiasa(&L1,jenistab,tampung[i]);
                i++;
           }

        fclose(in);
        }

        FILE *in1=fopen("nasabahplastik.txt","w");
            q=(L1).firstTab;
            while(q!=NULL){
                if(strcmp(q->jenisTabungan,"plastik")==0){ ///cari jenistab
                    p= q->firstNsbh;
                    break;
                }
                else{
                q=q->nextTab;
                }
            }
            while(p!=NULL){
                fprintf(in1,"%s %d %s %s %s %.2f\n",p->namaNasabah,p->idNasabah,p->jenisKelamin,p->noHp,p->kecamatan,p->saldo);
                p = p->nextNsbh;
            }
            fclose(in1);
        }

    else if(strcmp(jenistab,"kertas")==0){
        FILE *in=fopen("nasabahkertas.txt","r"); ///ngisi di txt yang total
        i=1;
        if(in){
        while(!feof(in)){
            fscanf(in,"%s %d %s %s %s %f\n",&namax, &idx, &JKx, &nohpx, &kecax, &saldox);
            if(idcari == idx){
            saldoxy = saldox+saldoy;
            }
            else{
                saldoxy = saldox;
            }
            strcpy(nama[i],namax);
            strcpy(JK[i],JKx);
            strcpy(nohp[i],nohpx);
            strcpy(keca[i],kecax);
            tampung[i] = alokasiNasabah(nama[i],idx,JK[i],nohp[i],keca[i],saldoxy);
            i=i+1;
        }

            n = i -1;
           i =1;
           while(i<=n){
                insertlastBiasa(&L1,jenistab,tampung[i]);
                i++;
           }

        fclose(in);
        }

        FILE *in1=fopen("nasabahkertas.txt","w");
            q=(L1).firstTab;
            while(q!=NULL){
                if(strcmp(q->jenisTabungan,"kertas")==0){ ///cari jenistab
                    p= q->firstNsbh;
                    break;
                }
                else{
                q=q->nextTab;
                }
            }
            while(p!=NULL){
                fprintf(in1,"%s %d %s %s %s %.2f\n",p->namaNasabah,p->idNasabah,p->jenisKelamin,p->noHp,p->kecamatan,p->saldo);
                p = p->nextNsbh;
            }
            fclose(in1);
    }

     else{
            FILE *in=fopen("nasabahkaca.txt","r"); ///ngisi di txt yang total
        i=1;
        if(in){
        while(!feof(in)){
            fscanf(in,"%s %d %s %s %s %f\n",&namax, &idx, &JKx, &nohpx, &kecax, &saldox);
            if(idcari == idx){
            saldoxy = saldox+saldoy;
            }
            else{
                saldoxy = saldox;
            }
            strcpy(nama[i],namax);
            strcpy(JK[i],JKx);
            strcpy(nohp[i],nohpx);
            strcpy(keca[i],kecax);
            tampung[i] = alokasiNasabah(nama[i],idx,JK[i],nohp[i],keca[i],saldoxy);
            i=i+1;
        }

            n = i -1;
           i =1;
           while(i<=n){
                insertlastBiasa(&L1,jenistab,tampung[i]);
                i++;
           }

        fclose(in);
        }

        FILE *in1=fopen("nasabahkaca.txt","w");
            q=(L1).firstTab;
            while(q!=NULL){
                if(strcmp(q->jenisTabungan,"kaca")==0){ ///cari jenistab
                    p= q->firstNsbh;
                    break;
                }
                else{
                q=q->nextTab;
                }
            }
            while(p!=NULL){
                fprintf(in1,"%s %d %s %s %s %.2f\n",p->namaNasabah,p->idNasabah,p->jenisKelamin,p->noHp,p->kecamatan,p->saldo);
                p = p->nextNsbh;
            }
            fclose(in1);
    }

}



void makeListTab(listTab *L){
    createlist(L);
    char *jenisTab;
    adrTab plastik,kertas,kaca,total;
    jenisTab = "plastik";
    plastik = alokasiTabungan(jenisTab);
    jenisTab = "kertas";
    kertas = alokasiTabungan(jenisTab);
    jenisTab = "kaca";
    kaca = alokasiTabungan(jenisTab);
    jenisTab = "total";
    total = alokasiTabungan(jenisTab);

    insertlastTab(L,plastik);
    insertlastTab(L,kertas);
    insertlastTab(L,kaca);
    insertlastTab(L,total);
}

void gotoxy(int x, int y)
{
HANDLE hConsoleOutput;
COORD dwCursorPosition;
dwCursorPosition.X = x;
dwCursorPosition.Y = y;
hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}




