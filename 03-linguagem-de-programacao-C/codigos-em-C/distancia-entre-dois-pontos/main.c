/*
<CODE14>
Curso Completo de Lógica e Programação
CURSO: https://www.ezequielzorzal.com/cursoLP
Prof. Dr. Ezequiel Zorzal
https://www.ezequielzorzal.com
*/

#include <stdio.h>
#include <math.h>

int main(void) {
  float d,xa,xb,ya,yb;
  printf("Digite os pontos (Xa Ya Xb Yb):");
  scanf("%f %f %f %f",&xa,&ya,&xb,&yb);
  d = sqrt(pow(xb-xa,2)+pow(yb-ya,2));
  printf("d = %f",d);
  return 0;
}


