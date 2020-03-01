/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 2
#define tam2 4

int main(int argc, char const *argv[])
{
	int matriz[tam1][tam2], cont = 0, mediaPares = 0, cont2[tam1];

	for (int i = 0; i < tam1; i++)
	{
		cont2[i] = 0;
		for (int j = 0; j < tam2; j++)
		{
			printf("\n[%d][%d]= ", i+1, j+1);
			scanf("%d", &matriz[i][j]);			

			if (matriz[i][j] % 2 == 0)
			{
				cont++;
				mediaPares += matriz[i][j];
			}
			
			if (matriz[i][j] > 12 && matriz[i][j] < 20)
			{
				cont2[i]++;
			}
			
		}

	}

	mediaPares = mediaPares / cont;

	if (cont == 0)
	{
		printf("\nNão foram informados numeors pares na matriz.");
	}
	else
	{
		printf("\nMedia dos números pares: %d", mediaPares);
	}

	for (int i = 0; i < tam1; i++)
	{
		printf("\nQuantidade de numeros entre 12 e 20 na %dª linha: %d", i+1, cont2[i]);
	}
	
	return 0;
}