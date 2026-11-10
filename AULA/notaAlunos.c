#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float notas[10];
	int i, aluno;
	
	for(i=0; i<10; i++) {
		printf("Digite a nota do aluno %d: ", i + 1);
		scanf("%f", &notas[i]);
	}
	system("cls");
	
	printf("\nDigite o numero do aluno (1 a 10): ");
	scanf("%d", &aluno);
	
	if(aluno >= 1 && aluno <= 10) {
		printf("A nota do aluno %d e: %2.f\n", aluno, notas[aluno - 1]);
	}
	else {
		printf("Aluno invalido\n");
	}
	
	return 0;
}
