/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 2 //10
#define tam2 5 //20

int main(int argc, char const *argv[])
{
	int matriz[tam1][tam2], soma[tam1];
	int i, j;

	// recebe o valor das matrizes 
	for (i = 0; i < tam1; i++)
	{
		for (j = 0; j < tam2; j++)
		{
			printf("\nLinha %d - Coluna %d: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}

	// realiza a soma das linhas das matrizes 
	for (i = 0; i < tam1; i++)
	{
		soma[i] = 0;
		for (j = 0; j < tam2; j++)
		{
			soma[i] += matriz[i][j];
		}
	}

	// multiplica cada valor da linha pela soma da linha 
	for (i = 0; i < tam1; i++)
	{
		for (j = 0; j < tam2; j++)
		{
			matriz[i][j] *= soma[i];
		}
	}

	// exibe o resultado final 
	for (i = 0; i < tam1; i++)
	{
		printf("\nLinha %d: ", i+1);
		for (j = 0; j < tam2; j++)
		{
			printf("\nMatriz [%d][%d] = %d", i+1, i+j, matriz[i][j]);
		}
	}	
		
	return 0;
}