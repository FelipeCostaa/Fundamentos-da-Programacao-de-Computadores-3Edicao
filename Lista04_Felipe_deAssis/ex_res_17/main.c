/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex17, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  float salCarlos, salJoao, poupanca = 0.02, rendaFixa = 0.05;
  int meses = 0;

  printf("\nInforme o salario do Carlos: R$");
  scanf("%f%*c", &salCarlos);

  salJoao = salCarlos / 3;
  printf("\n\tSalario João R$%.2f", salJoao);

  while (salJoao < salCarlos)
  {
    salCarlos = salCarlos + (salCarlos * poupanca);
    salJoao = salJoao + (salJoao * rendaFixa);
    meses = meses + 1;
  }
  printf("\n\tQuantidade de meses %d", meses);

  return 0;
}
