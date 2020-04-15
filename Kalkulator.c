#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void main()
{
int bil1, bil2, hasil,pil;
menu:
    printf("Program Kalkulator Sederhana\n");
    printf("Pilihan Kalkulator \n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Pembagian\n");
    printf("4. Perkalian\n");
    printf("5. Exit");
    printf("\n");
    printf("Silahkan Pilih: ");
    scanf("%i",&pil);
    system("cls");
    switch(pil)
    {
    case 1 :
        printf("Penjumlahan\n\n");
        printf("Masukkan Bilangan Ke-1: ");
        scanf("%i",&bil1);
        printf("Masukkan Bilangan Ke-2: ");
        scanf("%i",&bil2);
        hasil= bil1+bil2;
        printf("\nHasil : %d\n",hasil);
        system("pause");
        system("cls");
        goto menu;

    case 2 :
        printf("Pengurangan\n\n");
        printf("Masukkan Bilangan Ke-1: ");
        scanf("%i",&bil1);
        printf("Masukkan Bilangan Ke-2: ");
        scanf("%i",&bil2);
        hasil=bil1-bil2;
        printf("\nHasil : %d\n",hasil);
        system("pause");
        system("cls");
        goto menu;

    case 3 :
        printf("Pembagian\n\n");
        printf("Masukkan Bilangan Ke-1: ");
        scanf("%i",&bil1);
        printf("Masukkan Bilangan Ke-2: ");
        scanf("%i",&bil2);
        hasil=bil1/bil2;
        printf("\nHasil : %i\n",hasil);
        system("pause");
        system("cls");
        goto menu;

    case 4 :
        printf("Perkalian\n\n");
        printf("Masukkan Bilangan Ke-1: ");
        scanf("%i",&bil1);
        printf("Masukkan Bilangan Ke-2: ");
        scanf("%i",&bil2);
        hasil=bil1*bil2;
        printf("\nHasil : %i\n",hasil);
        system("pause");
        system("cls");
        goto menu;

    case 5 :
        printf("Terima Kasih Telah Menggunakan program Kalkulator\n");
        exit(0);

    default :
        system("cls");
        printf("Inputan yang anda masukkan salah !!!!!\n");
        system("pause");
        system("cls");
        goto menu;

    }
}
