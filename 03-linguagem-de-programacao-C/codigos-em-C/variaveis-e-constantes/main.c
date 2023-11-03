#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265359


int main(void) {

    float area, raio;

    printf("Digite o raio da aplicacao: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("Area do curculo = %.2f", area);


    return 0;
}
