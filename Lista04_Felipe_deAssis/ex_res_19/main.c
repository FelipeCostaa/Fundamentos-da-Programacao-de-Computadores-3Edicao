/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex19, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int m, n, soma;
  int i;

  do
  {
    printf("\nInforme M: ");
    scanf("%d", &m);
    printf("\nInforme N: ");
    scanf("%d", &n);

    for (i = m; i < n; i++)
    {
      soma += 1;
    }
    printf("\n\tA soma dos numeros entre %d e %d é %d", m, n, soma);
    printf("\n\n");
    soma = 0;

  } while (m < n);

  return (EXIT_SUCCESS);
}
