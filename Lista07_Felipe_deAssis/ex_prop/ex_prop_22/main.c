/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 6
#define tam2 10

int main(int argc, char const *argv[])
{
	int matriz[tam1][tam2], somaColunas[tam2], cont = 0;

	srand(time(NULL));

	printf("\nMatriz inicial: ");
	for (int i = 0; i < tam1; i++)
	{
		somaColunas[i] = 0;
		cont = 0;
		for (int j = 0; j < tam2; j++)
		{
			matriz[i][j] = (rand() % 100) + 1;
			printf("\n[%d][%d]= %d", i+1, j+1, matriz[i][j]);

			somaColunas[j] += matriz[cont][j];
			cont++;
		}
		
	}
	
	printf("\nSomas das colunas: ");
	for (int i = 0; i < tam2; i++)
	{
		printf("\n%dª coluna: %d", i+1, somaColunas[i]);
	}
	
	
	return 0;
}

// Crie um programa que preencha uma matriz 6  10, some as colunas individualmente e acumule as so-
// mas na 7 a linha da matriz. O programa deverá mostrar o resultado de cada coluna.