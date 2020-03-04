/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define linha 2
#define coluna 3

int main(int argc, char const *argv[])
{
	int matriz[linha][coluna];

	for (int i = 0; i < linha; i++)
	{
		for (int j = 0; j < coluna; j++)
		{
			do
			{
				matriz[i][j] = (rand() % 100) + 1;
			} while (matriz[i][j] <= 0);
			 
		}
		
	}
	
	printf("\nValores que não estão no intervalo [5, 15]: ");
	for (int i = 0; i < linha; i++)
	{
		for (int j = 0; j < coluna; j++)
		{
			if (matriz[i][j] < 5)
			{
				printf("\n[%d][%d]= %d", i+1, j+1, matriz[i][j]);
			}
			if (matriz[i][j] > 15)
			{
				printf("\n[%d][%d]= %d", i+1, j+1, matriz[i][j]);
			}
			
		}
		
	}
	
	
	return 0;
}