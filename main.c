#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float a,b,c, maiorTemp, maior;
	
	printf("Insira um valor de A, B, C: \n");
	scanf("%f %f %f" , &a, &b, &c);
	
	if (a>b){
		maiorTemp = a;
	}
	else if (b>a){
		maiorTemp = b;
	}
	
	if (maiorTemp > c) {
		maior = maiorTemp;
	}
	else if (maiorTemp < c){
		maior = c; 
	}
	
	printf("o maior numero dos 3 e: %f", maior);
	return 0;
}
