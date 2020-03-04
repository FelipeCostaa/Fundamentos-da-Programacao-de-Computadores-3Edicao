/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 3

int main(int argc, char const *argv[])
{
	int matriz[tam][tam], num;

	srand(time(NULL));

	printf("\nInforme um numero: ");
	scanf("%d", &num);

  printf("\nMatriz resultante da matriz gerada multiplicada pelo numero informado: ");
	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam; j++)
		{
			do
			{
				matriz[i][j] = ((rand() % 100) + 1) * num;
			} while (matriz[i][j] <= 0);
			
			printf("\n[%d][%d]= %d", i+1, j+1, matriz[i][j]);
		}
		
	}
		
	return 0;
}