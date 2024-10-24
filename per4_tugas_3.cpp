#include <stdio.h>

int main()
{
	int N;
	printf("Masukan nilai N: ");
	scanf("%d", &N);
	
	N = N - 25;
	
	if (N > 50) {
		N = N + 10;
	}
	printf("Nilai akhir N: %d\n", N);
	return 0;
}
