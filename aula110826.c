#include <stdio.h>
#include <stdlib.h>
#define pi 3.141597

int main(int argc, char *argv[]) {
	
	float r, area;
	
	printf ("insira o valor do raio\n");
	scanf ("%f", &r);
	
	area = pi*(r*r);
	
	printf("A area do circulo de raio r %f = %f\n", r, area);
	
	float B, b, h, areaT;
	
	printf("Agora vamos calcular a area do trapezio\n");
	printf("insira a base maior do trapezio\n");
	scanf("%f", &B);
	
	printf("insira a base menor do trapezio\n");
	scanf("%f", &b);
	
	printf("insira a altura do trapezio\n");
	scanf ("%f", &h);
	
	areaT = (B+b)/2 *h;
	
	printf("a area do trapezio e %f", areaT);
	
	return 0;
}
