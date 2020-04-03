/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int maiorElementoAcimaDiagonalSecundaria(int matriz[][TAM], int T);

int main(int argc, char const *argv[])
{
	int matriz[TAM][TAM];

	srand(time(NULL));

	printf("\nMatriz inicial: ");
	for (int i = 0; i < TAM; i++)
	{
		for (int j = 0; j < TAM; j++)
		{
			matriz[i][j] = rand() % 100;
			printf("\n[%d][%d]= %d", i + 1, j + 1, matriz[i][j]);
		}
	}

	printf("\n\nO maior elemento acima da diagonal principal é: %d", maiorElementoAcimaDiagonalSecundaria(matriz, TAM));

	return 0;
}

int maiorElementoAcimaDiagonalSecundaria(int matriz[][TAM], int T)
{
	int maiorElemento = 0;

	for (int i = 0; i < TAM; i++)
	{
		for (int j = 0; j < TAM; j++)
		{
			if (i == j)
			{
				if (i > 0)
				{
					if (matriz[i - 1][j] > maiorElemento)
					{
						maiorElemento = matriz[i - 1][j];
					}
				}
			}
		}
	}

	return maiorElemento;
}