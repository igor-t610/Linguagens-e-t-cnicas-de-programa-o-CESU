#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

// Faca um programa que leia dois numeros inteiros e depois os imprima na ordem inversa que eles foram lidos 
{
		
	printf("Exercicio 1 \n");

	int a, b;

	printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("%d \n", b);
    printf("%d \n", a);
	
}

// Ler valor tipo double e imprima em forma de notacao 
{
	
	printf("Exercicio 2 \n");
	
	double valor;

    printf("Digite um valor numerico: ");
    scanf("%lf", &valor);
    
	printf("Valor em notacao cientifica: %e\n", valor);

}

// Binario em bits 

{
	printf("Exercicio 3 \n");
	int n, resultado, bit64, bit32, bit16, bit8, bit4, bit2;

	printf("Entre com o valor de n: ");
	scanf("%d", &n);

	bit64 = n % 2;
	resultado = n / 2;

	bit32 = resultado % 2;
	resultado = resultado / 2;

	bit16 = resultado % 2;
	resultado = resultado / 2;

	bit8 = resultado % 2;
	resultado = resultado / 2;

	bit4 = resultado % 2;
	resultado = resultado / 2;

	bit2 = resultado % 2;
	resultado = resultado / 2;

	printf("O numero %d em binario = %d%d%d%d%d%d%d\n", n, resultado %2, bit2, bit4, bit8, bit16, bit32, bit64);
       
}

// Salario fixo e total de vendas

{

	printf("Exercicio 4 \n");
	
	double salarioFixo, vendas, salarioFinal;

    printf("Salario fixo: R$ ");
    scanf("%lf", &salarioFixo);
    printf("Valor total das vendas: R$ ");
    scanf("%lf", &vendas);

    salarioFinal = salarioFixo + vendas * 0.15;
    printf("salario total = R$ %.2f \n", salarioFinal);
    
}

// 4 valores -> soma/media/produtorio 

{
	printf("Exercicio 5 \n");
	
	double a, b, c, d, soma, media, produto;

    printf("Digite quatro valores: ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    soma = a + b + c + d;
    media = soma / 4.0;
    produto = a * b * c * d;

    printf("Soma: %.2f\n ", soma);
    printf("Media: %.2f\n", media);
    printf("Produto: %.2f\n", produto);
}

//Valor idade em dias 

{
	printf("Exercicio 6 \n");
	
	int totalDias, anos, meses, diasRestantes;

    printf("Idade em dias: ");
    scanf("%d", &totalDias);

    anos = totalDias / 365;
    diasRestantes = totalDias % 365;
    meses = diasRestantes / 30;
    diasRestantes %= 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, diasRestantes);
    
}

// Volume esfera

{
	printf("Exercicio 7 \n");
	
	double raio, volume;
    const double PI = 3.14159;

    printf("Raio da esfera: ");
    scanf("%lf", &raio);

    volume = (4.0 / 3.0) * PI * raio * raio * raio;
    printf("VOLUME = %.3f\n", volume);
}

// Plano cartesiano 

{
	printf("Exercicio 8 \n");
	
	double x1, y1, x2, y2, distancia;

    printf("Coordenadas do ponto 1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Coordenadas do ponto 2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("Distancia entre os pontos: %.4f\n", distancia);
}

	return 0;
}
