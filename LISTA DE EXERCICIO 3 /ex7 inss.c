#include <stdio.h>

double calcularINSS(double salario) {

    if (salario <= 1412.00)
        return salario * 0.075;

    else if (salario <= 2666.68)
        return salario * 0.09;

    else if (salario <= 4000.03)
        return salario * 0.12;

    else
        return salario * 0.14;
}

int main() {

    double salario, desconto;

    printf("Digite o salario bruto: R$ ");
    scanf("%lf", &salario);

    desconto = calcularINSS(salario);

    printf("Desconto do INSS: R$ %.2lf\n", desconto);

    return 0;
}
