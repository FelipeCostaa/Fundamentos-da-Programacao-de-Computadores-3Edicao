/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int substituicao(int vetor[], int T);

#define TAM 25

int main(int argc, char const *argv[])
{
	int vetor[TAM];

	srand(time(NULL));

	printf("\nVetor A: ");
	for (int i = 0; i < TAM; i++)
	{
		vetor[i] = (rand() % 50) +(-25);
		printf("\n[%d]= %d", i+1, vetor[i]);
	}

	substituicao(&vetor, TAM);
	for (int i = 0; i < TAM; i++)
	{
		printf("\n[%d]= %d", i+1, vetor[i]);
	}
	
	
	return 0;
}

int substituicao(int vetor[], int T)
{
	for (int i = 0; i < TAM; i++)
	{
		if (vetor[i] < 0)
		{
			vetor[i] = 0;
		}
		
	}
	
	return vetor;
}