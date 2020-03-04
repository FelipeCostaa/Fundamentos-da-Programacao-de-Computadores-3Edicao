/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam1 3
#define tam2 8

int main(int argc, char const *argv[])
{
	int matriz1[tam1][tam2], matriz2[tam1][tam2], soma[tam1][tam2], diferenca[tam1][tam2];

	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			do
			{
				matriz1[i][j] = (rand()%100) + 1;
			} while (matriz1[i][j] <= 0);
			
		}
		
	}
	
	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			do
			{
				matriz2[i][j] = (rand()%100) + 1;
			} while (matriz2[i][j] <= 0);
			
		}
		
	}

	printf("\nMatriz resultante da soma da matriz1 e matriz2: ");
	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			soma[i][j] = matriz1[i][j] + matriz2[i][j];
			printf("\n[%d][%d]= %d", i+1, j+1, soma[i][j]);
		}
		
	}
	
	printf("\nDiferença das duas matrizes: ");
	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			diferenca[i][j] = matriz1[i][j] - matriz2[i][j];
			printf("\n[%d][%d]= %d", i+1, j+1, diferenca[i][j]);
		}
		
	}
	
	
	return 0;
}