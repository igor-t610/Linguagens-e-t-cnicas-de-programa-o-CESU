#include <stdio.h>
#include <stdlib.h>

int compara (int a, int b){
	if(a < b)return b;
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
		
	return 0;
}
