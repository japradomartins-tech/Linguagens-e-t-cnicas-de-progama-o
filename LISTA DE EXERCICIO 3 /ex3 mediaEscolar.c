#include <stdio.h>

int main() {

    char nome[100];
    double n1, n2, n3, media, falta;

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", nome);

    printf("Digite a primeira nota: ");
    scanf("%lf", &n1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &n2);

    printf("Digite a terceira nota: ");
    scanf("%lf", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("\n===== RESULTADO FINAL =====\n");
    printf("Aluno: %s\n", nome);
    printf("Media: %.2lf\n", media);

    if (media >= 7.0) {
        printf("\033[34mSituacao: APROVADO\033[0m\n");

    } else if (media >= 4.0) {
        falta = 10.0 - media;
        printf("\033[32mSituacao: EXAME\033[0m\n");
        printf("Faltam %.2lf pontos para atingir nota 10.\n", falta);

    } else {
        printf("\033[31mSituacao: REPROVADO\033[0m\n");
    }

    return 0;
}
