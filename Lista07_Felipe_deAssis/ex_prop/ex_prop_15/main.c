/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 12
#define tam2 13

int main(int argc, char const *argv[])
{
	int matriz[tam1][tam2], maiorLinha[tam1], i, j;

	srand(time(NULL));

	printf("\nMatriz Inicial: ");
	for (int i = 0; i < tam1; i++)
	{ 
		maiorLinha[i] = matriz[i][j];
		for (int j = 0; j < tam2; j++)
		{
			do
			{
				matriz[i][j] = (rand() % 100) + 1;
			} while (matriz[i][j] <= 0);
			
			printf("\n[%d][%d]= %d", i+1, j+1, matriz[i][j]);

			if (matriz[i][j] > maiorLinha[i])
			{
				maiorLinha[i] = matriz[i][j];
			}
			
		}
		
	}
	
	printf("\nMatriz gerada atraves dos valores iniciais divididos pelo maior elemento da linha: ");
	// for (int i = 0; i < tam1; i++)
	// {
	// 	for (int j = 0; j < tam2; j++)
	// 	{
	// 		matriz[i][j] = matriz[i][j] / maiorLinha[i];
	// 		printf("\n[%d][%d]= %d", i+1, j+1, matriz[i][j]);
	// 	}
		
	// }
	

	return 0;
}