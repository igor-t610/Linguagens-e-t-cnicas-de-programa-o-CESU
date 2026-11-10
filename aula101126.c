#include <stdio.h>
#include <stdlib.h>

/* faca um algoritimo para armazenar a nota bimestral de um total de 10 alunos, ao final solicite qual aluno o usuario deseja que a nota seja apresentada em c */

int main(int argc, char *argv[]) {
	
	int vet_notas[10];
	int i,num;
	
	for (i = 0; i < 10; i++){
	
		printf("Digite a nota bimestral do aluno %d: ", i+1);
		scanf("%d", &vet_notas[i]);
	}
	
	printf("Qual nota deseja ver (N° do Aluno)? ");
	scanf("%d", &num);
	if (num>0 && num <= 10) printf("%d", vet_notas[num-1]);
	else printf("Nota nao cadastrada");
	
	return 0;
}
