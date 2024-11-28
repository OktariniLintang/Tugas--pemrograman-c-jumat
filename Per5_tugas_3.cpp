#include <stdio.h>

int main() {
	int jamMasuk, jamKeluar, lamaParkir, biaya;
	
	printf("masukan jam masuk: ");
	scanf("%d", &jamMasuk);
	printf("masukan jam keluar: ");
	scanf("%d", &jamKeluar);
	
	if(jamKeluar >= jamMasuk) {
		lamaParkir = jamKeluar - jamMasuk;
	} else {
		lamaParkir =(jamKeluar + 12) - jamMasuk;
	}
	
	if(lamaParkir <= 2) {
		biaya = 2000;
	} else {
		biaya = 2000 + (lamaParkir - 2) * 500;
	}
	
	printf("Biaya parkir = %d\n", biaya);
	
	return 0;
}
