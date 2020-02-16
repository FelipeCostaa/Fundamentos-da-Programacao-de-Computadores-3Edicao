/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex14, resolvido*/

/* REFAZER */

#include <stdio.h>
#include <stdlib.h>

#define tam 5
#define tam2 64

int main(int argc, char **argv)
{
  float salario[tam], tempoServico[tam];
  char nome[tam2];

  //recebe os dados
  printf("\nInforme os dados dos funcionario: ");
  for (int i = 0; i < tam; i++)
  {
    printf("\nNome: ");
    scanf(" %s*%c", &nome[i]);
    printf("\nSalario: ");
    scanf("%f", &salario[i]);
    printf("\nTempo de Serviço (em anos): ");
    scanf("%f", &tempoServico[i]);
    printf("------------------------------------------\n");
  }
  //calcula quem tera aumento no salario
  for (int i = 0; i < tam; i++)
  {
    printf("\nNão terão aumento: ");
    if (tempoServico <= 5 || salario >= 800)
    {
      printf("%s", nome[i]);
    }
  }

  return (EXIT_SUCCESS);
}
