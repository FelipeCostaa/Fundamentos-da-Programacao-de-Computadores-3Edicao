/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 5

int somaElementosMatriz(int a[TAM][TAM]);

int main(int argc, char const *argv[])
{
	int a[TAM][TAM], soma;

	srand(time(NULL));

	printf("\nMatriz A: ");
	for (int i = 0; i < TAM; i++)
	{
		for (int j = 0; j < TAM; j++)
		{
			a[i][j] = rand() % 100;
			printf("\n[%d][%d]= %d", i+1, j+1, a[i][j]);
		}
		
	}

	printf("\nA soma dos elementos da matriz é: %d", somaElementosMatriz(a));
	
	return 0;
}

int somaElementosMatriz(int a[TAM][TAM])
{
	int soma;

	for (int i = 0; i < TAM; i++)
	{
		for (int j = 0; j < TAM; j++)
		{
			soma += a[i][j];
		}
		
	}

	return soma;
}