#include <stdio.h>
#include <stdlib.h>

// Desenvolver um programa para calcular o consumo médio de combustível.

int main()
{
    float distancia, litros;

    printf("Digite a distancia (Km) e litros gasto (l): ");
    scanf("%f %f", &distancia, &litros);

    printf("Consumo: %.2fkm/l | %.2fl/100km\n", distancia / litros, (100 * litros) / distancia);


    return 0;
}
