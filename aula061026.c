#include <stdio.h>
#include <stdlib.h>
/* faca um progama que leia 10 valores inteiros e mostre na tela o maior entre os 5 primeiros e o menor dos 5 restantes */
int comparaMaior (int a, int b){
	if(a > b)return a;
	else return b;
}

int comparaMenor (int a, int b){
	if(a > b)return b;
	else return a;
}

int main(int argc, char *argv[]) {
	
	int valores[10];
	int maior, menor, i;
		
	printf("Vamos ler os valores: \n");
	//for(inicializacao; verificacao; incremento)
	for( i=0; i <10; i++ ){
		scanf("%d", &valores[i]);
	}
	
	for( i=0; i <10; i++ ){
		printf("|%d|", valores[i]);
	}
	
	maior = valores[0];
	for (i = 1; i < 5; i+=2){
		int maior_temp = comparaMaior(valores[i], valores[i+1]);
		maior = comparaMaior(maior_temp, maior);
	}
	
	printf("\n");
	printf("Maior |%d|",maior);
	
	menor = valores[4];
	for (i = 6; i < 9; i+=2){
		int menor_temp = comparaMenor(valores[i], valores[i+1]);
		menor = comparaMenor(menor_temp, menor);
	}
	printf("\n");
	printf("Menor |%d|",menor);
	
	return 0;
}
