#include <stdio.h>

int main() {
	int data[11]={12,15,7,10,5,2,17,25,9,20,35};
	int arrayGenap[11];
	int i,j=0;
	
	printf("Data input:\n");
	for(i = 0;i <11;i++) {
		printf("%d",data[i]);
		if(data[i]%2 == 0) {
			arrayGenap[j]=data[i];
			j++;
		}
	}
	
	printf("\n\nArray genap:\n");
	for(i=0;i<j; i++) {
		printf("%d",arrayGenap[i]);
	}
	printf("\n");
	return 0;
}
