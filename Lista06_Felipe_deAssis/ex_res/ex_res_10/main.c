/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex10, resolvido*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define questoes 8
#define alunos 10

int main(int argc, char **argv)
{
  char gabarito[questoes], resposta[questoes];
  float pontos, totalAp, percentualAp;
  int i, j, num;

  for (i = 0; i < alunos; i++)
  {
    printf("\nInforme a resposta da %dª questão: ", i + 1);
    scanf(" %c*%c", &gabarito[i]);
  }

  totalAp = 0;
  printf("\nCorreção das provas: ");
  for (i = 0; i < alunos; i++)
  {
    printf("\n%dº Aluno: ", i + 1);
    printf("\nInforme o seu numero: ");
    scanf("%d", &num);
    pontos = 0;
    printf("\nInforme as respostas do aluno: ");
    for (j = 0; j < questoes; j++)
    {
      printf("\n%dª Questão: ", j + 1);
      scanf(" %c*%c", &resposta[j]);
      if (resposta[j] == gabarito[j])
      {
        pontos = pontos + 1;
      }
      printf("\n\tA nota do aluno foi %.2f", pontos);
      if (pontos >= 6)
      {
        totalAp = totalAp + 1;
      }
    }
  }
  percentualAp = totalAp * 100 / alunos;
  printf("\n\tO percentual de alunos aprovados é %.2f", percentualAp);

  return (EXIT_SUCCESS);
}
