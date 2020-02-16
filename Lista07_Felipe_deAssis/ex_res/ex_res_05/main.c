/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 2 //4
#define tam2 4 //7

int main(int argc, char const *argv[])
{
	int matriz[tam1][tam2], maior, menor, menorDaLinha, coluna;
	int i, j;
	
	// recebe os valores 
	for (i = 0; i < tam1; i++)
	{
		for (j = 0; j < tam2; j++)
		{
			printf("\n[%d][%d]: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	// calcula o menor 
	menor = matriz[0][0];
	menorDaLinha = 0;
	for (i = 0; i < tam1; i++)
	{
		for (j = 0; j < tam2; j++)
		{
			if (matriz[i][j] < menor)
			{
				menor = matriz[i][j];
				menorDaLinha = i;
			}
		}
	}
	
	// calcula o maior 
	maior = matriz[menorDaLinha][0];
	coluna = 0;
	for (j = 0; j < tam2; j++)
	{
		if (matriz[menorDaLinha][j] > maior)
		{
			maior = matriz[menorDaLinha][j];
			coluna = j;
		}
	}

	printf("\nMINMAX\t[%d][%d]: %d", menorDaLinha, coluna, maior);

	return 0;
}