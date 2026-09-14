#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float f, c;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);

    f = c * (9.0 / 5.0) + 32.0;

    printf("A temperatura em Fahrenheit é: %.2f\n", f);
	
	return 0;
}
