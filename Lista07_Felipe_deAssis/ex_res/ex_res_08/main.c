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
	int matriz1[tam1][tam2], maiorQue30 = 0, matriz2[tam1][tam2];
	int i, j;

	for (i = 0; i < tam1; i++)
	{
		for (j = 0; j < tam2; j++)
		{
			printf("\n[%d][%d]= ", i+1, j+1);
			scanf("%d", &matriz1[i][j]);
		}
	}

	for (i = 0; i < tam1; i++)
	{
		for (j = 0; j < tam2; j++)
		{
			matriz2[i][j] = matriz1[i][j];
			
			if (matriz1[i][j] > 30)
			{
				maiorQue30++;
			}
			if (matriz1[i][j] == 30)
			{
				matriz2[i][j] = 0;
			}
		}
	}
	system("clear");
	
	for (i = 0; i < tam1; i++)
	{
		for (j = 0; j < tam2; j++)
		{
			printf("\n[%d][%d]= %d", i+1, j+1, matriz2[i][j]);
		}
	}
	
	
	if (maiorQue30 == 0)
	{
		printf("\nEsse vetor não possui numeros maiores que 30.");
	}
	else
	{
		printf("\nQuantidade de numeros maiores que 30: %d", maiorQue30);
	}	
	
	return 0;
}