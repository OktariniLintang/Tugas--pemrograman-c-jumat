#include <stdio.h>

int main() {
    int kode, harga;
    char jenis;
    float diskon, hargaSetelahDiskon;

    printf("Masukkan kode: ");
    scanf("%d", &kode);
    printf("Masukkan jenis (A/B/C): ");
    scanf(" %c", &jenis);
    printf("Masukkan harga: ");
    scanf("%d", &harga);

    if (jenis == 'A') {
        diskon = 0.1;
    } else if (jenis == 'B') {
        diskon = 0.15;
    } else if (jenis == 'C') {
        diskon = 0.2;
    } else {
        printf("Jenis tidak valid.\n");
        return 1;
    }

    hargaSetelahDiskon = harga - (harga * diskon);
    printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah didiskon = %.0f\n", 
           jenis, diskon * 100, hargaSetelahDiskon);

    return 0;
}
