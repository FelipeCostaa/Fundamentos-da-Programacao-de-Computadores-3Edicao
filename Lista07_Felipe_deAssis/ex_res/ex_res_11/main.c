/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 8

int main(int argc, char const *argv[])
{
	int matriz[tam][tam], simetria = 1;
	int i, j;

	// preenche uma matriz 8x8
	for (i = 0; i < tam; i++)
	{
		for (j = 0; j < tam; j++)
		{
			printf("\n[%d][%d]= ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}

	// verifica se a matriz é simetrica
	for (i = 0; i < tam; i++)
	{
		for (j = 0; j < tam; j++)
		{
			if (matriz[i][j] != matriz[j][i])
			{
				simetria = 0;
			}
		}
	}

	// exibe mensagem final
	if (simetria == 1)
	{
		printf("\nA matriz informada é simetrica.");
	}
	else
	{
		printf("\nA matriz informada não é simetrica.");
	}
			
	return 0;
}