/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 8
#define tam2 6

int main(int argc, char const *argv[])
{
	int matriz[tam1][tam2], cont = 0;
	float mediaPares = 0;

	srand(time(NULL));

	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			matriz[i][j] = (rand() % 100);

			if (i % 2 == 0)
			{
				mediaPares += matriz[i][j];
				cont++;
			}
			
		}
		
	}
	mediaPares /= cont;

	printf("\nA media dos numeros das linhas pares é: %.2f", mediaPares);
	
	return 0;
}