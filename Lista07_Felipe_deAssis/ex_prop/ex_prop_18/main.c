/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 5

int main(int argc, char const *argv[])
{
	int matriz[tam][tam], somaDiagonalSecundaria = 0;

	printf("\nMatriz inicial: ");
	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam; j++)
		{
			matriz[i][j] = (rand()%100) + 1;

			printf("\n[%d][%d]= %d", i+1, j+1, matriz[i][j]);

			if (i + j == tam -1)
			{
				somaDiagonalSecundaria += matriz[i][j];
			}
			
		}
		
	}
	
	printf("\nSoma dos elementos da diagonal secundaria: %d", somaDiagonalSecundaria);
	
	return 0;
}