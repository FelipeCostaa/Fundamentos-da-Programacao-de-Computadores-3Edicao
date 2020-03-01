/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 6
#define tam2 3

int main(int argc, char const *argv[])
{
	int matriz[tam1][tam2], maior, menor, linhaMaior, colunaMaior, 
			linhaMenor, colunaMenor;

	maior = 0;
	menor = 99999999;

	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			printf("\n[%d][%d]= ", i+1, j+1);
			scanf("%d", &matriz[i][j]);

			if (matriz[i][j] > maior)
			{
				maior = matriz[i][j];
				linhaMaior = i;
				colunaMaior = j;
			}

			if (matriz[i][j] < menor)
			{
				menor = matriz[i][j];
				linhaMenor = i;
				colunaMenor = j;
			}
			
		}
		
	}
	
	printf("\nPosição do maior elemento da matriz: [%d][%d]", linhaMaior+1, colunaMaior+1);
	printf("\nValor: %d", maior);

	printf("\n\nPosição do menor elemento da matriz: [%d][%d]", linhaMenor+1, colunaMenor+1);
	printf("\nValor: %d", menor);
	return 0;
}