#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "headerProgram.h"
#include "bodyMultilist.c"
#include "bodyStack.c"
#include <time.h>
#include <conio.h>
#include <windows.h>

void menuAwal(){
    bool ulang ;
    char kar,pilih1;
    int i,j;
    do{
        system("color 3A ");
        system("cls");
        printf("[Laman Awal]\n"); ///posisi
        ulang = false;
        gotoxy(35,2);printf("=====================\n");
        gotoxy(35,3);printf("|PROGRAM BANK SAMPAH|\n");
        gotoxy(35,4);printf("=====================\n");
        gotoxy(35,5);printf("=====================\n");
        gotoxy(35,6);printf("|   login sebagai   |\n");
        gotoxy(35,7);printf("=====================\n");
        gotoxy(35,8);printf("|1|  Admin          |");
        gotoxy(35,9);printf("|2|  Nasabah        |");
        gotoxy(35,10);printf("|3|  keluar         |");
        gotoxy(35,11);printf("=====================\n");
        gotoxy(54,6);kar = getch();
            if(kar == '1'){
                loginAdmin();
            }
            else if(kar == '2'){
                menuNasabah();
            }
            else if(kar == '3'){
                gotoxy(25,14);printf("apakah anda yakin ingin keluar ? <y/n> ");
                keluar : /// buat goto
                gotoxy(65,14);pilih1 = getch();
                if(pilih1=='y'){
                    system("cls");
                    gotoxy(25,5);char a[] =(" - - - - - H A T U R   N U H U N  :) - - - - - .");

                    for(i=0;a[i]!='.';i++){
                        printf("%c", a[i]);
                        for (j=0;j<=10000000;j++){
                        }
                    }
                    getch();
                    system("cls");
                    exit(0);
                }
                else if(pilih1 == 'n'){
                    menuAwal();
                }
                else{
                    goto keluar;
                }
                menuAwal();
            }


            else{
                ulang = true ; /// agar mengulang ketika salah
            }
        }
    while(ulang);
}

void loginAdmin(){
    system("cls");
    char nama[100];
    char pass[100];
    bool ulang;
    int cek =0;
    char kar, pilih1;


    do{ /// menghindari inputan asal
        if(cek>=3){// cek setelah 3 kali gagal login
    gotoxy(35,4);printf("===========================");
    gotoxy(35,5);printf("| anda telah gagal 3 kali |");
    gotoxy(35,6);printf("===========================");
    gotoxy(35,8);system("pause");
    system("cls");
    ulang = false;
    menuAwal();
    }
    else{
        printf("[Laman Awal |> Login Admin]\n"); ///posisi
        ulang = false;
        gotoxy(35,2); printf("===========================");
        gotoxy(35,3); printf("|       Login Admin       |");
        gotoxy(35,4); printf("===========================");
        gotoxy(35,5);printf("Username : ");
        gotoxy(35,6);printf("Password : ");
        gotoxy(35,7);printf("===========================");
        gotoxy(46,5);gets(nama);
        gotoxy(46,6);gets(pass);
        system("cls");

    if(strcmp(nama,"1")==0){
        if(strcmp(pass,"1")==0){
            menuAdmin();
        }
        else{
            gotoxy(35,4);printf("=========================");
            gotoxy(35,5);printf("|    password salah !   |"); /// username benar pass salah
            gotoxy(35,6);printf("=========================");
            gotoxy(35,8); printf("Coba lagi ? <y/n>");
            a :
            gotoxy(61,8);pilih1=getch();
            if(pilih1 == 'y'){
                system("cls");
                cek = cek+1;
                ulang = true;
            }
            else if (pilih1 == 'n'){
                menuAwal();
            }
            else {
                goto a;
            }
        }
    }

    else{
        gotoxy(35,4);printf("=========================");
        gotoxy(35,5);printf("|    username salah !   |");
        gotoxy(35,6);printf("=========================");
        gotoxy(35,8);printf("Coba Lagi ? <y/n>");
        b :
            gotoxy(61,8);pilih1=getch();
            if(pilih1 == 'y'){
                system("cls");
                cek = cek+1;
                ulang = true; /// kondisi mengulang
            }
            else if (pilih1 == 'n'){
                menuAwal();
            }
            else {
                goto a;
            }

    }
    }

    }
    while(ulang); /// ulang ketika salah

}

void menuNasabah(){
    char kar,pilih1;
    bool ulang;
    do{
        system("cls");
        ulang = false;
        printf("[Laman Awal |> Menu Nasabah]\n\n");
        gotoxy(35,3);printf("=====================");
        gotoxy(35,4);printf("|   Menu Nasabah    |");
        gotoxy(35,5);printf("=====================");
        gotoxy(35,6);printf("|1| Nasabah Baru    |");
        gotoxy(35,7);printf("|2| Nasabah Lama    |");
        gotoxy(35,8);printf("|3| List Harga      |");
        gotoxy(35,9);printf("|4| Keluar          |");
        gotoxy(35,10);printf("=====================");
        gotoxy(54,4);kar = getch();
        if(kar=='1'){
            menuNasabahBaru();
        }
        else if(kar=='2'){
            LoginNasabah();
        }
        else if(kar=='3'){
            ListHarga();
        }
        else if(kar=='4'){
            gotoxy(25,14);printf("apakah anda yakin ingin keluar ? <y/n> ");
            keluar : /// buat goto
            gotoxy(65,14);pilih1 = getch();
            if(pilih1=='y'){
                menuAwal();
            }
            else if(pilih1 == 'n'){
                menuNasabah();
            }
            else{
                goto keluar;
            }
            menuAwal();
        }
        else{
            ulang = true;

        }
    } while(ulang);
}

void alamatk(char keca[100]){

 int kec;
    char x,asal;
    char* kecamatan;
    bool ulang;
     xy:
    system("cls");
    printf("Penggunaan huruf menggunakan huruf kapital A-V\n\n");
    printf("(1)Arjasari\t(2)Banjaran\t(3)Baleendah\t(4)Bojongsoang\t(5)Cangkuang\t\t(6)Cicalengka\n\n");
    printf("(7)Cikancung\t(8)Cilengkrang\t(9)Cileunyi\t(A)Cimaung\t(B)Cimenyan\t\t(C)Ciparay\n\n");
    printf("(D)Ciwidey\t(E)Dayeuhkolot\t(F)Ibun\t\t(G)Katapang\t(H)Kertasari\t\t(I)Kutawaringin\n\n");
    printf("(J)Majalaya\t(K)Margaasih\t(L)Margahayu\t(M)Nagreg\t(N)Pacet\t\t(O)Pameungpeuk\n\n");
    printf("(P)Pangalengan\t(P)Paseh\t(Q)Pasirjambu\t(R)Rancabali\t(S)Solokan Jeruk\t(T)Rancaekek\n\n");
    printf("(V)Soreang\n\n");
    printf("Masukkan nomor Kecamatan : ");
    x = getch();
    switch(x){
        case '1' : kecamatan = "Arjasari";break;
        case '2' : kecamatan = "Banjaran";break;
        case '3' : kecamatan = "Baleendah";break;
        case '4' : kecamatan = "Bojongsoang";break;
        case '5' : kecamatan = "Cangkuang";break;
        case '6' : kecamatan = "Cicalengka";break;
        case '7' : kecamatan = "Cikancung";break;
        case '8' : kecamatan = "Cilengkrang";break;
        case '9' : kecamatan = "Cileunyi";break;
        case 'A': kecamatan = "Cimaung";break;
        case 'B': kecamatan = "Cimenyan";break;
        case 'C': kecamatan = "Ciparay";break;
        case 'D': kecamatan = "Ciwidey";break;
        case 'E': kecamatan = "Dayeuhkolot";break;
        case 'F': kecamatan = "Ibun";break;
        case 'G': kecamatan = "Katapang";break;
        case 'H': kecamatan = "Kertasari";break;
        case 'I': kecamatan = "Kutawaringin";break;
        case 'J': kecamatan = "Majalaya";break;
        case 'K': kecamatan = "Margaasih";break;
        case 'L': kecamatan = "Margahayu";break;
        case 'M': kecamatan = "Nagreg";break;
        case 'N': kecamatan = "Pacet";break;
        case 'O': kecamatan = "Pameungpeuk";break;
        case 'P': kecamatan = "Pangalengan";break;
        case 'Q': kecamatan = "Paseh";break;
        case 'R': kecamatan = "Pasirjambu";break;
        case 'S': kecamatan = "Rancabali";break;
        case 'T': kecamatan = "SolokanJeruk";break;
        case 'U': kecamatan = "Rancaekek";break;
        case 'V': kecamatan = "Soreang";break;
        default : goto xy;break;
    }
    strcpy(keca,kecamatan);
}

void menuNasabahBaru(){///aman
    srand(time(NULL));
    char nama[100], JK[100], nohp[100], keca[100];
    char pilih,pilih1;
    int x,id;
    float saldo;
    bool ulang;
    system("cls");
    do{

        printf("[Laman Awal |> Menu Nasabah |> Menu Nasabah Baru]\n\n");
        ulang=false;
        gotoxy(35,4);printf("Nama (tanpa spasi)  : ");
        gotoxy(35,5);printf("Jenis Kelamin <l/p> : ");
        gotoxy(35,6);printf("No HP               : ");
        gotoxy(58,4);scanf("%s", &nama);

        /// input data
        x: /// untuk kondisi pengulangan
        gotoxy(58,5);scanf("%s", &JK);
        if(strcmp(JK,"l") != 0 && strcmp(JK,"p") != 0){
            goto x;
        }
        gotoxy(58,6);scanf("%s", &nohp);
        gotoxy(35,7);printf(" alamat : ");
        alamatk(keca);

        system("cls");
        printf("[Laman Awal |> Menu Nasabah |> Menu Nasabah Baru]\n\n");
        gotoxy(35,4);printf("Nama          = %s\n", nama);
        gotoxy(35,5);printf("Jenis Kelamin = %s\n", JK);
        gotoxy(35,6);printf("No HP         = %s\n", nohp);
        gotoxy(35,7);printf("Kecamatan     = %s\n", keca);
        gotoxy(35,9);printf("apakah anda yakin dengan data yang anda isi ?  <y/n> ");

        xy: /// untuk pengulangan ketika input yes no salah
        pilih = getch();

        if(pilih=='y'){
            system("cls");
            printf("[Laman Awal |> Menu Nasabah |> Menu Nasabah Baru]\n\n");
            gotoxy(35,3);printf("===========================================");
            gotoxy(35,4);printf("| selamat anda telah melakukan registrasi |");
            gotoxy(35,5);printf("===========================================");

            gotoxy(35,6);printf("Nama = %s\n", nama);
            id = rand()%1000000+13000000; /// biar konsisten
            gotoxy(35,7);printf("ID = %d", id);
            gotoxy(35,8);printf("Jenis Kelamin = ");jenisKelamin(JK);
            gotoxy(35,9);printf("No HP = %s", nohp);
            gotoxy(35,10);printf("Kecamatan = %s", keca);


            FILE *in = fopen("nasabah.txt", "a");
            fprintf(in,"%s %d %s %s %s %.2f\n",nama,id,JK,nohp,keca,saldo);
            fclose(in);

            FILE *in1 = fopen("nasabahplastik.txt", "a");
            fprintf(in1,"%s %d %s %s %s %.2f\n",nama,id,JK,nohp,keca,saldo);
            fclose(in1);

            FILE *in2 = fopen("nasabahkertas.txt", "a");
            fprintf(in2,"%s %d %s %s %s %.2f\n",nama,id,JK,nohp,keca,saldo);
            fclose(in2);

            FILE *in3 = fopen("nasabahkaca.txt", "a");
            fprintf(in3,"%s %d %s %s %s %.2f\n",nama,id,JK,nohp,keca,saldo);
            fclose(in3);
        }
        else if(pilih=='n'){
            system("cls");
            gotoxy(35,4); printf("ingin isi kembali ? <y/n>");
            a :
            gotoxy(61,4);pilih1=getch();
            if(pilih1 == 'y'){
                system("cls");
                ulang = true;
            }
            else if (pilih1 == 'n'){
                menuNasabah();
            }
            else {
                goto a;
            }
        }
        else{
            goto xy;
        }
    }while(ulang);

     gotoxy(35,12);system("pause");
    menuAwal();
}

void tambahSaldoPlastik(listTab L, char jenistab[100]){
    /// prosedur nambah ke list data sampah
    adrTab q;
    adrNsbh p;
        FILE *in1=fopen("nasabahplastik.txt","w"); ///ngisi di txt yang total
            q=L.firstTab;
            while(q->nextTab !=NULL){
                if(strcmp(jenistab,"plastik")==0){ ///cari jenistab
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
void tambahSaldoKertas(listTab L,char jenistab[100]){
    /// prosedur nambah ke list data sampah
    adrTab q;
    adrNsbh p;
        FILE *in1=fopen("nasabahkertastxt","w"); ///ngisi di txt yang total
            q=L.firstTab;
            while(q->nextTab !=NULL){
                if(strcmp(jenistab,"kertas")==0){ ///cari jenistab
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
void tambahSaldoKaca(listTab L,char jenistab[100]){
    adrTab q;
    adrNsbh p;
    /// prosedur nambah ke list data sampah
        FILE *in1=fopen("nasabahkaca.txt","w"); ///ngisi di txt yang total
            q=L.firstTab;
            while(q->nextTab !=NULL){
                if(strcmp(jenistab,"kaca")==0){ ///cari jenistab
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

void setoranNasabah(){
    char nama[100][100], JK[100][100], nohp[100][100], keca[100][100]; ///buat dimasukin ke txt
    char namax[100], JKx[100], nohpx[100], kecax[100], jenistab[100];
    char pilih,pilih1;
    int i,id,idx,n,cek=0;
    float saldo, saldox,saldoy;
    adrNsbh tampung[100],tampung1[100], p;
    adrTab q;
    listTab L, L1;
    makeListTab(&L); /// list udah di cek ada
    makeListTab(&L1);

    /// prosedur nambah ke list data sampah
    system("cls");
    printf("[Laman Awal |> Admin |> Setoran Nasabah ]\n\n");
    gotoxy(35,3);printf("======================");
    gotoxy(35,4);printf("ID : ");
    gotoxy(35,5);printf("======================");
    gotoxy(40,4);scanf("%d",&id);
    /// cek id
    FILE *ada = fopen("nasabah.txt","r");
   while(!feof(ada)){
        fscanf(ada,"%s %d %s %s %s %f\n",&namax, &idx, &JKx, &nohpx, &kecax, &saldox);
        if(id==idx){
            cek =1;
        }
   }
   fclose(ada);

    if(cek == 0){
        char a;
        gotoxy(35,7);printf("error : ID tidak tersedia ");
        keluar:
        gotoxy(35,9);printf("keluar ? <y/n> ");
        a = getch();
        if(a=='y'){
            menuAdmin();
        }
        else if(a=='n'){
            setoranNasabah();
        }
        else{
            system("cls");
            printf("[Laman Awal |> Admin |> Setoran Nasabah ]\n\n");
            printf("ID : %d\n", id);
            printf("\nerror : ID tidak tersedia \n\n");
            goto keluar;
        }
   }

    gotoxy(35,3);printf("======================");
    gotoxy(35,4);printf("|   Jenis Setoran    |");
    gotoxy(35,5);printf("======================");
    gotoxy(35,6);printf("|1| Plastik          |");
    gotoxy(35,7);printf("|2| Kertas           |");
    gotoxy(35,8);printf("|3| Kaca             |");
    gotoxy(35,9);printf("|4| Keluar           |");
    gotoxy(35,10);printf("======================");
    gotoxy(53,4);pilih = getch(); /// untuk memilih prosedur input data sampah ke list

    switch(pilih){
        case '1' : saldo = setoranPlastik();strcpy(jenistab,"plastik");break;
        case '2' : saldo = setoranKertas();strcpy(jenistab,"kertas");break;
        case '3' : saldo = setoranKaca();strcpy(jenistab,"kaca");break;
        case '4' : menuNasabahLama(id);
        default : setoranNasabah();
    }
     /// update di list data admin
    updatelistdata(saldo,"masuk"); /// masuk = pemasukan bertambah ke data admin

   FILE *out = fopen("nasabah.txt","r");
   i=1;
   while(!feof(out)){
        fscanf(out,"%s %d %s %s %s %f\n",&namax, &idx, &JKx, &nohpx, &kecax, &saldox);
        if(id==idx){
            saldox =saldox+saldo;
            saldoy = saldo;
            gotoxy(20,15);printf("========================================================================================");
            gotoxy(20,16);printf("                saldo berhasil ditambah sebesar = Rp.%.2f", saldo);
            gotoxy(20,17);printf("                saldo sekarang = Rp.%.2f\n", saldox);
            gotoxy(20,18);printf("========================================================================================");
            /// buat history admin
            historiTbngn("in",namax,id,saldo);
        }
        else{
            saldoy = 0; /// selain nasabah yg dimaksud tidak ditambahkan saldo ke sublist
        }
        strcpy(nama[i],namax);
        strcpy(JK[i],JKx);
        strcpy(nohp[i],nohpx);
        strcpy(keca[i],kecax);
        tampung[i] = alokasiNasabah(nama[i],idx,JK[i],nohp[i],keca[i],saldoy); /// buat masuk ke sublist
        tampung1[i] = alokasiNasabah(nama[i],idx,JK[i],nohp[i],keca[i],saldox); ///buat masuk ke total
        i=i+1;

   }


   n = i -1; /// di kurang 1 karena i nya melampui batas (+1)
   i =1;
   while(i<=n){
        insertlastBiasa(&L,jenistab,tampung[i]); /// ditambah ke list data sampah "jenistab"
        insertlastBiasa(&L,"total",tampung1[i]); /// ditambah ke list total
        i++;
   }
   insertlast(&L,saldo,jenistab,id); /// memanggil prosedur untuk memasukkan list ke file sekuensial

	fclose(out);
    /// masukin ke notepad lagi

    FILE *in=fopen("nasabah.txt","w"); ///ngisi di txt yang total
    q=L.firstTab;
    while(q !=NULL){ //traversal sampe ke terakhir, karena list total ada di terakhir
            if(strcmp(q->jenisTabungan,"total")==0){
                p=q->firstNsbh;
                break;
            }
            else{
                q=q->nextTab;
            }
    }

    while(p!=NULL){
        fprintf(in,"%s %d %s %s %s %.2f\n",p->namaNasabah,p->idNasabah,p->jenisKelamin,p->noHp,p->kecamatan,p->saldo);
        p = p->nextNsbh;
    }
    fclose(in);

    printf("\n\n");system("pause");
    e:
    system("cls");
    printf("[Laman Awal |> Admin |> Setoran Nasabah ]\n\n");
    gotoxy(35,4);printf("==========================================");
    gotoxy(35,5);printf("ingin melakukan transaksi kembali ? <y/n> ");
    gotoxy(35,6);printf("==========================================");
    char a;
    gotoxy(76,5);a = getch();
    if(a=='y'){
        setoranNasabah();
    }
    else if(a=='n'){
        menuAdmin();
    }
    else{
        goto e;
    }


}

float setoranPlastik(){
    float botol,cup,karpet,kemasan;
    float barang[100], barangx;
    int i ,n =4; /// jumlah barang
    char jenisbarang[100][100];
    char jenisbarangx[100];
    listTab L;
    makeListTab(&L);

    y:
    system("cls");
    printf("[Laman Awal |> Admin |> Setoran Nasabah |> Setoran Sampah Plastik]\n\n");

    gotoxy(35,4);printf("==============");
    gotoxy(35,5);printf("|  dalam Kg  |");
    gotoxy(35,6);printf("==============");
    gotoxy(35,7);printf("1.botol   : ");
    gotoxy(35,8);printf("2.cup     : ");
    gotoxy(35,9);printf("3.karpet  : ");
    gotoxy(35,10);printf("4.kemasan : ");
    gotoxy(35,11);printf("==============");
    gotoxy(46,7);scanf("%f",&botol);
    gotoxy(46,8);scanf("%f", &cup);
    gotoxy(46,9);scanf("%f", &karpet);
    gotoxy(46,10);scanf("%f", &kemasan);

    if(botol<0 || cup<0 || karpet<0 || kemasan<0){
        goto y;
    }
    /// mulai update data
    FILE *in = fopen("dataplastik.txt","r");
    i = 1;
    while(!feof(in)){
        fscanf(in,"%s %f\n",&jenisbarangx,&barangx);
        strcpy(jenisbarang[i],jenisbarangx);
        barang[i] = barangx;
        i=i+1;
    }

    fclose(in);
    /// sudah ditentukan, harus sama urutan dengan pemanggilan prosedur lainnya
    barang[1] = barang[1] +botol;
    barang[2] = barang[2] +cup;
    barang[3] = barang[3] +karpet;
    barang[4] = barang[4] +kemasan;

    adrDat tampung[100];
    i=1;
    while(i<=n){
        tampung[i] = alokasiDatabase(jenisbarang[i],barang[i]);
        i=i+1;
    }

    i=1;
    while(i<=n){
        insertlastDat(&L,tampung[i],"plastik");
        i= i+1;
    }

    /// masukin ke notepad
    adrTab p;
    adrDat q;
    p=L.firstTab;
    while(p!=NULL){
        if(strcmp(p->jenisTabungan,"plastik")==0){
            q =p->firstDat;
            break;
        }
        p = p->nextTab;
    }
    FILE *out = fopen("dataplastik.txt","w");
        while(q!=NULL){
            fprintf(out,"%s %.2f\n",q->jenisBarang, q->jumlah);
            q =q->nextDat;
        }
        fclose(out);

    /// akumulasi tabungan dari sampah yang dikumpulkan
    botol = botol*2200;
    cup = cup*3500;
    karpet =karpet*800;
    kemasan = kemasan*100;

    return botol +cup+karpet+kemasan;
}

float setoranKertas(){
    float koran, HVS, buram,buku,majalah,kardus,kemasan_semen;
    float barang[100], barangx;
    int i ,n =7; /// jumlah barang
    char jenisbarang[100][100];
    char jenisbarangx[100];
    listTab L;
    makeListTab(&L);
    y:
    system("cls");
    printf("[Laman Awal |> Admin |> Setoran Nasabah |> Setoran Sampah Kertas]\n\n");
    gotoxy(35,4);printf("=================");
    gotoxy(35,5);printf("|   dalam Kg    |");
    gotoxy(35,6);printf("=================");
    gotoxy(35,7);printf("1.koran         : ");
    gotoxy(35,8);printf("2.HVS           : ");
    gotoxy(35,9);printf("3.buram         : ");
    gotoxy(35,10);printf("4.buku          : ");
    gotoxy(35,11);printf("5.majalah       : ");
    gotoxy(35,12);printf("6.kardus        : ");
    gotoxy(35,13);printf("7.kemasan semen : ");

    gotoxy(56,7);scanf("%f",&koran);
    gotoxy(56,8);scanf("%f", &HVS);
    gotoxy(56,9);scanf("%f", &buram);
    gotoxy(56,10);scanf("%f", &buku);
    gotoxy(56,11);scanf("%f",&majalah);
    gotoxy(56,12);scanf("%f", &kardus);
    gotoxy(56,13);scanf("%f", &kemasan_semen);

    if(koran<0 || HVS<0 || buram<0 || buku<0 || majalah <0 || kardus<0 || kemasan_semen <0){
        goto y;
    }
    /// mulai update data
    FILE *in = fopen("datakertas.txt","r");
    i = 1;
    while(!feof(in)){
        fscanf(in,"%s %f\n",&jenisbarangx,&barangx);
        strcpy(jenisbarang[i],jenisbarangx);
        barang[i] = barangx;
        i=i+1;
    }

    fclose(in);
    /// sudah ditentukan, harus sama urutan dengan pemanggilan prosedur lainnya

    barang[1] = barang[1] +koran;
    barang[2] = barang[2] +HVS;
    barang[3] = barang[3] +buram;
    barang[4] = barang[4] +buku;
    barang[5] = barang[5] +majalah;
    barang[6] = barang[6] +kardus;
    barang[7] = barang[7] +kemasan_semen;

    adrDat tampung[100];
    i=1;
    while(i<=n){
        tampung[i] = alokasiDatabase(jenisbarang[i],barang[i]);
        i=i+1;
    }

    i=1;
    while(i<=n){
        insertlastDat(&L,tampung[i],"kertas");
        i= i+1;
    }

    /// masukin ke notepad
    adrTab p;
    adrDat q;
    p=L.firstTab;
    while(p!=NULL){
        if(strcmp(p->jenisTabungan,"kertas")==0){
            q =p->firstDat;
            break;
        }
        p = p->nextTab;
    }

    FILE *out = fopen("datakertas.txt","w");
        while(q!=NULL){
            fprintf(out,"%s %.2f\n",q->jenisBarang, q->jumlah);
            q =q->nextDat;
        }
        fclose(out);
    /// akumulasi jumlah tabungan dari sampah yang dikumpulkan
    koran = koran*2500;
    HVS = HVS*2000;
    buram = buram*1500;
    buku = buku*1800;
    majalah = majalah*1200;
    kardus = kardus*2050;
    kemasan_semen = kemasan_semen*2700;

    return koran+HVS+buram+buku+majalah+kardus+kemasan_semen;
}

float setoranKaca(){
    float botol,pecahan,kaleng;
    float barang[100], barangx;
    int i ,n =3;
    char jenisbarang[100][100];
    char jenisbarangx[100];
    listTab L;
    makeListTab(&L);

    y :
    system("cls");
    printf("[Laman Awal |> Admin |> Setoran Nasabah |> Setoran Sampah Kaca dan Kaleng]\n\n");
    gotoxy(35,4);printf("============");
    gotoxy(35,5);printf("| dalam Kg |");
    gotoxy(35,6);printf("============");
    gotoxy(35,7);printf("botol     : ");
    gotoxy(35,8);printf("pecahan   : ");
    gotoxy(35,9);printf("kaleng    : ");
    gotoxy(47,7);scanf("%f",&botol);
    gotoxy(47,8);scanf("%f", &pecahan);
    gotoxy(47,9);scanf("%f", &kaleng);
    if(botol<0 || pecahan <0 || kaleng<0){ /// menghindari inputan negatif
        goto y;
    }
    FILE *in = fopen("datakaca.txt","r");
    i = 1;
    while(!feof(in)){
        fscanf(in,"%s %f\n",&jenisbarangx,&barangx);
        strcpy(jenisbarang[i],jenisbarangx);
        barang[i] = barangx;
        i=i+1;
    }

    fclose(in);
    /// sudah ditentukan, harus sama urutan dengan pemanggilan prosedur lainnya
    barang[1] = barang[1] +botol;
    barang[2] = barang[2] +pecahan;
    barang[3] = barang[3] +kaleng;

    adrDat tampung[100];
    i=1;
    while(i<=n){
        tampung[i] = alokasiDatabase(jenisbarang[i],barang[i]);
        i=i+1;
    }

    i=1;
    while(i<=n){
        insertlastDat(&L,tampung[i],"kaca");
        i= i+1;
    }

    /// masukin ke notepad
    adrTab p;
    adrDat q;
    p=L.firstTab;
    while(p!=NULL){
        if(strcmp(p->jenisTabungan,"kaca")==0){
            q =p->firstDat;
            break;
        }
        p = p->nextTab;
    }
    FILE *out = fopen("datakaca.txt","w");
        while(q!=NULL){
            fprintf(out,"%s %.2f\n",q->jenisBarang, q->jumlah);
            q =q->nextDat;
        }
        fclose(out);

    /// akumulasi
    botol =botol*3500;
    pecahan = pecahan*2200;
    kaleng = kaleng*1100;



    return botol +pecahan+kaleng;
}


void histori(int idx){

    int id;
    float saldo;
    char nama[100],nohp[100],keca[100];
    char JK[100];


    system("cls");
    printf("[Laman Awal |> Nasabah |> Nasabah Lama |> Histori]\n\n");
    FILE *in = fopen("nasabah.txt", "r");
    while(!feof(in)){
        fscanf(in,"%s %d %s %s %s %f\n",&nama,&id,&JK,&nohp,&keca,&saldo);
        if(idx == id){
                gotoxy(35,2);printf("nama = %s",nama);
                gotoxy(35,3);printf("id = %d ",id);
                gotoxy(35,4);printf("Jenis Kelamin = ");jenisKelamin(JK); /// mengubah l menjadi laki laki dan p menjadi perempuan
                gotoxy(35,5);printf("no HP : %s", nohp);
                gotoxy(35,6);printf("kecamatan : %s", keca);
            break;
        }
    }
    fclose(in);
        int b; /// buat gotoxy print ulang
        gotoxy(5,8);printf("======================");
        gotoxy(5,9);printf("|   sampah plastik   |");
        gotoxy(5,10);printf("======================");
        FILE *in1 = fopen("nasabahplastik.txt", "r");
        while(!feof(in1)){
        fscanf(in1,"%s %d %s %s %s %f\n",&nama,&id,&JK,&nohp,&keca,&saldo);
        if(idx == id){
            gotoxy(5,11);printf("Rp.%.2f",saldo);
            gotoxy(5,12);printf("======================");
            break;
        }
        }
        fclose(in1);


        gotoxy(35,8);printf("======================");
        gotoxy(35,9);printf("|    sampah kertas   |");
        gotoxy(35,10);printf("======================");
        FILE *in2 = fopen("nasabahkertas.txt", "r");
        while(!feof(in2)){
        fscanf(in2,"%s %d %s %s %s %f\n",&nama,&id,&JK,&nohp,&keca,&saldo);
        if(idx == id){
            gotoxy(35,11);printf("Rp.%.2f",saldo);
            gotoxy(35,12);printf("======================");
            break;
        }
        }
        fclose(in2);


        gotoxy(65,8);printf("======================");
        gotoxy(65,9);printf("|sampah kaca & kaleng|");
        gotoxy(65,10);printf("======================");
        FILE *in3 = fopen("nasabahkaca.txt", "r");
        while(!feof(in3)){
        fscanf(in3,"%s %d %s %s %s %f\n",&nama,&id,&JK,&nohp,&keca,&saldo);
        if(idx == id){
            gotoxy(65,11);printf("Rp.%.2f",saldo);
            gotoxy(65,12);printf("======================");
            break;
        }
        }
        fclose(in3);

   printf("\n\n");system("pause");
    menuNasabahLama(idx);
}



void saldo(int idx){
    system("color 75");
    int id;
    float saldo;
    char nama[100],nohp[100],keca[100];
    char JK[100];

    system("cls");
    printf("[Laman Awal |> Nasabah |> Nasabah Lama |> Saldo ]\n\n");
    FILE *in = fopen("nasabah.txt", "r");
    while(!feof(in)){
        fscanf(in,"%s %d %s %s %s %f\n",&nama,&id,&JK,&nohp,&keca,&saldo);
        if(idx == id){
            gotoxy(35,4);printf("==============================================");
            gotoxy(35,5);printf("Nama    = %s\n",nama);
            gotoxy(35,6);printf("ID      = %d \n",id);
            gotoxy(35,7);printf("Saldo   = Rp.%.2f\n",saldo);
            gotoxy(35,8);printf("==============================================");
            break;
        }
    }
    fclose(in);

    printf("\n\n");system("pause");
    menuNasabahLama(idx);
}

void penarikanNasabah(int id){
    char nama[100][100], JK[100][100], nohp[100][100], keca[100][100]; ///buat dimasukin ke txt
    char namax[100], JKx[100], nohpx[100], kecax[100], jenistab[100];
    char pilih,pilih1;
    int i,idx,n;
    float saldo, saldox,saldoy, saldoz;
    adrNsbh tampung[100],tampung1[100], p;
    adrTab q;
    listTab L, L1;
    makeListTab(&L); /// list udah di cek ada
    makeListTab(&L1);

    system("cls");
    printf("[Laman Awal |> Nasabah |> Nasabah Lama|> Penarikan Tabungan]\n\n");

    FILE *cek = fopen("nasabah.txt","r");
    while(!feof(cek)){
        fscanf(cek,"%s %d %s %s %s %f\n",&namax, &idx, &JKx, &nohpx, &kecax, &saldox);
        if(id==idx){
            saldoz = saldox; ///nampung saldo dari text
            break;
        }
    }
    fclose(cek);


        if(saldoz<5000){
            gotoxy(35,4);printf("=================================");
            gotoxy(35,5);printf("saldo anda = Rp.%.2f\n", saldoz);
            gotoxy(35,6);printf("Tidak mencukupi untuk penarikan");
            gotoxy(35,7);printf("=================================");
            gotoxy(35,9);system("pause");
            menuNasabahLama(idx);
        }
        else{
            bayar:
            system("cls");
            printf("[Laman Awal |> Nasabah |> Nasabah Lama|> Penarikan Tabungan]\n\n");
            printf("masukkan nominal : ");
            scanf("%f", &saldo);
            if(saldo>=saldoz){ ///menghindari input lebih dari batas minimial
                gotoxy(35,4);printf("=================================");
                gotoxy(35,5);printf("penarikan melebihi batas !");
                gotoxy(35,6);printf("Saldo anda = Rp.%.2f",saldoz);
                gotoxy(35,7);printf("=================================");
                gotoxy(35,9);system("pause");
                menuNasabahLama(idx);
            }
            else if(saldo<5000){ ///batas pengambilan
                gotoxy(35,4);printf("==============================================");
                gotoxy(35,5);printf("|  silahkan masukan nominal minimal Rp.5000  |");
                gotoxy(35,6);printf("==============================================");
                gotoxy(35,9);system("pause");
                goto bayar;
            }
            else{
                gotoxy(35,4);printf("==============================================");
                gotoxy(35,5);printf("Penarikan Berhasil");
                gotoxy(35,6);printf("Saldo yang diambil = Rp.%.2f", saldo);
                gotoxy(35,7);printf("Saldo Sekarang = Rp.%.2f", saldoz-saldo);
                gotoxy(35,8);printf("==============================================");
                /// update ke data admin
                updatelistdata(saldo,"keluar");
                historiTbngn("out",namax,id,saldo);
            }

    }


   FILE *out = fopen("nasabah.txt","r");
   i=1;
   while(!feof(out)){
        fscanf(out,"%s %d %s %s %s %f\n",&namax, &idx, &JKx, &nohpx, &kecax, &saldox);
        if(id==idx){
            saldox =saldox-saldo;
        }
        else{
            saldoy = 0;
        }
        strcpy(nama[i],namax);
        strcpy(JK[i],JKx);
        strcpy(nohp[i],nohpx);
        strcpy(keca[i],kecax);
        tampung1[i] = alokasiNasabah(nama[i],idx,JK[i],nohp[i],keca[i],saldox); ///buat masuk ke total
        i=i+1;

   }
   n = i -1;
   i =1;
   while(i<=n){
        insertlastBiasa(&L,"total",tampung1[i]);
        i++;
   }

	fclose(out);

    FILE *in=fopen("nasabah.txt","w"); ///ngisi di txt yang total
    q=L.firstTab;
    while(q !=NULL){ //traversal sampe ke terakhir, karena list total ada di terakhir
            if(strcmp(q->jenisTabungan,"total")==0){
                p=q->firstNsbh;
                break;
            }
            else{
                q=q->nextTab;
            }
    }

    while(p!=NULL){
        fprintf(in,"%s %d %s %s %s %.2f\n",p->namaNasabah,p->idNasabah,p->jenisKelamin,p->noHp,p->kecamatan,p->saldo);
        p = p->nextNsbh;
    }
    fclose(in);
    gotoxy(35,10);system("pause");
    menuNasabahLama(idx);
}

void LoginNasabah (){
    system("color 74");
    char pilih,pilih1,pilih2;
    char nama[100];
    int idx,id,cek;
    float saldox;
    char nohp[100],keca[100];
    char JK[100];

    system("cls");
    printf("[Laman Awal |> Nasabah |> Login Nasabah]\n\n");
    gotoxy(35,3);printf("======================");
    gotoxy(35,4);printf("ID : ");
    gotoxy(35,5);printf("======================");
    gotoxy(40,4);scanf("%d",&idx);
    cek =0;
    FILE *in = fopen("nasabah.txt","r"); /// cari id
    while(!feof(in)){
        fscanf(in,"%s %d %s %s %s %f\n",&nama,&id,&JK,&nohp,&keca,&saldox);
        if(id==idx){
            cek = 1;
        }
    }

    if(cek == 0){
        gotoxy(35,7);printf("======================");
        gotoxy(35,8);printf("| ID tidak ditemukan |");
        gotoxy(35,9);printf("======================");
        gotoxy(35,11);printf("masukkan kembali ? <y/n> ");
        x:
        gotoxy(60,11);pilih2 = getch();
        if(pilih2=='y'){
            LoginNasabah();
        }
        else if(pilih2 == 'n'){
            menuNasabah();
        }
        else {
                goto x;
        }
    }
    else{
        menuNasabahLama(idx);
    }
}
void menuNasabahLama(int id){
    system("color 74");
    char pilih,pilih1,pilih2;
    char nama[100];
    int idx,cek;
    float saldox;
    char nohp[100],keca[100];
    char JK[100];

    xy:
        system("cls");
        printf("[Laman Awal |> Nasabah |> Nasabah Lama]\n\n");
        gotoxy(35,3);printf("======================");
        gotoxy(35,4);printf("| Menu Nasabah Lama  |");
        gotoxy(35,5);printf("======================");
        gotoxy(35,6);printf("|1| Histori          |");
        gotoxy(35,7);printf("|2| Saldo            |");
        gotoxy(35,8);printf("|3| Penarikan        |");
        gotoxy(35,9);printf("|4| Keluar           |");
        gotoxy(35,10);printf("======================");
        gotoxy(54,4);pilih = getch();

        switch (pilih){
        case '1':
            histori(id); //manggil fungsi
            break;
        case '2':
            saldo(id); //manggil fungsi
            break;
        case '3':
            penarikanNasabah(id); //manggil fungsi
            break;
        case '4':
            gotoxy(30,12);printf("apakah anda yakin ingin keluar ? <y/n> ");
            keluar : /// buat goto
            gotoxy(72,12);pilih1 = getch();
            if(pilih1=='y'){
                menuNasabah();
            }
            else if(pilih1 == 'n'){
                menuNasabahLama(id);
            }
            else{
                goto keluar;
            }
            menuAwal(); //manggil fungsi
            break;
        default:
            goto xy;
        }

}

void dataNasabah(){
    int idx,id;
    float saldo;
    char nama[100],nohp[100],keca[100];
    char JK[100];

    system("cls");
    printf("[Laman Awal |> Admin |> Data Nasabah]\n\n");
    FILE *in = fopen("nasabah.txt", "r");
    int b=4; /// untuk gotoxy

    while(!feof(in)){
        fscanf(in,"%s %d %s %s %s %f\n",&nama,&id,&JK,&nohp,&keca,&saldo);
            if(strcmp(nama,"")==0){
               gotoxy(35,b);printf("Data Kosong");
               break;
            }
            else{
            gotoxy(35,b);printf("========================");
            gotoxy(35,b+1);printf("nama          = %s", nama);
            gotoxy(35,b+2);printf("id            = %d",id);
            gotoxy(35,b+3);printf("jenis Kelamin = ");jenisKelamin(JK); /// mengubah l menjadi laki laki dan p menjadi perempuan
            gotoxy(35,b+4);printf("No HP         = %s ",nohp);
            gotoxy(35,b+5);printf("Kecamatan     = %s",keca);
            gotoxy(35,b+6);printf("Saldo         = Rp.%.2f",saldo);
            gotoxy(35,b+7);printf("========================");
            b=b+9;
            }
    }


    printf("\n\n");system("pause");
    menuAdmin();
}

void cariNasabah(){
    float atas,bawah;
    int id, cek=0, cek1;
    float saldo;
    char nama[100],nohp[100],keca[100];
    char JK[100];
    char pilih,pilih1;
    int x;
    do{
        cek1=0;
        system("cls");
        printf("[Laman Awal |> Admin |> Cari Nasabah]\n\n");
        gotoxy(35,3);printf("=========================");
        gotoxy(35,4);printf("| syarat mengisi batas  |");
        gotoxy(35,5);printf("=========================");
        gotoxy(35,6);printf("|     atas > bawah      |");
        gotoxy(35,7);printf("|    atas dan bawah > 0 |");
        gotoxy(35,8);printf("|     atas != bawah     |");
        gotoxy(35,9);printf("=========================");

        gotoxy(35,10);printf("masukkan batas bawah: Rp.");
        gotoxy(35,11);printf("masukkan batas atas: Rp.");
        gotoxy(60,10);scanf("%f", &bawah);
        gotoxy(60,11);scanf("%f", &atas);
        if(atas<=bawah || bawah<0){
            system("cls");
            gotoxy(35,4);printf("==========================");
            gotoxy(35,5);printf("|tidak memenuhi syarat ! |");
            gotoxy(35,6);printf("|ingin keluar ? <y/n>    |");
            gotoxy(35,7);printf("==========================");
            x:
            gotoxy(56,6);pilih1 = getch();
            if(pilih1=='y'){
                menuAdmin();
            }
            else if(pilih1 == 'n'){
                cek1=1;
            }
            else{
                goto x;
            }
        }
    }while(cek1==1);

    /// kalo cek lolos
    system("cls");
    printf("[Laman Awal |> Admin |> Cari Nasabah]\n\n");
    FILE *out = fopen("nasabah.txt","r");
    int b = 4; ///buat gotoxy koordinat y =4
    while(!feof(out)){
        fscanf(out,"%s %d %s %s %s %f\n",&nama,&id,&JK,&nohp,&keca,&saldo);
        if((saldo>=bawah)&&(saldo<=atas)){
            gotoxy(35,b);printf("==========================");
            gotoxy(35,b+1);printf("Nama = %s ", nama);
            gotoxy(35,b+2);printf("ID = %d ", id);
            gotoxy(35,b+3);printf("Saldo = Rp.%.2f", saldo);
            gotoxy(35,b+4);printf("==========================");
            cek = cek+1; /// sebagai hitungan jumlah nasabah
            b =b+6 ; /// buat nambah koordinat y
        }
    }
    feof(out);

    if(cek==0){
        system("cls");
        gotoxy(35,4);printf("==================================================================");
        gotoxy(35,5);printf("tidak ada nasabah yang memiliki saldo di rentang Rp.%.2f - Rp.%.2f", bawah, atas);
        gotoxy(35,6);printf("cari kembali ? <y/n>");
        gotoxy(35,7);printf("===================================================================");
         xy:
        gotoxy(55,6);pilih = getch();
        if(pilih=='y'){
            cariNasabah();
        }
        else if(pilih=='n'){
            menuAdmin();
        }
        else{
            goto xy;
        }
    }
   printf("\n\n");system("pause");
    menuAdmin();
}


void dataSetoranSampah(){
    float saldox, saldo[100];
    int i,n=3; /// cuma ada pengeluaran pemasukan dan saldo
    char jenisx[100];
    char jenis[100][100];
    listTab L;
    makeListTab(&L);
    int a,b,c,d; /// buat gotoxy
    a=b=c=d=6;
    system("cls");
    printf("[Laman Awal |> Admin |> Data Setoran Sampah]\n\n");
    gotoxy(0,3);printf("==========================");
    gotoxy(0,4);printf("|       Total Dana       |");
    gotoxy(0,5);printf("==========================");

    FILE *in = fopen("datatotal.txt","r");
    while(!feof(in)){
        fscanf(in,"%s %f\n",&jenisx, &saldox);
        gotoxy(0,a);printf("%s = Rp.%.2f\n",jenisx, saldox);
        a=a+1;
    }
    fclose(in);


    gotoxy(30,3);printf("==========================");
    gotoxy(30,4);printf("|   Total Dana Plastik   |");
    gotoxy(30,5);printf("==========================");

    FILE *in1 = fopen("dataplastik.txt","r");
    while(!feof(in1)){
        fscanf(in1,"%s %f\n",&jenisx, &saldox);
        gotoxy(30,b);printf("%s = %.2f Kg\n",jenisx, saldox);
        b=b+1;
    }
    fclose(in1);


    gotoxy(60,3);printf("==========================");
    gotoxy(60,4);printf("|    Total Dana Kertas   |");
    gotoxy(60,5);printf("==========================");

    FILE *in2 = fopen("datakertas.txt","r");
    while(!feof(in2)){
        fscanf(in2,"%s %f\n",&jenisx, &saldox);
        gotoxy(60,c);printf("%s = %.2f Kg\n",jenisx, saldox);
        c=c+1;
    }
    fclose(in2);


    gotoxy(90,3);printf("==========================");
    gotoxy(90,4);printf("|Total Dana Kaca & Kaleng|");
    gotoxy(90,5);printf("==========================");

    FILE *in3 = fopen("datakaca.txt","r");
    while(!feof(in3)){
        fscanf(in3,"%s %f\n",&jenisx, &saldox);
        gotoxy(90,d);printf("%s = %.2f Kg\n",jenisx, saldox);
        d=d+1;
    }
    fclose(in3);

    gotoxy(35,c+2);system("pause"); /// kenapa c? karena c mewakili y dari list kertas, dan kertas memiliki element terbanyak
    menuAdmin();

}

void menuAdmin(){//sudah diedit brayy
    system("color 74");
    char pilih, pilih1;
    char nama[100];

        system("cls");
        printf("[Laman Awal |> Admin]\n\n");
        gotoxy(35,1);printf("==========================");
        gotoxy(35,2);printf("|       Menu Admin       |");
        gotoxy(35,3);printf("==========================");
        gotoxy(35,4);printf("|1| Data nasabah         |");
        gotoxy(35,5);printf("|2| Cari nasabah         |");
        gotoxy(35,6);printf("|3| Hapus nasabah        |");
        gotoxy(35,7);printf("|4| setoran nasabah      |");
        gotoxy(35,8);printf("|5| Data Setoran Sampah  |");
        gotoxy(35,9);printf("|6| cash flow            |");
        gotoxy(35,10);printf("|7| Keluar               |");
        gotoxy(35,11);printf("==========================");
        gotoxy(58,2);pilih = getch();

        switch (pilih){
        case '1':
            dataNasabah(); //manggil fungsi
            break;
        case '2':
            cariNasabah(); //manggil fungsi
            break;
        case '3':
            deleteNsbh(); //manggil fungsi
            break;
        case '4':
            setoranNasabah(); //manggil fungsi
            break;
        case '5':
            dataSetoranSampah();break; //manggil fungsi
        case '6':
            historiTbngn2(); //manggil fungsi
            break;
        case '7':

            gotoxy(35,14);printf("========================================");
            gotoxy(35,15);printf("apakah anda yakin ingin keluar ? <y/n> ");
            gotoxy(35,16);printf("========================================");
            keluar : /// buat goto
            gotoxy(74,15);pilih1 = getch();
            if(pilih1=='y'){
                menuAwal();
            }
            else if(pilih1 == 'n'){
                menuAdmin();
            }
            else{
                goto keluar;
            }
            break;
        default:
            menuAdmin();
            break;
        }
}

void ListHarga(){
    char plastik;
    char kertas;
    char kaca;
    char nama[100];
    float harga;
    char pilih,pilih1;

        system("cls");
        printf("[Laman Awal |> Nasabah |> List Harga]\n\n");
        gotoxy(35,4);printf("=================");
        gotoxy(35,5);printf("|  Data Sampah  |");
        gotoxy(35,6);printf("=================");
        gotoxy(35,7);printf("|1| Plastik     |");
        gotoxy(35,8);printf("|2| Kertas      |");
        gotoxy(35,9);printf("|3| Kaca        |");
        gotoxy(35,10);printf("|4| Keluar      |");
        gotoxy(35,11);printf("=================");
        a:
        gotoxy(50,5);pilih = getch();
        int b = 6 ; /// untuk gotoxy
    switch (pilih){
        case '1':
            system("cls");
            FILE *in1 = fopen("plastik.txt","r");
            gotoxy(35,3);printf("======================");
            gotoxy(35,4);printf(" Daftar Harga Plastik");
            gotoxy(35,5);printf("======================");
           while (!feof(in1)){
                fscanf(in1,"%s %f\n",&nama, &harga);
                gotoxy(35,b);printf ("%s = Rp.%.2f \n", nama, harga);
                b=b+1;
           }
           fclose(in1);
           gotoxy(35,b+1);printf("======================");
            break;

        case '2':
            system("cls");
            FILE *in2 = fopen("kertas.txt","r");
            gotoxy(35,3);printf("======================");
            gotoxy(35,4);printf(" Daftar Harga Kertas");
            gotoxy(35,5);printf("======================");
           while (!feof(in2)){
                fscanf(in2,"%s %f\n",&nama, &harga);
                gotoxy(35,b);printf ("%s = Rp.%.2f ", nama, harga);
                b=b+1;
           }
           fclose(in2);
           gotoxy(35,b+1);printf("======================");
            break;
        case '3':
            system("cls");
            FILE *in3 = fopen("kaca.txt","r");
            gotoxy(35,3);printf("==============================");
            gotoxy(35,4);printf(" Daftar Harga Kaca Dan Kaleng");
            gotoxy(35,5);printf("==============================");
           while (!feof(in3)){
                fscanf(in3,"%s %f\n",&nama, &harga);
                gotoxy(35,b);printf ("%s = Rp.%.2f /Kg", nama, harga);
                b=b+1;
           }
           fclose(in3);
           gotoxy(35,b+1);printf("======================");
            break;
        case '4':
            gotoxy(35,13);printf("apakah anda yakin ingin keluar ? <y/n> ");
            keluar : /// buat goto
            gotoxy(75,13);pilih1 = getch();
            if(pilih1=='y'){
                menuNasabah();
            }
            else if(pilih1 == 'n'){
                ListHarga();
            }
            else{
                goto keluar;
            }
            break;
        default:
            goto a;
    }
    gotoxy(35,b+2);system("pause");
    ListHarga();
}


void updatelistdata(float saldoy, char x[100]){
    float saldox, saldo[100];
    int i,n=3; /// cuma ada pengeluaran pemasukan dan saldo
    char jenisx[100];
    char jenis[100][100];
    listTab L;
    makeListTab(&L);

    FILE *in = fopen("datatotal.txt","r");

    i = 1;
    while(!feof(in)){
        fscanf(in,"%s %f\n",&jenisx,&saldox);
        if(strcmp(jenisx,x)==0){
            saldox = saldox +saldoy;
        }
        strcpy(jenis[i],jenisx);
        saldo[i] = saldox;
        i=i+1;
    }
    saldo[3] = saldo[1] - saldo[2]; /// itung saldo
    fclose(in);


    adrDat tampung[100];
    i=1;
    while(i<=n){
        tampung[i] = alokasiDatabase(jenis[i],saldo[i]);
        i=i+1;
    }

    i=1;
    while(i<=n){
        insertlastDat(&L,tampung[i],"total");
        i= i+1;
    }

    /// masukin ke notepad
    adrTab p;
    adrDat q;
    p=L.firstTab;
    while(p!=NULL){
        if(strcmp(p->jenisTabungan,"total")==0){
            q =p->firstDat;
            break;
        }
        p = p->nextTab;
    }
    FILE *out = fopen("datatotal.txt","w");
        while(q!=NULL){
            fprintf(out,"%s %.2f\n",q->jenisBarang, q->jumlah);
            q =q->nextDat;
        }
        fclose(out);
}

void historiTbngn( char jenis[100], char nama[100],int id, float jumlah){
    /// input hisrtory

    char harix[100][100], tanggalx[100][100],bulanx[100][100],tahunx[100][100], jamx[100][100], jenisx[100][100], namax[100][100];
    char hariy[100], tanggaly[100],bulany[100],tahuny[100], jamy[100], namay[100], jenisy[100];
    char hari[100], tanggal[100],bulan[100],tahun[100], jam[100];
    time_t waktu;
    int idx;
    float jumlahx;
    time(&waktu);
    addresS tampung[1000];
    int i,n;
    Stack S;
    createEmpty(&S);

    /// memasukkan yang baru

        FILE *in = fopen("tempatWaktu.txt","w");
        fprintf(in,"%s\n",ctime(&waktu)); /// menyimpan waktu untuk sementara
        fclose(in);

        in = fopen("tempatWaktu.txt","r");
        fscanf(in,"%s %s %s %s %s\n",&hari,&bulan,&tanggal,&jam,&tahun);
        fclose(in);

        in = fopen("HistoryTabungan.txt", "a");
        fprintf(in,"%s %s %s %s %s %s %s %d %.2f\n",hari,bulan,tanggal,jam,tahun,jenis,nama,id,jumlah);
        fclose(in);

    }

void historiTbngn2(){
        /// output history
        char harix[100][100], tanggalx[100][100],bulanx[100][100],tahunx[100][100], jamx[100][100], jenisx[100][100], namax[100][100];
        char hariy[100], tanggaly[100],bulany[100],tahuny[100], jamy[100], namay[100], jenisy[100];
        char *hari, *tanggal,*bulan,*tahun,*jam;
        int idx;
        float jumlahx;
        addresS tampung[1000];
        int i,n;
        Stack Sin, Sout;
        createEmpty(&Sin);
        createEmpty(&Sout);


       FILE *in1 = fopen("HistoryTabungan.txt","r");
        i =1;
        while(!feof(in1)){
            fscanf(in1,"%s %s %s %s %s %s %s %d %f\n",&hariy,&bulany,&tanggaly,&jamy,&tahuny,&jenisy,&namay,&idx,&jumlahx);

            strcpy(harix[i],hariy);
            strcpy(bulanx[i],bulany);
            strcpy(tanggalx[i],tanggaly);
            strcpy(jamx[i],jamy);
            strcpy(tahunx[i],tahuny);
            strcpy(jenisx[i],jenisy);
            strcpy(namax[i], namay);
            tampung[i] = alokasi(harix[i],bulanx[i],tanggalx[i],jamx[i],tahunx[i],namax[i],idx,jumlahx);
            i = i+1;
            }
           fclose(in1);

        n = i-1;
        i=1;
        while(i<=n){
            if(strcmp(jenisx[i],"in")==0){
                push(&Sin,tampung[i]);
            }
            else if(strcmp(jenisx[i],"out")==0){
                push(&Sout,tampung[i]);
            }
            i=i+1;
        }
        system("cls");
        printf("[Laman Awal |> Admin |> Histori]\n\n");

        gotoxy(5,3);printf("==========================");
        gotoxy(5,4);printf("       Daftar Masuk       ");
        gotoxy(5,5);printf("==========================");

        int b; /// buat gotoxy
        if(!IsEmpty(Sin)){
            n = i-1;
            i=1;
            b=7;
            while(!IsEmpty(Sin)){
                pop(&Sin,hariy,bulany,tanggaly,jamy,tahuny,namay,&idx,&jumlahx);
                haric(hariy);
                gotoxy(5,b);printf  ("Hari         = %s",hariy);
                gotoxy(5,b+1);printf("Tanggal      = %s %s %s",tanggaly,bulany,tahuny);
                gotoxy(5,b+2);printf("Jam          = %s",jamy);
                gotoxy(5,b+3);printf("Nama Nasabah = %s", namay);
                gotoxy(5,b+4);printf("ID           = %d\n", idx);
                gotoxy(5,b+5);printf("Jumlah       = Rp.%.2f", jumlahx);
                gotoxy(5,b+6);printf("==============================");
                b=b+8;
            }

            }
        else {
            gotoxy(5,7);printf("       [data kosong]");
        }


        gotoxy(45,3);printf("==========================");
        gotoxy(45,4);printf("       Daftar Keluar       ");
        gotoxy(45,5);printf("==========================");
        if(!IsEmpty(Sout)){
            n = i-1;
            i=1;
            b=7;
        while(!IsEmpty(Sout)){
            pop(&Sout,hariy,bulany,tanggaly,jamy,tahuny,namay,&idx,&jumlahx);
            haric(hariy);
            gotoxy(45,b);printf  ("Hari         = %s",hariy);
            gotoxy(45,b+1);printf("Tanggal      = %s %s %s",tanggaly,bulany,tahuny);
            gotoxy(45,b+2);printf("Jam          = %s",jamy);
            gotoxy(45,b+3);printf("Nama Nasabah = %s", namay);
            gotoxy(45,b+4);printf("ID           = %d\n", idx);
            gotoxy(45,b+5);printf("Jumlah       = Rp.%.2f", jumlahx);
            gotoxy(45,b+6);printf("==============================");
            i= i+1;
            b=b+8;
        }
        }
        else{
            gotoxy(45,7);printf("       [data kosong]");
        }

        gotoxy(90,0);system("pause");
        reset : /// buat dipanggil di goto




            system("cls");
            char x;
            gotoxy(35,3);printf("================");
            gotoxy(35,4);printf("reset ? <y/n> ");
            gotoxy(35,5);printf("================");
            gotoxy(55,4);x = getch();
            system("pause");

            if(x=='y'){
                FILE *x = fopen("HistoryTabungan.txt","w");
                fprintf(x,"");
                menuAdmin();
                fclose(x);
            }
            else if(x=='n'){
                menuAdmin();
            }
            else{
                goto reset;
            }

}


void deleteNsbh(){
    float atas,bawah;
    int id, idx, cek=0,i,n;
    float saldox;
    char pilih1;
    char namax[100],nohpx[100],kecax[100], JKx[100];
    char nama[100][100],nohp[100][100],keca[100][100], JK[100][100];
    adrNsbh tampung[100],tampung1[100],tampung2[100],tampung3[100];

    listTab L;
    makeListTab(&L);
    system("cls");
    printf("[Laman Awal |> Admin |> Hapus Nasabah]\n\n");
    gotoxy(35,3);printf("=================================");
    gotoxy(35,4);printf("| Masukan ID yang ingin dihapus |");
    gotoxy(35,5);printf("=================================");
    gotoxy(35,6);printf(" ID : ");
    gotoxy(45,6);scanf("%d", &id);

    /// cek id ada atau gak
    FILE *test = fopen("nasabah.txt","r");
    while(!feof(test)){
        fscanf(test,"%s %d %s %s %s %f\n",&namax,&idx,&JKx,&nohpx,&kecax,&saldox);
        if(id == idx ){
            cek =1;
        }
    }
    fclose(test);

    if(cek == 0){ /// tidak ketemu
        gotoxy(35,10);printf(" ID tidak tersedia  ");
        gotoxy(35,11);printf("masukkan kembali ? <y/n>");
        keluar : /// buat goto
        gotoxy(55,11);pilih1 = getch();
            if(pilih1=='y'){
                deleteNsbh();
            }
            else if(pilih1=='n'){
                menuAdmin();
            }
            else{
                goto keluar;
            }

    }


    FILE *out=fopen("nasabah.txt","r");
    i=1;
    while(!feof(out)){
        fscanf(out,"%s %d %s %s %s %f\n",&namax,&idx,&JKx,&nohpx,&kecax,&saldox);
        strcpy(nama[i],namax);
        strcpy(JK[i],JKx);
        strcpy(nohp[i],nohpx);
        strcpy(keca[i],kecax);
        tampung[i] = alokasiNasabah(nama[i],idx,JK[i],nohp[i],keca[i],saldox);
        i=i+1;

        }
        fclose(out);
           n = i -1;
           i =1;
           while(i<=n){
                insertlastBiasa(&L,"total",tampung[i]);
                i++;
           }

           ///buat list di plastik
    FILE *in1=fopen("nasabahplastik.txt","r");
        i=1;
        while(!feof(in1)){
            fscanf(in1,"%s %d %s %s %s %f\n",&namax,&idx,&JKx,&nohpx,&kecax,&saldox);
            strcpy(nama[i],namax);
            strcpy(JK[i],JKx);
            strcpy(nohp[i],nohpx);
            strcpy(keca[i],kecax);
            tampung1[i] = alokasiNasabah(nama[i],idx,JK[i],nohp[i],keca[i],saldox);
            i=i+1;

            }
            fclose(in1);

               n = i -1;
               i =1;
               while(i<=n){
                    insertlastBiasa(&L,"plastik",tampung1[i]);
                    i++;
               }

        ///buat list di kertas

    FILE *in2=fopen("nasabahkertas.txt","r");
    i=1;
    while(!feof(in2)){
        fscanf(in2,"%s %d %s %s %s %f\n",&namax,&idx,&JKx,&nohpx,&kecax,&saldox);
        strcpy(nama[i],namax);
        strcpy(JK[i],JKx);
        strcpy(nohp[i],nohpx);
        strcpy(keca[i],kecax);
        tampung1[i] = alokasiNasabah(nama[i],idx,JK[i],nohp[i],keca[i],saldox);
        i=i+1;

        }
        fclose(in2);
           n = i -1;
           i =1;
           while(i<=n){
                insertlastBiasa(&L,"kertas",tampung1[i]);
                i++;
           }

           ///buat list di kaca
    FILE *in3=fopen("nasabahkaca.txt","r");
    i=1;
    while(!feof(in3)){
        fscanf(in3,"%s %d %s %s %s %f\n",&namax,&idx,&JKx,&nohpx,&kecax,&saldox);
        strcpy(nama[i],namax);
        strcpy(JK[i],JKx);
        strcpy(nohp[i],nohpx);
        strcpy(keca[i],kecax);
        tampung1[i] = alokasiNasabah(nama[i],idx,JK[i],nohp[i],keca[i],saldox);
        i=i+1;

        }
        fclose(in3);
           n = i -1;
           i =1;
           while(i<=n){
                insertlastBiasa(&L,"kaca",tampung1[i]);
                i++;
           }


           ///prosedur delete multilist

        adrTab p;
        adrNsbh q,r;
        p=L.firstTab;

        while(p!=NULL){
                q = p->firstNsbh;
                r= p->firstNsbh;
            while(q!=NULL){
                if(q->idNasabah == id){// element pertama
                    if(q==r){
                        p->firstNsbh =q->nextNsbh;
                        q->nextNsbh = NULL;

                    }
                    else if(q->nextNsbh == NULL){
                        r->nextNsbh = q->nextNsbh;
                    }
                    else{
                        r->nextNsbh = q->nextNsbh;
                        q->nextNsbh = NULL;
                    }
                    break;
                    }
                    r = q;
                    q=q->nextNsbh;
                }
            p=p->nextTab;
        }
        /// masukin ke notepad
    /// plastik
    FILE *out1=fopen("nasabah.txt","w"); ///ngisi di txt yang total
    p=L.firstTab;
    while(p !=NULL){
            if(strcmp(p->jenisTabungan,"total")==0){
                q=p->firstNsbh;
                break;
            }
            else{
                p=p->nextTab;
            }
    }

    while(q!=NULL){
        fprintf(out1,"%s %d %s %s %s %.2f\n",q->namaNasabah,q->idNasabah,q->jenisKelamin,q->noHp,q->kecamatan,q->saldo);
        q = q->nextNsbh;
    }
    fclose(out1);

    /// kertas
    FILE *out2=fopen("nasabahkertas.txt","w");
    p=L.firstTab;
    while(p !=NULL){
            if(strcmp(p->jenisTabungan,"kertas")==0){
                q=p->firstNsbh;
                break;
            }
            else{
                p=p->nextTab;
            }
    }

    while(q!=NULL){
        fprintf(out2,"%s %d %s %s %s %.2f\n",q->namaNasabah,q->idNasabah,q->jenisKelamin,q->noHp,q->kecamatan,q->saldo);
        q = q->nextNsbh;
    }
    fclose(out2);

    /// kaca
    FILE *out3=fopen("nasabahkaca.txt","w");
    p=L.firstTab;
    while(p !=NULL){
            if(strcmp(p->jenisTabungan,"kaca")==0){
                q=p->firstNsbh;
                break;
            }
            else{
                p=p->nextTab;
            }
    }

    while(q!=NULL){
        fprintf(out3,"%s %d %s %s %s %.2f\n",q->namaNasabah,q->idNasabah,q->jenisKelamin,q->noHp,q->kecamatan,q->saldo);
        q = q->nextNsbh;
    }
    fclose(out3);


    /// total
    FILE *out4=fopen("nasabahplastik.txt","w"); ///ngisi di txt yang total
    p=L.firstTab;
    while(p !=NULL){ //traversal sampe ke terakhir, karena list total ada di terakhir
            if(strcmp(p->jenisTabungan,"plastik")==0){
                q=p->firstNsbh;
                break;
            }
            else{
                p=p->nextTab;
            }
    }

    while(q!=NULL){
        fprintf(out4,"%s %d %s %s %s %.2f\n",q->namaNasabah,q->idNasabah,q->jenisKelamin,q->noHp,q->kecamatan,q->saldo);
        q = q->nextNsbh;
    }
    fclose(out4);
    system("cls");
    gotoxy(35,4);printf("=========================");
    gotoxy(35,5);printf("nasabah berhasil dihapus !");
    gotoxy(35,6);printf("=========================");
    gotoxy(35,9);system("pause");
    menuAdmin();
        }



void haric(char *hari){
    /// prosedur mengubah hari
    if(strcmp(hari,"sun")==0){
        strcpy(hari,"Minggu");
    }
    else if(strcmp(hari,"mon")==0){
        strcpy(hari,"Senin");
    }
    else if(strcmp(hari,"tue")==0){
        strcpy(hari,"Selas");
    }
    else if(strcmp(hari,"wed")==0){
        strcpy(hari,"Rabu");
    }
    else if(strcmp(hari,"thu")==0){
        strcpy(hari,"Kamis");
    }
    else if(strcmp(hari,"fri")==0){
        strcpy(hari,"Jum'at");
    }
    else if(strcmp(hari,"sat")==0){
        strcpy(hari,"Sabtu");
    }
}

void jenisKelamin(char* jenis){

    /// prosedur mengubah jenis kelamin
    if(strcmp(jenis,"l")==0){
        printf("Laki-laki");
    }
    else{
        printf("Perempuan");
    }
}

