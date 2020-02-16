/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex18, resolvido*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv)
{
  float num = 1, quadrado, cubo, raiz;

  while (num > 0)
  {
    printf("\nInforme um numero para saber o seu quadrado, seu cubo e sua raiz quadrada: ");
    scanf("%f%*c", &num);
    printf("\n\tNumero digitado: %.2f", num);
    quadrado = pow(num, 2);
    printf("\n\t%.2f elevado ao quadrado é %.2f", num, quadrado);
    cubo = pow(num, 3);
    printf("\n\t%.2f elevado ao cubo é %.2f", num, cubo);
    raiz = sqrt(num);
    printf("\n\tRaiz quadrade de %.2f é %.2f", num, raiz);
    printf("\nSe deseja sair do programa digite 0 e se deseja continuar digite 1: ");
    scanf("%f%*c", &num);
  }

  return (EXIT_SUCCESS);
}
