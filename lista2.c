#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Faca um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e ano atual
{
	printf("Exercicio 1 \n");
	
	int idade, anoAtual, anoNascimento;
	
	printf("Idade: ");
    scanf("%d", &idade);
    printf("Ano atual: ");
    scanf("%d", &anoAtual);
    anoNascimento = (anoAtual - idade);
    printf("Ano de nascimento: %d \n", anoNascimento);
}
// Converter km/h para m/s
	printf("Exercicio 2\n ");
	
{
	float kmh, ms;
	
	printf("Velocidade em km/h: ");
    scanf("%f", &kmh);
    ms = (kmh/3.6);
    printf("Velocidade em m/s: %.2f\n", ms);
}
   /*3) Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor
correspondente em dólares.*/
  {
	printf("Exercicio 3 \n");
	
	float reais, cotacao, dolar;
	
	printf("Digite o valor em reais: \n");
	scanf("%f", &reais);

	printf("Digite a cotacao do dolar: \n");
	scanf("%f", &cotacao);
	
	dolar = reais/cotacao;
	
	printf("O valor de %f reais, em dolar e: %f\n", reais, dolar);
}
// Converter Celsius para Fahrenheit
{
	printf("Exercicio 4 \n");
    
    float celsius, fahrenheit;
    
    printf("Temperatura em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = ((celsius*9)/5 + 32);
	printf("A temperatura %f em celsius e %f em fahrenheit\n", celsius, fahrenheit);

}

// Graus para radianos 
{	
	printf("Exercicio 5 \n");
	
	float graus, rad;
	
	printf("Angulo em graus: ");
    scanf("%f", &graus);
    
	rad = ((graus*3.141592)/180);
	
	printf("O angulo em radianos e: %f \n", rad);
}

//Numero inteiro antecessor e sucessor 

{
	printf("Exercicio 6: \n");
	
	int n, antecessor, sucessor;
	
	printf("Entre com valor de N: ");
	scanf("%d", &n);
	
	sucessor = n+1;
	antecessor = n-1;
	
	printf("o numero %d, seu antecessor %d, e seu sucessor %d\n", n, antecessor, sucessor);
}

//Premio dividio entre 3

{
	printf("Exercicio 7: \n");
	
	float primeiro, segundo, terceiro, premio;
	
	premio = 780000;
	primeiro = (premio*0.46);
	segundo = (premio*0.32);
	terceiro = (premio*0.22);
	
	printf("Premio do primeiro: %f\n", primeiro);
	printf("Premio do segundo: %f\n", segundo);
	printf("Premio do terceiro: %f\n", terceiro);
	}
	
	//Tempo evento na fabrica 
	
{
	printf("Exercicio 8: \n");
	
	int total, horas, minutos, segundos;

    printf("Duracao do evento em segundos: ");
    scanf("%d", &total);
    horas = total / 3600;
    minutos = (total % 3600) / 60;
    segundos = total % 60;
    printf("%d:%d:%d\n", horas, minutos, segundos);
		
}

//Combustivel gasto na viagem 

{
	printf("Exercicio 9: \n");
	
	float tempo, velocidade, distancia, litros;
	
	printf("Tempo da viagem (horas): ");
    scanf("%f", &tempo);
    printf("Velocidade media (km/h): ");
    scanf("%f", &velocidade);
    distancia = tempo * velocidade;
    litros = distancia / 12.0f;
    printf("Litros necessarios: %.f \n", litros);
}

/*10) (URI 1013) Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido
da mensagem “eh o maior”. Utilize a fórmula:  */
{
	printf("Exercicio 10: \n");
	
	int a, b, c, maiorTemp, maior;
	
	printf("insira tres valores para identificar o maior: \n");
	scanf("%d %d %d", &a, &b, &c);
	
	maiorTemp = ((a+b+abs(a-b))/2);
	maior = ((maiorTemp+c+abs(maiorTemp-c))/2);
	
	printf("O maior numero entre %d, %d e %d e: %d", a,b,c,maior);
}
	return 0;
	
}
