/*
<CODE07>
Curso Completo de Lógica e Programação
CURSO: https://www.ezequielzorzal.com/cursoLP
Prof. Dr. Ezequiel Zorzal
https://www.ezequielzorzal.com
*/

#include <stdio.h>

int main(void) {
  char enfeite;
  printf("Digite um caractere para usar como enfeite em sua árvore de Natal: ");
  scanf("%c",&enfeite);
  printf("\t\t      \u2B50\n");
  printf("\t\t     \u2739%c\u2739\n",enfeite);
  printf("\t\t    \u2739%c\u2739%c\u2739\n",enfeite,enfeite);
  printf("\t\t   %c\u2739\u2739%c\u2739\u2739%c\n",enfeite,enfeite,enfeite);
  printf("\t\t  %c\u2739\u2739%c\u2739%c\u2739\u2739%c\n",enfeite,enfeite,enfeite,enfeite);
  printf("\t\t %c\u2739\u2739%c\u2739\u2739\u2739%c\u2739\u2739%c\n",enfeite,enfeite,enfeite,enfeite);
  printf("\t\t%c\u2739\u2739%c\u2739\u2739%c\u2739\u2739%c\u2739\u2739%c\n",enfeite,enfeite,enfeite,enfeite,enfeite);
  printf("\t\t      \u2593\n");
  printf("\t   \u2744 FELIZ NATAL! \u2744\n");

  return 0;
}

/*
 Outros caracteres Unicode podem ser encontrados em:
 https://en.wikibooks.org/wiki/Unicode/Character_reference/0000-0FFF
 https://en.wikipedia.org/wiki/List_of_Unicode_characters
 */







