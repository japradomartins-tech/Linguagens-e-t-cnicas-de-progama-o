#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float total = 780000.00;
    float primeiro, segundo, terceiro;

    primeiro = total * 0.46;
    segundo = total * 0.32;
    terceiro = total - (primeiro + segundo);

    printf("Primeiro ganhador (46%%): R$ %.2f\n", primeiro);
    printf("Segundo ganhador (32%%): R$ %.2f\n", segundo);
    printf("Terceiro ganhador (restante): R$ %.2f\n", terceiro);
	
	return 0;
}
