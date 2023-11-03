#include <stdio.h>
#include <stdlib.h>

int main()
{
    float g = 9.8;
    float v0, t;

    printf("Velocidade inicial e instante t: ");
    scanf("%f %f", &v0, &t);

    printf("Velocidade no instante %.2f eh: %.2fm/s \n", t, v0 - g * t);
    printf("Altura no instante %.2f eh: %.2f", t, v0 * t - (g * t * t) / 2);

    return 0;
}
