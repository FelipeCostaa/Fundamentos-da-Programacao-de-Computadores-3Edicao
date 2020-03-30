/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 8

void verificaNumPositivoNegativo(int vetor[], int T);

int main(int argc, char const *argv[])
{
	int vetor[TAM];

	srand(time(NULL));

	printf("\nVetor inicial gerado: ");
	for (int i = 0; i < TAM; i++)
	{
		vetor[i] = (rand() % 51) +(-25);
		printf("\n[%d]= %d", i+1, vetor[i]);
	}

	printf("\n\n");

	verificaNumPositivoNegativo(vetor, TAM);
	
	return 0;
}

void verificaNumPositivoNegativo(int vetor[], int T)
{
	int contP = 0, contN = 0, positivo[TAM], negativo[TAM];

	for (int i = 0; i < TAM; i++)
	{
		if (vetor[i] < 0)
		{
			negativo[contN] = vetor[i];
			contN++;
		}
		else
		{
			positivo[contP] = vetor[i];
			contP++;
		}
		
	}

	if (contP == 0)
	{
		printf("\nNão existem numeros positivos no vetor.");
	}
	else
	{
		printf("\nNumeros positivos do vetor.");
		for (int i = 0; i < contP; i++)
		{
			printf("\n[%d]= %d", i+1, positivo[i]);
		}
		
	}
	
	if (contN == 0)
	{
		printf("\nNão existem numeros negativos no vetor.");
	}
	else
	{
		printf("\nNumeros negativos do vetor.");
		for (int i = 0; i < contN; i++)
		{
			printf("\n[%d]= %d", i+1, negativo[i]);
		}
		
	}

	return;
}