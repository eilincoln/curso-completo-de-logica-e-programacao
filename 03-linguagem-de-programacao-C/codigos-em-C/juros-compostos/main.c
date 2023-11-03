#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

    float montante, capital, taxaFixa, tempo;

    printf("Entre com os valores de C, i e t: ");
    scanf("%f %f %f", &capital, &taxaFixa, &tempo);

    montante = capital * pow(1 + (taxaFixa / 100), tempo);

    printf("Valor final: R$ %.2f, juros = R$%.2f\n", montante, montante - capital);
    return 0;
}