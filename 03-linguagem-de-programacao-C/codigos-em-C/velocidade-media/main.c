#include <stdio.h>>

int main(void) {
  //declara��o de vari�veis
  float espaco, tempo, vm;

  printf("digite o espaco e tempo (s / t): ");
  scanf("%f %f", &espaco, &tempo);

  // calculo
  vm = espaco / tempo;

  // sa�da de dados
  printf("Vm = %.2f", vm);

  return 0;
}
