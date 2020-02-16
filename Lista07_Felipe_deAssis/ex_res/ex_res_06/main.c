/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int a[4][5], b[5][2], c[4][2];
	int i, j, k, soma, mult;

	// preenche o primeiro vetor
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("\n[%d][%d]: ", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	}

	// preenche o segundo vetor
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("\n[%d][%d]: ", i+1, j+1);
			scanf("%d", &b[i][j]);			
		}
	}
	
	soma = 0;
	for (i = 0; i < 4; i++)
	{
		for (k = 0; k < 2; k++)
		{
			for (j = 0; j < 5; j++)
			{
				mult = a[i][j] * b[j][k];
				soma += mult;
			}
			c[i][k] = soma;
			soma = 0;
		}
	}
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("\n[%d][%d]= %d", i, j, c[i][j]);
		}
	}
		
	return 0;
}