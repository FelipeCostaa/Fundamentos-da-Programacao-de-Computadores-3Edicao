/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define tam1 15
#define tam2 5

#define tam3 64

int main(int argc, char const *argv[])
{
  setlocale(LC_ALL, "Portuguese");

	float notas[tam1][tam2], media[tam1], mediaClasse;
	char nomes[tam1][tam3];

	for (int i = 0; i < tam1; i++)
	{
		media[i] = 0;

		printf("\n%dº aluno: ", i+1);
		printf("\nNome: ");
		setbuf(stdin, NULL);
		gets(nomes[i]);

		for (int j = 0; j < tam2; j++)
		{
			printf("\nNota da %dª prova: ", j+1);
			scanf("%f", &notas[i][j]);
			media[i] += notas[i][j];
			mediaClasse += notas[i][j];
		}
		media[i] = media[i] / tam2;
		printf("\n------------------------");
	}

	mediaClasse = mediaClasse / (tam1 * tam2);

	for (int i = 0; i < tam1; i++)
	{
		printf("\n%dº aluno: %s", i+1, nomes[i]);
		printf("\nMédia: %.2f", media[i]);
		if (media[i] < 4)
		{
			printf("\nSituação: Reprovado");
		}
		else if (media[i] < 6)
		{
			printf("\nSituação: Exame");			
		}
		else
		{
			printf("\nSituação: Aprovado");
		}
		printf("\n------------------------");
	}
	printf("\n\nMedia da classe: %.2f", mediaClasse);
	
	return 0;
}