/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 2

int main(int argc, char const *argv[])
{
	int matriz[tam][tam], maior, resultadoMult[tam][tam];
	int i, j;

	// preenche a matriz 
	for (i = 0; i < tam; ++i)
	{
		for (j = 0; j < tam; ++j)
		{
			printf("\nLinha\t%d\tColuna\t%d\t: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
		}
	}
	// exibe a matriz
	for (i = 0; i < tam; ++i)
	{
		for (j = 0; j < tam; ++j)
		{
			printf("\nLinha %d, Coluna %d = %d", i + 1, j + 1, matriz[i][j]);
		}
	}
	// encontra o maior valor contido na matriz
	maior = matriz[0][0];
	for (i = 0; i < tam; ++i)
	{
		for (j = 0; j < tam; ++j)
		{
			if (matriz[i][j] > maior)
			{
				maior = matriz[i][j];
			}
		}
	}
	printf("\n\nO maior valor da matriz é: %d\n", maior);

	// faz a multiplicacao
	for (i = 0; i < tam; ++i)
	{
		for (j = 0; j < tam; ++j)
		{
			resultadoMult[i][j] = maior * matriz[i][j];
			printf("\nResultado da multiplicação: %d", resultadoMult[i][j]);
		}
	}
	
	return 0;
}