/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex18, resolvido*/

#include <stdio.h>
#include <stdlib.h>

#define tam1 20

/*Faça um programa que receba o número sorteado por um dado em vinte jogadas. 
/*Mostre os números sorteados e a frequência com que apareceram*/

int main(int argc, char **argv)
{
  int dado[tam1], num = 0;
  int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0; // n corresponde a cada lado do dado
  int i;
  //sorteia os numeros
  for (i = 0; i < tam1; i++)
  {
    num = 1 + (rand() % 6);
    dado[i] = num;
  }
  //exibe os numeros sorteados
  printf("\n\tOs numeros sorteados foram: \n");
  for (i = 0; i < tam1; i++)
  {
    printf("\t %d", dado[i]);
    if (dado[i] == 1)
    {
      n1 += 1;
    }
    else if (dado[i] == 2)
    {
      n2 += 1;
    }
    else if (dado[i] == 3)
    {
      n3 += 1;
    }
    else if (dado[i] == 4)
    {
      n4 += 1;
    }
    else if (dado[i] == 5)
    {
      n5 += 1;
    }
    else if (dado[i] == 6)
    {
      n6 += 1;
    }
  }
  printf("\n\n\tO numero 1 foi sorteado um total de %d vezes", n1);
  printf("\n\tO numero 2 foi sorteado um total de %d vezes", n2);
  printf("\n\tO numero 3 foi sorteado um total de %d vezes", n3);
  printf("\n\tO numero 4 foi sorteado um total de %d vezes", n4);
  printf("\n\tO numero 5 foi sorteado um total de %d vezes", n5);
  printf("\n\tO numero 6 foi sorteado um total de %d vezes", n6);

  return (EXIT_SUCCESS);
}
