#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {

    double v0, angulo, rad;
    double g = 9.8;
    double k = 0.5;
    double t = 0.0;
    double x, y;
    double alcance, tempo;

    printf("Digite a velocidade inicial (m/s): ");
    scanf("%lf", &v0);

    printf("Digite o angulo (graus): ");
    scanf("%lf", &angulo);

    // Converte para radianos
    rad = angulo * (PI / 180.0);

    // Simulacao
    while (1) {

        x = (v0 * cos(rad) * t) - (k * t * t);
        y = (v0 * sin(rad) * t) - (g * t * t / 2);

        if (y < 0)
            break;

        alcance = x;
        tempo = t;

        t = t + 0.01;
    }

    printf("\nTempo de voo: %.2lf segundos\n", tempo);
    printf("Alcance maximo: %.2lf metros\n", alcance);

    return 0;
}
