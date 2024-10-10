#include <stdio.h>
#include <math.h>

int main()
{
	float alas, tinggi, sisi_miring;
	
	printf("masukan panjang alas segitiga (dalam cm): ");
	scanf("%f", &alas);
	printf("masukan panjang tinggi segitiga (dalam cm): ");
	scanf("%f", &tinggi);
	
	sisi_miring = sqrt((alas * alas) + (tinggi * tinggi));
	
	printf("panjang sisi miring segitiga adalah: %.2f cm\n", sisi_miring);
	
	return 0;
}
