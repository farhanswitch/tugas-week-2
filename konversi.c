#include <stdio.h>

int main()
{

    // Deklarasi variabel
    int totalDetik, detik, menit, jam;

    // Membaca input dari user
    printf("Masukkan total detik: ");
    scanf("%d", &totalDetik);

    // Bersihkan input buffer
    getchar();

    // Proses konversi
    // 1 jam = 3600 detik
    jam = totalDetik / 3600;
    // 1 menit = 60 detik. Dan setiap 60 menit = 1 jam. Untuk mendapatkan jumlah menit selain yang sudah dikonversi menjadi jam maka kita harus melakukan operasi jumlah menit modulo 60, karena setiap 60 menit akan dikonversi menjadi jam
    menit = (totalDetik / 60) % 60;
    // 1 menit = 60 detik. Jadi untuk hitung sisa detik, total detik modulo 60
    detik = totalDetik % 60;

    printf("%d detik = %d jam %d menit %d detik\n", totalDetik, jam, menit, detik);
    return 0;
}