/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 3
#define PROVAS 4

void medias(float notas[][PROVAS], float *media);
void recuperacao(float *media, int *numAlunos);

int main(int argc, char const *argv[])
{
	int numAlunos[TAM];
	float notas[TAM][PROVAS], media[TAM];

	for (int i = 0; i < TAM; i++)
	{
		printf("\nInforme o numero do aluno: ");
		printf("\n%dº Aluno: ", i + 1);
		scanf("%d", &numAlunos[i]);

		printf("\nInforme as notas: ");
		for (int j = 0; j < PROVAS; j++)
		{
			printf("\n%dª Prova: ", j + 1);
			scanf("%f", &notas[i][j]);
		}
	}

	medias(notas, media);

	printf("\nA media das notas é: ");
	for (int i = 0; i < TAM; i++)
	{
		printf("\nMedia %dº aluno: %.2f", i + 1, media[i]);
	}

	recuperacao(media, numAlunos);

	return 0;
}

void medias(float notas[][PROVAS], float *media)
{
	for (int i = 0; i < TAM; i++)
	{
		for (int j = 0; j < PROVAS; j++)
		{
			media[i] += notas[i][j];
			if (i == 3)
			{
				media[i] /= TAM;
			}
		}
	}
}

void recuperacao(float *media, int *numAlunos)
{
	for (int i = 0; i < TAM; i++)
	{
		if (media[i] < 6)
		{
			printf("\nAluno de numero %d está de recuperação, sua nota media é: %2.f", numAlunos[i], media[i]);
		}
	}
}