/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 10

int main(int argc, char const *argv[])
{
	int matriz[tam][tam], aux;
	int i, j;

	// preenche a matriz 10x10
	for (i = 0; i < tam; i++)
	{
		for (j = 0; j < tam; j++)
		{
			printf("\n[%d][%d]= ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}	

	// troca a linha 2 com a linha 8
	for (i = 0; i < tam; i++)
	{
		aux = matriz[2][i];
		matriz[2][i] = matriz[8][i];
		matriz[8][i] = aux;
	}
	
	// troca a coluna 4 com a coluna 10
	for (i = 0; i < tam; i++)
	{
		aux = matriz[i][4];
		matriz[i][4] = matriz[i][10];
		matriz[i][10] = aux;
	}
	
	// a diagonal principal com a diagonal secundaria
	j = 10;
	for (i = 0; i < tam; i++)
	{
		aux = matriz[i][i];
		matriz[i][i] = matriz[i][j];
		matriz[i][j] = aux;
		j--;
	}
	
	// linha 5 com a coluna 10
	for (i = 0; i < tam; i++)
	{
		aux = matriz[5][j];
		matriz[5][j] = matriz[j][10];
		matriz[j][10] = aux;
	}

	// exibe a matrir final
	for (i = 0; i < tam; i++)
	{
		printf("\n");
		for (j = 0; j < tam; j++)
		{
			printf("M[%d][%d]= %d\t", i, j, matriz[i][j]);
		}
	}
		
	return 0;
}