#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "bodyprogram.c"
/*
CS -  40 - 03
opatan crew

1. Rafanzhani Elfarizy  (1302160067)
2. Nurul Eka Lestari    (1302164115)
3. Haddad Alwi Yafie    (1302162075)
4. Annisa Dwi Andiani   (1302164135)
*/

int main(){
    int i,j;

    gotoxy(25,5);char a[] =(" ----- Assalamu'alaikum ----- .");

    for(i=0;a[i]!='.';i++){
        printf("%c", a[i]);
        for (j=0;j<=50000000;j++){
        }
    }
    gotoxy(25,8);char b[] =(" ----- Bank Sampah Kami ----- .");
    for(i=0;b[i]!='.';i++){
        printf("%c", b[i]);
        for (j=0;j<=50000000;j++){
        }
    }

    system("cls");
    gotoxy(25,5);
    char c[] =(" ----- Developed by ----- \n\n\t\t\t        Opatan Crew  \t\t\t \n.");
    for(i=0;c[i]!='.';i++){
        printf("%c", c[i]);
        for (j=0;j<=50000000;j++){
        }
    }

    gotoxy(25,9);
    char d[] =(" ------------------------ .");
    for(i=0;d[i]!='.';i++){
        printf("%c", d[i]);
        for (j=0;j<=50000000;j++){
        }
    }

    system("cls");
    gotoxy(25,5);
    char e[] =(" --------------- starting --------------- .");
    for(i=0;e[i]!='.';i++){
        printf("%c", e[i]);
        for (j=0;j<=50000000;j++){
        }
    }


    menuAwal();
    return 0;
}


