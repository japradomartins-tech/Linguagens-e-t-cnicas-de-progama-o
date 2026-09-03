#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char nome[100];
	double salarioFixo, vendas, totalReceber;
	
	printf("Digite o nome do vendedor: ");
	scanf("%s", nome);
	
	printf("Digite o salario fixo: ");
	scanf("%lf", &salarioFixo);
	
	printf("Digite o valor total das vendas: ");
	scanf("%lf", &vendas);
	
	totalReceber = salarioFixo + (vendas * 0.15);
	printf("TOTAL = R$ %.2lf\n", totalReceber);
	
	return 0;
}
