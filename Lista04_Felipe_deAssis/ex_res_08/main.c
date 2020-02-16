/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex8, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int i;
  int numTermos, num1, num2, num3;
  printf("\nNumero de termos: ");
  scanf("%d%*c", &numTermos);
  num1 = 2;
  num2 = 7;
  num3 = 3;
  printf("\n%d", num1);
  printf("\n%d", num2);
  printf("\n%d", num3);
  i = 4;
  for (i = 4; i < numTermos; i++)
  {
    num1 *= 2;
    printf("\n%d", num1);
    i += 1;
    if (i != numTermos)
    {
      num2 *= 3;
      printf("\n%d", num2);
      i += 1;
      if (i != numTermos)
      {
        num3 *= 4;
        printf("\n%d", num3);
        i += 1;
      }
    }
  }
  return (EXIT_SUCCESS);
}
