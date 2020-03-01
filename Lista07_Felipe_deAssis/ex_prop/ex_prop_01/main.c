/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 3
#define tam2 5

int main(int argc, char const *argv[])
{
	int matriz[tam1][tam2], cont = 0;

	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			printf("\n[%d][%d]= ", i+1, j+1);
			scanf("%d", &matriz[i][j]);

			if (matriz[i][j] > 15 && matriz[i][j] < 20)
			{
				cont++;
			}
			
		}
		
	}
	
	if (cont == 0)
	{
		printf("\nEssa matriz não contem numeros entre 15 e 20.");
	}
	else
	{
		printf("\nQuantidade de numeros entre 15 e 20: %d", cont);
	}
	
	return 0;
}