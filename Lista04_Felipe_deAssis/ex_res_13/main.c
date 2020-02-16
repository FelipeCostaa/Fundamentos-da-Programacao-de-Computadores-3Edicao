/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex13, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int numCriancaNascidas, meses, tempoVida;
  float percentagemMasc, percentagemFem, percentagem24;
  char sexo;
  int i, contMasc, contFem, cont24;

  contFem = 0;
  contMasc = 0;
  cont24 = 0;

  printf("\nNumero de crianças nascidas no periodo: ");
  scanf("%d%*c", &numCriancaNascidas);

  for (i = 0; i < numCriancaNascidas; i++)
  {
    printf("\nInforme os dados da criança: ");
    printf("\nSexo (M ou F): ");
    scanf(" %c%*c", &sexo);
    printf("\nTempo de vida (em meses): ");
    scanf("%d%*c", &tempoVida);

    if (sexo == 'M')
    {
      contMasc++;
    }
    else if (sexo == 'F')
    {
      contFem++;
    }
    if (meses <= 24)
    {
      cont24++;
    }
  }
  if (numCriancaNascidas != 0)
  {
    percentagemMasc = contMasc * 100 / numCriancaNascidas;
    percentagemFem = contFem * 100 / numCriancaNascidas;
    percentagem24 = cont24 * 100 / numCriancaNascidas;
    printf("\n\tPercentagem de crianças do sexo masculino mortas %.2f", percentagemMasc);
    printf("\n\tPercentagem de crianças do sexo feminino mortas %.2f", percentagemFem);
    printf("\n\tPercentagem de crianças com 24 meses ou menos mortar %.2f", percentagem24);
  } 
  else 
  {
    printf("\n\tNenhuma criança digitada");
  }

  return (EXIT_SUCCESS);
}
