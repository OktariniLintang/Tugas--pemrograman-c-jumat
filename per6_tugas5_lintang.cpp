#include <stdio.h>

int main() {
	double saldo = 1000000;
	double bunga = 0.02;
	
	for (int i = 1; i <= 10; i++) {
		saldo += saldo * bunga;
		printf("saldo bulan ke-%d: Rp%.2if\n", i,saldo);
	}
	
	printf("Total saldo setelah 10 bulan: Rp%2if\n", saldo);
	
	return 0;
}
