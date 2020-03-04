/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 5

int main(int argc, char const *argv[])
{
	int matriz[tam][tam], somaLinha4 = 0, somaColuna2 = 0, diagonalPrincipal = 0, 
			diagonalSecundaria = 0, soma = 0;
	
	srand(time(NULL));

	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam; j++)
		{
			do
			{
				matriz[i][j] = (rand() % 100) + 1;
			} while (matriz[i][j] <= 0);
			
			if (i == 4)
			{
				somaLinha4 += matriz[i][j];
			}

			if (j == 2)
			{
				somaColuna2 += matriz[i][j];
			}
			
			if (i == j)
			{
				diagonalPrincipal += matriz[i][j];
			}
			
			if (i+j == tam -1)
			{
				diagonalSecundaria += matriz[i][j];
			}
			
			soma += matriz[i][j];
		}
		
	}
	
	printf("\nSoma da linha 4 = %d", somaLinha4);
	printf("\nSoma da coluna 2 = %d", somaColuna2);
	printf("\nSoma dos elementos da diagonal principal = %d", diagonalPrincipal);
	printf("\nSoma dos elementos da diagonal secundaria = %d", diagonalSecundaria);
	printf("\nSoma de todos os elementos da matriz = %d", soma);

	return 0;
}