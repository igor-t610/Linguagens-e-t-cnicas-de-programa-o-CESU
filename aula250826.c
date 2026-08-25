#include <stdio.h>
#include <stdlib.h>

/* FACA UM PROGRAMA QUE LEIA DOIS VALORES, CASO ELES SEJAM POSITIVOS VERIFIQUE SE SAO MULTIPLOS DE 2 E ENTRE SI CASO NEGATIVOS VERIFIQUE QUAL E O MAIOR DOS 2 */

int main(int argc, char *argv[]) {
	
	int a,b, r;
	printf("entre com os valores do problema\n");
	scanf("%d %d", &a, &b);
	
	if (a > 0 && b > 0){
		if (a %2 == 0){
			printf("%d e positivo e divisivel por 2\n", a);
		}
		if (b %2 == 0){
			printf("%d e positivo e divisivel por 2\n", b);
		}
		if (a %b == 0 || b %a == 0){
			printf("%d %d sao multiplos entre si", a, b);
		} 
		
		else {
			printf("%d %d nao sao multiplos entre si",a, b);
		}
	}
	
	else if (a <0 && b <0){
		printf ("os numeros sao negativos\n");
		if (a>b){
			printf("%d e maior que %d", a,b);
		}
		else if (b>a){
			printf("%d e maior que %d", b, a);
		}
		else {
			printf("os numeros sao iguais");
		}
	}	
	else {
		printf("um dos numeros e positivo e o outro negativo ou igual a zero");
	}
	
	return 0;
}
