#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float g, r;
    float p = 3.141592;

    printf("Digite o angulo em graus: ");
    scanf("%f", &g);

    r = g * p / 180.0;

    printf("O angulo em radianos é: %.6f\n", r);
	
	return 0;
