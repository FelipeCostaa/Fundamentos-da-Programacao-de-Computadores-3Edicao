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
	int matriz[tam][tam], cont = 0;
	float media;

	srand(time(NULL));

	printf("\nMatriz inicial: ");
	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam; j++)
		{
			do
			{
				matriz[i][j] = (rand() % 100) + 1;
			} while (matriz[i][j] <= 0);
			printf("\n[%d][%d]= %d", i+1, j+1, matriz[i][j]);

			if (i == j)
			{
				media += matriz[i][j];
				cont++;
			}
			
		}
		
	}
	media /= cont;
	printf("\nA media dos elementos da diagonal principal é: %.2f", media);
	
	return 0;
}