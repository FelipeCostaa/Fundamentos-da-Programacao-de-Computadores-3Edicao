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
	int matriz[tam][tam], maior = 0, diagonalPrincipal[tam];

	srand(time(NULL));

	printf("\nMatriz inicial: ");
	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam; j++)
		{
			matriz[i][j] = (rand()%100) + 1;

			if (matriz[i][j] > maior)
			{
				maior = matriz[i][j];
			}
			if (i == j) 
			{
				diagonalPrincipal[i] = matriz[i][j];
			}
			
			printf("\n[%d][%d]= %d", i+1, j+1, matriz[i][j]);
		}
		
	}
	
	printf("\n\nMatriz resultante: ");
	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam; j++)
		{

			if (i == j)
			{
				diagonalPrincipal[i] *= maior;
				matriz[i][j] = diagonalPrincipal[i];
			}

			// matriz resultante
			printf("\n[%d][%d]= %d", i+1, j+1, matriz[i][j]);
		}
		
	}
	
	return 0;
}