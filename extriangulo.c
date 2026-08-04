#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//comentario de linha 
int main(int argc, char *argv[]) {
	
	int base, altura; 
	float area;
	
	base = 10; 
	altura = 20;
	area = (base*altura)/2;
	
	printf("A area do Triangulo de Base %d e Altura %d = %f",base, altura, area);
		
	return 0;
}
