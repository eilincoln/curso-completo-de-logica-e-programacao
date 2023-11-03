#include <stdio.h>
#include <stdlib.h>

int main() {
    //Declaração das variáveis.
    float num1, num2, soma;

    // Recebendo informações para o código.
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    //Processamento dos dados recebidos
    soma = num1 + num2;

    //Saida dos dados recebidos
    printf("A soma dos numeros sao: %.2f", soma);


    return 0;
}
