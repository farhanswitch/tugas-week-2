#include <stdio.h>
#include <string.h>

void reverseString(char sentence[100], char result[100])
{

    // Dapatkan panjang string
    int sentenceLength = strlen(sentence);

    // Proses membalik urutan huruf
    for (int x = sentenceLength - 1; x >= 0; x--)
    {
        // Tambahkan setiap karakter dari sentence ke reversed, dimulai dari karakter terakhir
        strncat(result, &sentence[x], 1);
    }
}
int main()
{

    // Deklarasi variabel
    char input1[100] = "", input2[100] = "", input3[100] = "";
    char reversed1[100] = "", reversed2[100] = "", reversed3[100] = "";
    int lengthInput1, lengthInput2, lengthInput3, lengthTotal;

    // Proses membaca input dari user

    /*
        Saat menggunakan scanf, parameter nya menggunakan "%[^\n]s" supaya bisa menangkap input dari user yang memiliki spasi
        Referensi: https://www.geeksforgeeks.org/taking-string-input-space-c-3-different-methods/
    */
    printf("Kalimat 1 = ");
    scanf("%[^\n]s", input1);

    // Bersihkan input buffer
    getchar();

    printf("Kalimat 2 = ");
    scanf("%[^\n]s", input2);

    // Bersihkan buffer input
    getchar();

    printf("Kalimat 3 = ");
    scanf("%[^\n]s", input3);

    // Bersihkan buffer input
    getchar();

    // Proses Logic

    lengthInput1 = strlen(input1);
    lengthInput2 = strlen(input2);
    lengthInput3 = strlen(input3);
    lengthTotal = lengthInput1 + lengthInput2 + lengthInput3;

    // Proses membalikkan urutan huruf
    reverseString(input1, reversed1);
    reverseString(input2, reversed2);
    reverseString(input3, reversed3);

    // Proses menampilkan hasil ke layar
    printf("Gabungan 3 buah inputan kalimat = %s %s %s\n", input1, input2, input3);
    printf("Hasil membalik kalimat gabungan = %s %s %s\n", reversed3, reversed2, reversed1);
    printf("Jumlah Huruf kalimat pertama = %d\n", lengthInput1);
    printf("Jumlah Huruf kalimat kedua = %d\n", lengthInput2);
    printf("Jumlah Huruf kalimat ketiga = %d\n", lengthInput3);
    printf("Total Jumlah huruf = %d\n", lengthTotal);

    return 0;
}