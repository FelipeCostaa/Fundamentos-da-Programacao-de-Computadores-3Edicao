/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex10, proposto*/

#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main(int argc, char **argv)
{
  int num, div1, div2, div3, somaPrimos, somaPares;

  for (int i = 0; i < tam; i++)
  {
    printf("\nInforme o %dº numero: ", i+1);
    scanf("%d", &num);

    //soma os numeros primos
    div1 = num % num;
    div2 = num % 1;
    if (div1 == 1 && div2 == num)
    {
      somaPrimos += num;
    }
    //soma numeros pares
    div3 = num % 2;
    if (div3 == 0)
    {
      somaPares++;
    }
  }
  printf("\n\tA soma dos numeros pares é %d", somaPares);
  printf("\n\tA soma dos numeros primos é %d", somaPrimos);

  return (EXIT_SUCCESS);
}