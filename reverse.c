#include <stdio.h>
#include <string.h>

int main()
{

    // Proses Input

    // Pembuatan variabel untuk menyimpan input dari user
    char input1[100], input2[100], input3[100];
    // Pembuatan variabel untuk menyimpan string yang sudah dibalik urutan hurufnya
    char reversed1[100], reversed2[100], reversed3[100];
    // Pembuatan variabel untuk menyimpan jumlah huruf
    int lengthInput1, lengthInput2, lengthInput3, lengthTotal;

    // Proses membaca input kalimat 1 dari user
    printf("Kalimat 1 = ");
    scanf("%[^\n]s", input1);

    // Bersihkan buffer input
    getchar();

    // Proses membaca input kalimat 2 dari user
    printf("Kalimat 2 = ");
    scanf("%[^\n]s", input2);

    // Bersihkan buffer input
    getchar();

    // Proses membaca input kalimat 3 dari user
    printf("Kalimat 3 = ");
    scanf("%[^\n]s", input3);

    // Bersihkan buffer input
    getchar();

    // Proses Logic

    // Proses menndapatkan jumlah huruf
    lengthInput1 = strlen(input1);
    lengthInput2 = strlen(input2);
    lengthInput3 = strlen(input3);
    lengthTotal = lengthInput1 + lengthInput2 + lengthInput3;

    // Proses membalik urutan huruf dari kalimat 1
    for (int x = lengthInput1 - 1; x >= 0; x--)
    {
        // Tambahkan setiap karakter dari input1 ke reversed1 dimulai dari karakter terakhir
        strncat(reversed1, &input1[x], 1);
    }

    // Proses membalik urutan huruf dari kalimat 2
    for (int y = lengthInput2 - 1; y >= 0; y--)
    {
        // Tambahkan setiap karakter dari input2 ke reversed2 dimulai dari karakter terakhir
        strncat(reversed2, &input2[y], 1);
    }

    // Proses membalik urutan huruf dari kalimat 3
    for (int z = lengthInput3 - 1; z >= 0; z--)
    {
        // Tambahkan setiap karakter dari input3 ke reversed3 dimulai dari karakter terakhir
        strncat(reversed3, &input3[z], 1);
    }

    // Proses Output / Menampilkan Data

    printf("Gabungan 3 buah inputan kalimat = %s %s %s\n", input1, input2, input3);
    printf("Hasil membalik kalimat gabungan = %s %s %s\n", reversed3, reversed2, reversed1);
    printf("Jumlah Huruf kalimat pertama = %d\n", lengthInput1);
    printf("Jumlah Huruf kalimat kedua = %d\n", lengthInput2);
    printf("Jumlah Huruf kalimat ketiga = %d\n", lengthInput3);
    printf("Total Jumlah huruf = %d\n", lengthTotal);

    return 0;
}
