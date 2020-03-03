/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 20
#define tam2 10

int main(int argc, char const *argv[])
{
	int matriz[tam1][tam2], somaColuna[tam2];

	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			printf("\n[%d][%d]= ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
		
	}
	system("clear");

	// soma a coluna 
	for (int i = 0; i < tam1; i++)
	{
		somaColuna[i] = 0;
		for (int j = 0; j < tam2; j++)
		{			
			somaColuna[i] += matriz[j][i];
		}
		
	}

	// // exibe a soma das colunas
	// for (int i = 0; i < tam2; i++)
	// {
	// 	printf("\nSoma da %dª coluna: ", i+1);
	// 	printf("%d\t", somaColuna[i]);	
	// }
	
	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			matriz[i][j] *= somaColuna[i];
		}
		
	}

	printf("\nMatriz resultante: ");
	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			printf("\n[%d][%d]= %d", i+1, j+1, matriz[i][j]);
		}
		
	}
	
	return 0;
}