/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 30

void elementosMaiorQue0(int vetor[], int T);
void elementosMenorQue0(int vetor[], int T);

int main(int argc, char const *argv[])
{
	int vetor[TAM];
	srand(time(NULL));

	printf("\nVetor inicial gerado: ");
	for (int i = 0; i < TAM; i++)
	{
		vetor[i] = (rand() % 40) - 20;
		printf("\n[%d]= %d", i, vetor[i]);
	}

	elementosMaiorQue0(vetor, TAM);
	elementosMenorQue0(vetor, TAM);

	return 0;
}

void elementosMaiorQue0(int vetor[], int T)
{
	int cont = 0, a[cont];

	for (int i = 0; i < TAM; i++)
	{
		if (vetor[i] > 0)
		{
			a[i] = vetor[i];
			cont++;
		}
	}
	if (cont == 0)
	{
		printf("\nNão existem numeros positivos no vetor inicial.");
	}
	else
	{
		printf("\nVetor A: ");
		for (int i = 0; i < cont - 1; i++)
		{
			printf("\n[%d]= %d", i + 1, a[i]);
		}
	}
}

void elementosMenorQue0(int vetor[], int T)
{
	int cont = 0, b[cont];

	for (int i = 0; i < TAM; i++)
	{
		if (vetor[i] <= 0)
		{
			b[i] = vetor[i];
			cont++;
		}
	}
	if (cont == 0)
	{
		printf("\nNão existem numeros negativos ou iguais a zero no vetor inicial.");
	}
	else
	{
		printf("\nVetor B: ");
		for (int i = 0; i < cont - 1; i++)
		{
			printf("\n[%d]= %d", i + 1, b[i]);
		}
	}
}