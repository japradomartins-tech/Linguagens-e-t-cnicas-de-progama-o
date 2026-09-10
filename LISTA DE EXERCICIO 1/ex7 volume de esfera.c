#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	double R, volume;
    double pi = 3.14159;

    printf("Digite o raio: ");
    scanf("%lf", &R);

    volume = (4.0/3.0) * pi * R * R * R;

    printf("VOLUME = %.3lf\n", volume);
	
	return 0;
}
