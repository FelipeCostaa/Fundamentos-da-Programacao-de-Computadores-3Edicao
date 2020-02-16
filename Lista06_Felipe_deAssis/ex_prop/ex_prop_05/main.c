/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 10
#define tam2 5

int main(int argc, char const *argv[])
{
	int matriculasLogica[tam1], matriculasProgramacao[tam2];
  int matriculasRepetidas[tam1];
  int i, j;
  int cont;

  printf("\nInforme os dados: \n\nAlunos que cursam logica: ");
  for (i = 0; i < tam1; i++)
  {
    printf("\nMatricula: ");
    scanf("%d", &matriculasLogica[i]);
  }

  printf("\nAlunos que cursam programação: ");
  for (i = 0; i < tam2; i++)
  {
    printf("\nMatricula: ");
    scanf("%d", &matriculasProgramacao[i]);
  } 

  cont = 0;

  for (i = 0; i < tam1; i++)
  {
    for (j = 0; j < tam2; j++)
    {
      if (matriculasLogica[i] == matriculasProgramacao[j])
      {
        matriculasRepetidas[i] = matriculasLogica[i];
        cont++;
        if (cont > 0)
        {
          printf("\n%d - Matricula cadastradas nas duas disciplinas", matriculasRepetidas[i]);
        }
      }
    }
  }

	return 0;
}