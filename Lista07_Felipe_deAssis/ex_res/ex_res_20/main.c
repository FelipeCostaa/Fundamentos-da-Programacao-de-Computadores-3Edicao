/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 5
#define tam2 4
#define tam3 20

int main(int argc, char const *argv[])
{
	int matriz[tam1][tam2], aux, vetor[tam3], cont, continua;

	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			printf("\n[%d][%d]= ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
		
	}
	
	cont = 0;
	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			vetor[cont++] = matriz[i][j];
		}
		
	}
	

	do
	{
		continua = 0;
		for (int i = 0; i < tam3; i++)
		{
			if (vetor[i] > vetor[i+1])
			{
				aux = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = aux;

				continua = i;
			}
			
		}	
		
	} while (continua != 0);

	cont = 0;
	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			matriz[i][j] = vetor[cont];
			cont++;
			printf("\n[%d][%d]= %d", i+1, j+1, matriz[i][j]);
		}
		
	}	
	
	return 0;
}