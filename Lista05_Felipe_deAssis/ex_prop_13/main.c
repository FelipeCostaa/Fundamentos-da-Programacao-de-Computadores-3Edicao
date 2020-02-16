/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex13, proposto*/

#include <stdio.h>
#include <stdlib.h>

#define tam 15

int main(int argc, char **argv)
{
  int idade;
  float peso, mediaPeso1, cont1 = 0, mediaPeso2, cont2 = 0, mediaPeso3, cont3 = 0, mediaPeso4, cont4 = 0;

  for (int i = 0; i < tam; i++)
  {
    printf("\n\tInforme os dados: ");
    printf("\n\t%dº pessoa: ", i + 1);
    printf("\nIdade: ");
    scanf("%d", &idade);
    printf("\nPeso: ");
    scanf("%f", &peso);
    printf("=============================================");

    if (idade > 1 && idade <= 10)
    {
      mediaPeso1 += peso;
      cont1++;
    }
    else if (idade > 11 && idade <= 20)
    {
      mediaPeso2 += peso;
      cont2++;
    }
    else if (idade > 21 && idade <= 30)
    {
      mediaPeso3 += peso;
      cont3++;
    }
    else
    {
      mediaPeso4 += peso;
      cont4++;
    }
  }
  mediaPeso1 /= cont1;
  mediaPeso2 /= cont2;
  mediaPeso3 /= cont3;
  mediaPeso4 /= cont4;

  printf("\n\tA media de peso nas idades entre 1 e 10 é %.2f", mediaPeso1);
  printf("\n\tA media de peso nas idades entre 11 e 20 é %.2f", mediaPeso2);
  printf("\n\tA media de peso nas idades entre 21 e 30 é %.2f", mediaPeso3);
  printf("\n\tA media de peso nas idades acima de 31 é %.2f", mediaPeso4);

  return (EXIT_SUCCESS);
}