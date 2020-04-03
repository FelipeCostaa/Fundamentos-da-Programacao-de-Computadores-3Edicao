/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 10
#define C 5

void gerarMatriz(int matriz[L][C]);
void imprimirMatriz(int matriz[L][C]);
int somaElementosAbaixoSextaLinha(int matriz[L][C]);

int main(int argc, char const *argv[])
{
	int matriz[L][C];

	gerarMatriz(matriz);

	printf("\nMatriz gerada: ");
	imprimirMatriz(matriz);

	printf("\nA soma dos elementos abaixo da linha 6 é: %d", somaElementosAbaixoSextaLinha(matriz));

	return 0;
}

void gerarMatriz(int matriz[L][C])
{
	srand(time(NULL));

	for (int i = 0; i < L; i++)
	{
		for (int j = 0; j < C; j++)
		{
			matriz[i][j] = rand() % 100;
		}
	}
}

void imprimirMatriz(int matriz[L][C])
{
	for (int i = 0; i < L; i++)
	{
		for (int j = 0; j < C; j++)
		{
			printf("\n[%d][%d]= %d", i + 1, j + 1, matriz[i][j]);
		}
	}
}

int somaElementosAbaixoSextaLinha(int matriz[L][C])
{
	int soma = 0;
	for (int i = 0; i < L; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (L > 6)
			{
				soma += matriz[i][j];
			}
		}
	}

	return soma;
}