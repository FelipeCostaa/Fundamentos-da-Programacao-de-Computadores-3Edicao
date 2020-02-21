/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 18
#define tam2 3
#define tam3 6

int main(int argc, char const *argv[])
{
	int vetor[tam1], matriz[tam2][tam3], cont;

	for (int i = 0; i < tam1; i++)
	{
		printf("\n[%d]= ", i+1);
		scanf("%d", &vetor[i]);
	}
	system("clear");

	printf("\nVetor informado: ");
	for (int i = 0; i < tam1; i++)
	{
		printf("%d\t", vetor[i]);
	}
	printf("\n");

	cont = 0;
	for (int i = 0; i < tam2; i++)
	{
		for (int j = 0; j < tam3; j++)
		{
			matriz[i][j] = vetor[cont++];
		}
		
	}

	for (int i = 0; i < tam2; i++)
	{
		for (int j = 0; j < tam3; j++)
		{
			printf("\n[%d][%d]= %d", i+1, j+1, matriz[i][j]);
		}
		
	}
		
	
	return 0;
}