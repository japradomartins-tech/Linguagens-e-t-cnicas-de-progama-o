#include <stdio.h>
#include <stdlib.h>

int main() {

    int valor;
    int n100, n50, n10, n5, n2, n1;

    printf("Digite o valor do saque: R$ ");
    scanf("%d", &valor);

    n100 = valor / 100;
    valor = valor % 100;

    n50 = valor / 50;
    valor = valor % 50;

    n10 = valor / 10;
    valor = valor % 10;

    n5 = valor / 5;
    valor = valor % 5;

    n2 = valor / 2;
    valor = valor % 2;

    n1 = valor;

    printf("\nResumo das notas entregues:\n");
    printf("Notas de R$100: %d\n", n100);
    printf("Notas de R$ 50: %d\n", n50);
    printf("Notas de R$ 10: %d\n", n10);
    printf("Notas de R$  5: %d\n", n5);
    printf("Notas de R$  2: %d\n", n2);
    printf("Notas de R$  1: %d\n", n1);

    return 0;
}
