/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex7, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  printf("\n\tMostra os 8 primeiros termos da sequencia de Fibonaci\n");
  int i;
  int num1, num2, resultado;
  num1 = 0;
  num2 = 1;
  printf("\n\t%d", num1);
  printf("\n\t%d", num2);
  for (i = 0; i < 8; i++)
  {
    resultado = num1 + num2;
    printf("\n\t%d", resultado);
    num1 = num2;
    num2 = resultado;
  }
  return 0;
}
