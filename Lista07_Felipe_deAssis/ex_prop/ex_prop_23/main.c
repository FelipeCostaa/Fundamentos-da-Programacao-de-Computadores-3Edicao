/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 3
#define tam2 4

int main(int argc, char const *argv[])
{
	int matriz[tam1][tam2], contPares = 0, somaImpares = 0, cont = 0;
	float mediaGeral = 0;

	srand(time(NULL));

	printf("\nMatriz inicial: ");
	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			matriz[i][j] = (rand() % 100) + 1;
			printf("\n[%d][%d]= %d", i+1, j+1, matriz[i][j]);

			if (matriz[i][j] % 2 == 0)
			{
				contPares++;
			}
			else
			{
				somaImpares += matriz[i][j];
			}
			
			mediaGeral += matriz[i][j];
			cont++;
		}
		
	}
	
	mediaGeral /= cont;

	printf("\n\nQuantidade de elementos pares: %d", contPares);
	printf("\nSoma dos elementos impares: %d", somaImpares);
	printf("\nMedia de todos os elementos: %.2f", mediaGeral);

	return 0;
}