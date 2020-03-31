/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15

int pares(int vetor[], int T);

int main(int argc, char const *argv[])
{
	int vetor[TAM];

	srand(time(NULL));

	printf("\nVetor inicial: ");
	for (int i = 0; i < TAM; i++)
	{
		vetor[i] = rand() % 100;
		printf("\n[%d]= %d", i + 1, vetor[i]);
	}

	printf("\n\nQuantidade de valores pares no vetor: %d", pares(vetor, TAM));

	return 0;
}

int pares(int vetor[], int T)
{
	int quantidade = 0;

	for (int i = 0; i < TAM; i++)
	{
		if (vetor[i] % 2 == 0)
		{
			quantidade++;
		}
	}

	return quantidade;
}