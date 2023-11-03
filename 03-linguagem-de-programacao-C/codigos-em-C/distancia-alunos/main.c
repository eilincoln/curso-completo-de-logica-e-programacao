#include <stdio.h>
#define aluno 2.25

    /*
    COVID-19: Programa que estima quantos alunos podem ficar dentro de uma sala de aula. Para
    evitar o contato, é preciso respeitar distância mínima entre as cadeiras, de 1,0m a 1,5 m. Neste
    cenário, é necessário garantir pelo menos 2,25m2 por aluno. O usuário deve informar a largura e
    comprimento do local. Considere a área retangular.
    */


int main(void) {
    float a, b, area;
    int alunos;

    printf("Digite a media em metros (2.5x5.0:) \n");
    scanf("%fx%f", &a, &b);

    area = a * b;
    alunos = area / aluno;

    printf("Cabem aproximadamente %d alunos(s) em uma area de %.2fm2. \n", alunos, area);

    return 0;
}
