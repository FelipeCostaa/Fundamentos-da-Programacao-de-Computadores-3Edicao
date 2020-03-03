/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam1 4
#define tam2 6

int main(int argc, char const *argv[])
{
	int matriz1[tam1][tam2], matriz2[tam2][tam1], soma;
	int somaLinha[tam1], somaColuna[tam1];

	srand(time(NULL));

	// preenche a matriz1 
	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			do
			{
				matriz1[i][j] = (rand() % 100) + 1; // gera numeros aleatorios
			} while (matriz1[i][j] <= 0);
			
			somaLinha[i] += matriz1[i][j];
		}
		
	}
	
	// preenche a matriz2
	for (int i = 0; i < tam2; i++)
	{
		for (int j = 0; j < tam1; j++)
		{
			do
			{
				matriz2[i][j] = (rand() % 100) + 1; // gera numeros aleatorios
			} while (matriz2[i][j] <= 0);
			
			somaColuna[j] = matriz1[j][i];
		}
		
	}

	printf("\nMatriz 01: \n");
	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			printf("%d\t", matriz1[i][j]);
		}
		
	}

	printf("\n\n");
	
	printf("\nMatriz 02: \n");
	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			printf("%d\t", matriz2[i][j]);
		}
		
	}

	printf("\n\n\n");
	// soma das linhas da matriz1 com as colunas da matriz2
	printf("\nSoma das linhas da matriz1 com as colunas da matriz2: ");
	for (int i = 0; i < tam1; i++)
	{
		soma = somaLinha[i] + somaColuna[i];
		printf("\nSoma %d: %d", i+1);
	}
	

	return 0;
}