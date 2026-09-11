#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int idade, anoAtual, anoNascimento, anoNascimentoProx;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    anoNascimento = anoAtual - idade;
    anoNascimentoProx = anoAtual - idade - 1;

    printf("Seu ano de nascimento : %d ou : %d", anoNascimento, anoNascimentoProx);
	return 0;
}
