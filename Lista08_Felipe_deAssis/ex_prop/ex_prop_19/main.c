/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void interseccao(int vetor1[], int vetor2[], int T);

int main(int argc, char const *argv[])
{
	int vetor1[TAM], vetor2[TAM];

	srand(time(NULL));

	for (int i = 0; i < TAM; i++)
	{
		vetor1[i] = rand() % 25;
		vetor2[i] = rand() % 25;
	}

	printf("\nVetor 1: ");
	for (int i = 0; i < TAM; i++)
	{
		printf("\n[%d]= %d", i + 1, vetor1[i]);
	}

	printf("\n\nVetor 2: ");
	for (int i = 0; i < TAM; i++)
	{
		printf("\n[%d]= %d", i + 1, vetor2[i]);
	}

	interseccao(vetor1, vetor2, TAM);

	return 0;
}

void interseccao(int vetor1[], int vetor2[], int T)
{
	int vetor3[TAM], cont = 0;

	for (int i = 0; i < TAM; i++)
	{
		for (int j = 0; j < TAM; j++)
		{
			if (vetor1[i] == vetor2[j])
			{
				vetor3[cont] = vetor1[i];
				cont++;
			}
		}
	}

	if (cont == 0)
	{
		printf("\n\nNão a números iguais nos vetores.");
	}
	else
	{
		printf("\n\nOs valores contidos no vetor 1 e 2 são: ");
		for (int i = 0; i < cont - 1; i++)
		{
			printf("\n[%d]= %d", i + 1, vetor3[i]);
		}
	}
}