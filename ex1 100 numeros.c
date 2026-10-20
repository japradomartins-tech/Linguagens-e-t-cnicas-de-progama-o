#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int numeros[100];
	int i, j, temp;
	
	for (i = 0; i < 100; i++) {
		printf("Digite o %d numero: ", i+1);
		scanf("%d", &numeros[i]);
	}
	for (i = 0; i < 99; i++) {
		for (j = i +1; j < 100; j++) {
			if (numeros[i] < numeros[j]) {
				temp = numeros[i];
				numeros[i] = numeros[j];
				numeros [j] = temp;
			}
		}
	}
	for (i = 0; i < 100; i++) {
		printf("\nNumero %d: %d", i + 1, numeros[i]);
	}
	return 0;
}
