/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 6

int menorValorDiagonalSec(int a[tam][tam]);

int main(int argc, char const *argv[])
{
	int a[tam][tam];
	srand(time(NULL));

	printf("\nMatriz A[6][6]: ");
	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam; j++)
		{
			a[i][j] = rand() % 100;
			printf("\n[%d][%d]= %d", i+1, j+1, a[i][j]);
		}
		
	}

	printf("\n\nMenor elemento da diagonal secundaria: %d", menorValorDiagonalSec(a));
	
	return 0;
}

int menorValorDiagonalSec(int a[tam][tam])
{
	int menorElemento = 99999; 

	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam; j++)
		{
			if (i+j == tam - 1)
			{
				if (a[i][j] < menorElemento)
				{
					menorElemento = a[i][j];
				}
				
			}
			
		}
		
	}
	
	return menorElemento;
}