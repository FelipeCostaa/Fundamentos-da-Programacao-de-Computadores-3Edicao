/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex15, proposto*/

#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main(int argc, char **argv)
{
  char sexo, resposta;
  int contSim = 0, contNao = 0, contSimMulheres = 0;

  printf("\nInforme os dados da pesquisa: ");

  for (int i = 0; i < tam; i++)
  {
    printf("\nF - FEMININO \nM - MASCULINO");
    printf("\nQual o seu sexo: ");
    scanf(" %c%*c", &sexo);
    printf("\nS - SIM \nN - NÃO");
    printf("\nGostou do produto? ");
    scanf(" %c%*c", &resposta);
    printf("=======================================");
    if (resposta == 'S')
    {
      contSim++;
      if (sexo == 'F')
      {
        contSimMulheres++;
      }
      
    }
    else if (resposta == 'N')
    {
      contNao++;
    }
    
  }
  printf("\n\tNumero de pessoas que responderam sim: %d", contSim);
  printf("\n\tNumero de pessoas que responderam não: %d", contNao);
  printf("\n\tNumero de mulheres que responderam sim: %d", contSimMulheres);

  return (EXIT_SUCCESS);
}