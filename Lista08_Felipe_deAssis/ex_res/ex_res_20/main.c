/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 12

void mediaAritmetica(int matriz[tam][tam]);

int main(int argc, char const *argv[])
{
	int matriz[tam][tam];

	srand(time(NULL));

	printf("\nMatriz inicial: ");
	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam; j++)
		{
			matriz[i][j] = rand() % 100;
			printf("\n[%d][%d]= %d", i+1, j+1, matriz[i][j]);
		}
		
	}
	
	mediaAritmetica(matriz);
	
	return 0;
}

void mediaAritmetica(int matriz[tam][tam])
{
	float media = 0;
	int cont;

	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam; j++)
		{
			if (i == j)
			{
				if (i == tam -1)
				{
					break;
				}

				media += matriz[i][j];
				cont++;

			}
			
		}
		
	}

	media /= cont;
	return printf("\nA media dos elementos abaixo da diagonal principal é %.2f", media);
	
}