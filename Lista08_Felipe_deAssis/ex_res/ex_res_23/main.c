/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHA 3
#define COLUNA 4
#define TAM 12

void geraVetor(int matriz[][COLUNA], int L);

int main(int argc, char const *argv[])
{
	int matriz[LINHA][COLUNA], vetor[TAM];

	srand(time(NULL));

	printf("\nMatriz inicial: ");
	for (int i = 0; i < LINHA; i++)
	{
		for (int j = 0; j < COLUNA; j++)
		{
			matriz[i][j] = rand() % 100;
			printf("\n[%d][%d]= %d", i+1, j+1, matriz[i][j]);
		}
		
	}

	printf("\n\nVetor gerado atraves da matriz: ");
	geraVetor(matriz, LINHA);
		
	return 0;
}

void geraVetor(int matriz[][COLUNA], int L)
{
	int vetor[TAM], cont = 0;

	for (int i = 0; i < LINHA; i++)
	{
		for (int j = 0; j < COLUNA; j++)
		{
			vetor[cont] = matriz[i][j];
			printf("\n[%d]= %d", i+1, vetor[cont]);
			cont++;
		}
		
	}
	

	return;
}