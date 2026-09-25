#include <stdio.h>

double calcularIRPF(double salarioBase) {

    if (salarioBase <= 2259.20)
        return 0.0;

    else if (salarioBase <= 2826.65)
        return (salarioBase * 0.075) - 169.44;

    else if (salarioBase <= 3751.05)
        return (salarioBase * 0.15) - 381.44;

    else if (salarioBase <= 4664.68)
        return (salarioBase * 0.225) - 662.77;

    else
        return (salarioBase * 0.275) - 896.00;
}

int main() {

    double salarioBase, irpf;

    printf("Digite o salario-base: R$ ");
    scanf("%lf", &salarioBase);

    irpf = calcularIRPF(salarioBase);

    printf("IRPF: R$ %.2lf\n", irpf);

    return 0;
}
