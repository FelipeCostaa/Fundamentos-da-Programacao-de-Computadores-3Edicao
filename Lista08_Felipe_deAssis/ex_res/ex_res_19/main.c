/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 6

void multiplicaMatriz(int a[tam][tam]);

int main(int argc, char const *argv[])
{
	int a[tam][tam];

	srand(time(NULL));

	printf("\nMatriz a[6][6]: ");
	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam; j++)
		{
			a[i][j] = rand() % 100;
			printf("\n[%d][%d]= %d", i+1, j+1, a[i][j]);
		}
		
	}

	printf("\n");
	multiplicaMatriz(a);
	
	return 0;
}

void multiplicaMatriz(int a[tam][tam])
{
	int novaMatriz[tam][tam], aux;

	printf("\nMatriz gerada multiplicada pelo elemento da diagonal principal da linha");
	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam; j++)
		{
			if (i == j)
			{
				aux = a[i][j];
			}
			
		}

		for (int j = 0; j < tam; j++)
		{
			novaMatriz[i][j] = a[i][j] * aux;
			printf("\n[%d][%d]= %d", i+1, j+1, novaMatriz[i][j]);
		}
		
	}
	

}