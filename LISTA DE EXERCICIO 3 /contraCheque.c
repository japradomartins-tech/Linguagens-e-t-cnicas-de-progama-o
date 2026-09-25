#include <stdio.h>

// Funcao do INSS
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

// Funcao do IRPF
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

    double valorHora, horas;
    double salarioBruto, inss, salarioBase, irpf, salarioLiquido;

    printf("Valor da hora trabalhada: R$ ");
    scanf("%lf", &valorHora);

    printf("Quantidade de horas no mes: ");
    scanf("%lf", &horas);

    salarioBruto = valorHora * horas;

    inss = calcularINSS(salarioBruto);

    salarioBase = salarioBruto - inss;

    irpf = calcularIRPF(salarioBase);

    salarioLiquido = salarioBruto - inss - irpf;

    printf("\n======================================================\n");
    printf("      RECIBO DE PAGAMENTO DE SALARIO\n");
    printf("              (CONTRA-CHEQUE)\n");
    printf("======================================================\n");
    printf("Salario Bruto (Horas x Valor): R$ %10.2lf\n", salarioBruto);
    printf("(-) Desconto INSS:            R$ %10.2lf\n", inss);
    printf("(-) Desconto IRPF:            R$ %10.2lf\n", irpf);
    printf("------------------------------------------------------\n");
    printf("LIQUIDO A RECEBER:            R$ %10.2lf\n", salarioLiquido);
    printf("======================================================\n");

    return 0;
}
