/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex14, proposto*/

#include <stdio.h>
#include <stdlib.h>

#define tam 15

int main(int argc, char **argv)
{
  int idade, opniaoFilme, cont2 = 0, cont3 = 0;
  float mediaIdadeOtimo = 0, cont1 = 0, mediaBom = 0, mediaRegular = 0;

  for (int i = 0; i < tam; i++)
  {
    printf("\n\tResponda ao questionario: ");
    printf("\n\t%dº pessoa:", i + 1);
    printf("\nIdade: ");
    scanf("%d", &idade);
    printf("\n1 - Regular\n2 - Bom \n3 - Otimo");
    printf("\nOpnião sobre o filme ");
    scanf("%d", &opniaoFilme);
    printf("========================================");
    if (opniaoFilme == 3)
    {
      mediaIdadeOtimo += idade;
      cont1++;
    }
    else if (opniaoFilme == 2)
    {
      mediaBom += opniaoFilme;
      cont3++;
    }
    else if (opniaoFilme == 1)
    {
      mediaRegular += opniaoFilme;
      cont2++;
    }
  }
  mediaIdadeOtimo /= cont1;
  printf("\n\tMedia de idade de quem respondeu otimo: %.2f", mediaIdadeOtimo);
  printf("\n\tQuantidade de pessoas que responderam regular %d", cont2);

  return (EXIT_SUCCESS);
}