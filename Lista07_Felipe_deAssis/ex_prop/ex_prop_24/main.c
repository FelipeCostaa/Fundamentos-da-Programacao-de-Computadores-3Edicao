/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

// tem de ser finalizado

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 4
#define tam2 5

int main(int argc, char const *argv[])
{
	int matriz[tam1][tam2], somaColuna[tam2], cont = 0;

	srand(time(NULL));

	printf("\nMatriz inicial: ");
	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			matriz[i][j] = (rand() % 100);
			printf("\n[%d][%d]= %d", i+1, j+1, matriz[i][j]);

			somaColuna[j] += matriz[cont][j];
			cont++;
		}
		
	}
	
	printf("\n");
	for (int i = 0; i < tam2; i++)
	{
		if (somaColuna[i] > 10)
		{
			printf("\n[%d]= %d", i+1, somaColuna[i]);
		}
		
	}
	

	return 0;
}