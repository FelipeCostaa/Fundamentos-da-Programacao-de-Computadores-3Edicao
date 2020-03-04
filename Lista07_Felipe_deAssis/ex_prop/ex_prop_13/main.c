/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 6
#define tam2 4

int main(int argc, char const *argv[])
{
	int matriz[tam1][tam2], maiorLinha[tam1], novaMatriz[tam1][tam2];


	for (int i = 0; i < tam1; i++)
	{
		maiorLinha[i] = 0;
		for (int j = 0; j < tam2; j++)
		{
			printf("\n[%d][%d]= ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
			if (matriz[i][j] > maiorLinha[i])
			{
				maiorLinha[i] = matriz[i][j];
			}
			
		}
		
	}
	
	printf("\nMatriz resutante: ");
	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			novaMatriz[i][j] = maiorLinha[i] * matriz[i][j];	
			printf("\n[%d][%d]= %d", i+1, j+1, novaMatriz[i][j]);
		}
		
	}
	

	return 0;
}