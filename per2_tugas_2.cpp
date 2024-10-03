#include <stdio.h>
#define PHI 3.14

int main()

{
	float diameter = 15.0;
	float jari_jari = diameter / 2.0;
	float volume;
	
	volume = (4.0 / 3.0) * PHI * jari_jari * jari_jari * jari_jari;
	
	printf("volume bola dengan diameter %.2f cm adalah %.2f cm^3\n", diameter , volume);
	
	return 0;
	
}
