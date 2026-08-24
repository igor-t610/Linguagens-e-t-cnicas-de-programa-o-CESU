#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float a,b,c, maiorTemp, maior;
	
	printf("Insira um valor de A, B, C: \n");
	scanf("%f %f %f" , &a, &b, &c);
	
	if (a>b && a>c){
		printf("%f eh o maior \n", a);
	} 
	if (b>c && b>a){
		printf("%f eh o maior \n", b);
	} 	
	if (c>a && c>b){
		printf("%f eh o maior \n", c);
	} 
	
	return 0;
}
