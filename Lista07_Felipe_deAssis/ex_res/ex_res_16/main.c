/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 7

int main(int argc, char const *argv[])
{
	int matriz[tam][tam], maiorLinha[tam], menorColuna[tam];

	for (int i = 0; i < tam; i++)
	{
		maiorLinha[i] = matriz[i][0];
		menorColuna[i] = matriz[0][i];
		for (int j = 0; j < tam; j++)
		{
			printf("\n[%d][%d]= ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
			if (matriz[i][j] > maiorLinha[i])
			{
				maiorLinha[i] = matriz[i][j];
			}
			if (matriz[i][j] < menorColuna[j])
			{
				menorColuna[j] = matriz[j][i];
			}
			
		}
		
	}

	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam; j++)
		{
			printf("\n[%d][%d]= %d", i+1, j+1, matriz[i][j]);
		}
		
	}
	printf("\n----------------------------------------");

	printf("\nMaior elemento de cada linha: ");
	for (int i = 0; i < tam; i++)
	{
		printf("\n[%d]= %d", i+1, maiorLinha[i]);
	}
		
	printf("\nMenor elemento de cada coluna: ");
	for (int i = 0; i < tam; i++)
	{
		printf("\n[%d]= %d", i+1, menorColuna[i]);
	}
	
	return 0;
}