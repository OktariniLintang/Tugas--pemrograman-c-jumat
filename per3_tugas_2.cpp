#include <stdio.h>

int main()
{
	float celcius, fahrenheit, reamur;
	
	printf("masukan suhu dalam celsius: ");
	scanf("%f", &celcius);
	
	fahrenheit = (celcius * 9 / 5) + 32;
	reamur = celcius * 4 / 5;
	
	printf("suhu dalam fahrenheit: %.2f\n", fahrenheit);
	printf("suhu dalam reamur: %.2f\n", reamur);
	
	return 0;
}
