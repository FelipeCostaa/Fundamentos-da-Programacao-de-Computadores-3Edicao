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
	int matriz[tam][tam], somaLinhas[tam], somaColunas[tam];

	srand(time(NULL));
	
	printf("\nMatriz Inicial: ");
	for (int i = 0; i < tam; i++)
	{ 
		somaLinhas[i] = 0;
		somaColunas[i] = 0;
		
		for (int j = 0; j < tam; j++)
		{
			do
			{
				matriz[i][j] = (rand() % 100) + 1;
			} while (matriz[i][j] <= 0);
			
			printf("\n[%d][%d]= %d", i+1, j+1, matriz[i][j]);

			somaLinhas[i] += matriz[i][j];

			somaColunas[j] += matriz[j][j];
		}
		
	}
	printf("\n\nVetor com a soma das linhas: ");
	for (int i = 0; i < tam; i++)
	{
		printf("\n%dª linha: %d", i+1, somaLinhas[i]);
	}

	printf("\n\nVetor com a soma das colunas: ");
	for (int j = 0; j < tam; j++)
	{
		printf("\n%dª coluna: %d", j+1, somaColunas[j]);
	}
	
	return 0;
}