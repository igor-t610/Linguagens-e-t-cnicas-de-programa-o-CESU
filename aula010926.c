#include <stdio.h>
#include <stdlib.h>

/* crie um programa que receba uma letra e verifique se ela e vogal ou consoante, se ela for consoante, verifique se ela é 'a' ou 'o' 
caso seja mostre "aoba" caso seja 'i' ou 'u' mostre "lá ele", caso contrario mostre "67" */

int main(int argc, char *argv[]) {

    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    letra = tolower(letra);

    if (letra == 'a' || letra == 'o') {
        printf("aoba\n");
    }
    else if (letra == 'i' || letra == 'u') {
        printf("La ele\n");
    }
    else {
        printf("67\n");
    }

	switch (letra){
		case 'a': 
			printf("a de AMOR");
			break;
		case 'b':
			printf("b de BAIXINHO");
			break;
		case 'c':
			printf("c de CORACAO");
			break;
		case 'd':
			printf("d de DEDINHO");
			break;
		
	}
    return 0;
}
