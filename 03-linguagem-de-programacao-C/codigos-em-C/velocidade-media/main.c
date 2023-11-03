#include <stdio.h>>

int main(void) {
  //declaração de variáveis
  float espaco, tempo, vm;

  printf("digite o espaco e tempo (s / t): ");
  scanf("%f %f", &espaco, &tempo);

  // calculo
  vm = espaco / tempo;

  // saída de dados
  printf("Vm = %.2f", vm);

  return 0;
}
