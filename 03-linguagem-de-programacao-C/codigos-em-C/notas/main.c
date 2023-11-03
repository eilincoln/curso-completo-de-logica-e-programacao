#include <stdio.h>
#include <stdlib.h>

    // Programa que imprime a média aritmética de dois grupos com 3 notas em casa.
    // Calcule também a média das médias dos grupos. As notas devem ser informadas via teclado.

int main()
{
    float notaAlunoA1, notaAlunoA2, notaAlunoA3; // notas grupo A
    float notaAlunoB1, notaAlunoB2, notaAlunoB3; // notas grupo B
    float mediaA, mediaB; // media dos grupos

    printf("Digite as 3 notas do grupo A: ");
    scanf("%f %f %f", &notaAlunoA1, &notaAlunoA2, &notaAlunoA3);

    printf("Digite as 3 notas do grupo B: ");
    scanf("%f %f %f", &notaAlunoB1, &notaAlunoB2, &notaAlunoB3);

    mediaA = (notaAlunoA1 + notaAlunoA2 + notaAlunoA3) / 3;
    mediaB = (notaAlunoB1 + notaAlunoB2 + notaAlunoB3) / 3;

    printf("Media do grupo A: %.1f", mediaA);
    printf("\nMedia do grupo B: %.1f", mediaB);
    printf("\nMedia dos grupos: %.2f", (mediaA + mediaB) / 2);


    return 0;
}
