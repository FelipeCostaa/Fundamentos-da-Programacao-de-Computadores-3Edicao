/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 7
#define tam2 64 // quantidade de caracteres

int main(int argc, char const *argv[])
{
	char nomeAluno[tam1][tam2];
  float mediaAluno[tam1];
  int i;
  float maiorMedia = 0;
  int posicaoMaiorMedia, posicaoReprovado;

  printf("\nInforme os dados: ");
  for (i = 0; i < tam1; i++)
  {
    setbuf(stdin, NULL);
    printf("\nNome do %dº aluno: ", i + 1);
    scanf("%[^\n]s", &nomeAluno[i]);
    setbuf(stdin, NULL);
    printf("\nMedia: ");
    scanf("%f", &mediaAluno[i]);
    system("clear");
    if (mediaAluno[i] > maiorMedia)
    {
      maiorMedia = mediaAluno[i];
      posicaoMaiorMedia = i;
    }
    if (mediaAluno[i] < 7) // nao compreendi a logica para reprovados
    {
      printf("\nO aluno %s naõ atingiu a media.", nomeAluno[i]);
      printf("\nDevera tirar 5 pts na recuperação.\n\n");
    }
  }

  printf("\nAluno com maior media %s - %.2fpts.", nomeAluno[posicaoMaiorMedia], maiorMedia);

  
	return 0;
}