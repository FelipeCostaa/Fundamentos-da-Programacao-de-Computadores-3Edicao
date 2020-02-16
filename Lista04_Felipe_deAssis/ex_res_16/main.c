/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex16, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  float base, altura, area;

  do
  {
    printf("\nBase: ");
    scanf("%f%*c", &base);
    printf("\nAltura: ");
    scanf("%f%*c", &altura);
  } while (base == 0 || altura == 0);
  area = base * altura / 2;
  printf("\n\tArea: %.2f", area);

  return (EXIT_SUCCESS);
}
