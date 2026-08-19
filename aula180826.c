#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//6) Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor
	int n, antecessor, sucessor;
	
	printf("Entre com valor de N: ");
	scanf("%d", &n);
	
	sucessor = n+1;
	antecessor = n-1;
	
	printf("o numero %d, seu antecessor %d, e seu sucessor %d\n", n, antecessor, sucessor);
/*3) Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor
correspondente em dólares.*/
	
	float reais, cotacao, dolar;
	
	printf("Digite o valor em reais: \n");
	scanf("%f", &reais);

	printf("Digite a cotacao do dolar: \n");
	scanf("%f", &cotacao);
	
	dolar = reais/cotacao;
	
	printf("O valor de %f reais, em dolar e: %f\n", reais, dolar);
	
	/*10) (URI 1013) Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido
da mensagem “eh o maior”. Utilize a fórmula:  */

	int a, b, c, maiorTemp, maior;
	
	printf("insira tres valores para identificar o maior: \n");
	scanf("%d %d %d", &a, &b, &c);
	
	maiorTemp = ((a+b+abs(a-b))/2);
	maior = ((maiorTemp+c+abs(maiorTemp-c))/2);
	
	printf("O maior numero entre %d, %d e %d e: %d", a,b,c,maior);
	
	return 0;
}
