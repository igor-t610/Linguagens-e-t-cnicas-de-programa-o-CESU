#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

    int exercicio;

    printf("Digite o numero do exercicio: ");
    scanf(" %d", &exercicio);
    
	switch (exercicio){
		case 1: 
			printf("Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual");
			break;
		case 2:
			printf("Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por segundo)A fórmula de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s");
		
			break;
		case 3:
			printf("Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valorcorrespondente em dólares.");
			break;
		case 4:
			printf("Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit eC a temperatura em Celsius.");
			break;
		case 5:
			printf("Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é R = G * p/180, sendo G o ângulo em graus e R em radianos e p = 3.141592.");
			break;
		case 6: 
			printf("Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor");
			break;
		case 7: 
			printf("A importância de R$780.000,00 será dividida entre três ganhadores de um concurso, sendo que:|O primeiro receberá 46/100 do total | O segundo receberá 32/100 do total. | O terceiro receberá o restante.|Calcule e imprima a quantia recebida por cada um dos ganhadores.");
			break;
		case 8: 
			printf("(URI 1019) Leia um valor inteiro, que é o tempo de duração em segundos de um determinado eventoem uma fábrica, e informe-o expresso no formato horas:minutos:segundos.");
			break;
		case 9:
			printf("(URI 1017) Joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em umaviagem, ao utilizar um automóvel que faz 12 KM/L. Para isso, ele gostaria que você o auxiliasse atravésde um simples programa. Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem (em horas) ea velocidade média durante a mesma (em km/h). Assim, pode-se obter distância percorrida e, emseguida, calcular quantos litros seriam necessários. Mostre o valor com 3 casas decimais após o ponto.")
			break;
	}
	
    return 0;
}
