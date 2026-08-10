#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 
	float base, altura, area;
	 
	printf ("insira o valor da base do triangulo \n"); 
	scanf("%f",&base);
	
	printf("insira o valor da altura do triangulo \n");
	scanf("%f",&altura);

	area = (base*altura)/2;
	
	printf("%0.2f",area);
	
	return 0;
}
