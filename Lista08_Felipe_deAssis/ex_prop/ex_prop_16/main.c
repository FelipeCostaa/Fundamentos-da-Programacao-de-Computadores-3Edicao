/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

int soma(int vetor[], int T);

int main(int argc, char const *argv[])
{
	int vetor[TAM];

	printf("\nVetor inicial: ");
	for (int i = 0; i < TAM; i++)
	{
		vetor[i] = rand() % 1000;
		printf("\n[%d]= %d", i + 1, vetor[i]);
	}

	printf("\nA soma dos elementos do vetor é: %d", soma(vetor, TAM));

	return 0;
}

int soma(int vetor[], int T)
{
	int soma = 0;

	for (int i = 0; i < TAM; i++)
	{
		soma += vetor[i];
	}

	return soma;
}