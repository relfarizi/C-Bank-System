#include <stdio.h>
#include <stdlib.h>
#include "headerMultilist.h"

#ifndef HEADERPROGRAM_H_INCLUDED
#define HEADERPROGRAM_H_INCLUDED

void menuAdmin();
void loginAdmin();
void menuAwal();
void menuNasabah();
void menuNasabahBaru();
void menuNasabahLama(int id);
void LoginNasabah ();
void tambahNasabah();
void updatelistdata(float saldoy, char x[100]);
void alamatk(char keca[100]);
void histori(int idx);
void saldo(int idx);
void dataNasabah();
void cariNasabah();
void hapusNasabah();
void setoranNasabah();
void dataSetoranSampah();
float setoranPlastik();
float setoranKertas();
float setoranKaca();
void tambahSaldoPlastik(listTab L, char jenistab[100]);
void tambahSaldoKertas(listTab L,char jenistab[100]);
void tambahSaldoKaca(listTab L,char jenistab[100]);
void penarikanNasabah(int id);
void resetdata();
void ListHarga();
void historiTbngn( char jenis[100], char nama[100],int id, float jumlah);
void historiTbngn2();
void haric(char *hari);
void jenisKelamin(char* jenis);
void deleteNsbh();


#endif // HEADERPROGRAM_H_INCLUDED
