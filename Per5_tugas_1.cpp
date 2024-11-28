#include <stdio.h>

int main() {
	int jamMasuk,jamKeluar,lamaKerja;
	
	printf("masukan jam masuk (1-12): ");
	scanf("%d", &jamMasuk);
	printf("masukan jam keluar (1-12): ");
	scanf("%d", &jamKeluar);
	
	if (jamKeluar >= jamMasuk ) {
		lamaKerja = jamKeluar - jamMasuk;
	} else {
		lamaKerja = (jamKeluar + 12) - jamMasuk;
	}
	
	printf("Lama kerja: %d jam\n" , lamaKerja);
	
	return 0;
}
