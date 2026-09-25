#include <stdio.h>

int main() {

    double temperatura, resultado;
    char escala;

    printf("Digite a temperatura: ");
    scanf("%lf", &temperatura);

    printf("Digite a escala (C ou F): ");
    scanf(" %c", &escala);

    if (escala == 'C' || escala == 'c') {

        resultado = (temperatura * 9.0 / 5.0) + 32;
        printf("Temperatura em Fahrenheit: %.2lf F\n", resultado);

    } else if (escala == 'F' || escala == 'f') {

        resultado = (temperatura - 32) * 5.0 / 9.0;
        printf("Temperatura em Celsius: %.2lf C\n", resultado);

    } else {

        printf("Escala invalida!\n");

    }

    return 0;
}
