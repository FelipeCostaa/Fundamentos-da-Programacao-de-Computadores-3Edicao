/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex11, resolvido*/

#include <stdio.h>
#include <stdlib.h>

#define tam 12

int main(int argc, char **argv)
{
  float temperaturaMedia[tam], maiorTempAno, menorTempAno, maiorTempMes, menorTempMes;
  int i;

  printf("\nInforme a temperatura media dos meses: ");
  for (i = 1; i <= tam; i++)
  {
    printf("\nMes %d", i);
    printf("\nTemperatura: ");
    scanf("%f", &temperaturaMedia[i]);
    if (i == 1)
    {
      maiorTempAno = temperaturaMedia[i];
      menorTempAno = temperaturaMedia[i];
      maiorTempMes = i;
      menorTempMes = i;
    }
    else
    {
      if (temperaturaMedia[i] > maiorTempAno)
      {
        maiorTempAno = temperaturaMedia[i];
        maiorTempMes = i;
      }
      if (temperaturaMedia[i] < menorTempAno)
      {
        menorTempAno = temperaturaMedia[i];
        menorTempMes = i;
      }
    }
  }
  printf("\n\tA maior temperatura foi: %.2fºC", maiorTempAno);
  printf("\n\tNo mês de: ");

  if (maiorTempMes = 1)
  {
    printf("\tJaneiro");
  }
  else if (maiorTempMes = 2)
  {
    printf("\tFevereiro");
  }
  else if (maiorTempMes = 3)
  {
    printf("\tMarço");
  }
  else if (maiorTempMes = 4)
  {
    printf("\tAbril");
  }
  else if (maiorTempMes = 5)
  {
    printf("\tMaio");
  }
  else if (maiorTempMes = 6)
  {
    printf("\tJunho");
  }
  else if (maiorTempMes = 7)
  {
    printf("\tJulho");
  }
  else if (maiorTempMes = 8)
  {
    printf("\tAgosto");
  }
  else if (maiorTempMes = 9)
  {
    printf("\tSetembro");
  }
  else if (maiorTempMes = 10)
  {
    printf("\tOutubro");
  }
  else if (maiorTempMes = 11)
  {
    printf("\tNovembro");
  }
  else if (maiorTempMes = 12)
  {
    printf("\tDezembro");
  }

  return (EXIT_SUCCESS);
}
