#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	double valor1, valor2, valor3, valor4;
	double soma, media, produto;
	
	printf("Digite o primeiro valor: \n");
	scanf("%lf", &valor1);
	
	printf("Digite o segundo valor: \n");
	scanf("%lf", &valor2);
	
	printf("Digite o terceiro valor: \n");
	scanf("%lf", &valor3);
	
	printf("Digite o quarto valor: \n");
	scanf("%lf", &valor4);
	
	soma = valor1 + valor2 + valor3 + valor4;
	media = soma / 4;
	produto = valor1 * valor2 * valor3 * valor4;
	
	printf("Soma = %lf\n", soma);
	printf("Media = %lf\n", media);
	printf("Produto = %lf\n", produto);
	
	return 0;
}
