/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 5
#define tam2 7

int main(int argc, char const *argv[])
{
	int matriz[tam1][tam2], menor, maior, linha, coluna, cont;
	int i, j;

	cont = 0;

	for (i = 0; i < tam1; i++)
	{
		for (j = 0; j < tam2; j++)
		{
			printf("\n[%d][%d]= ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for (i = 0; i < tam1; i++)
	{
		menor = matriz[i][j];
		linha = i;
		coluna = 0;
		for (j = 0; j < tam2; j++)
		{
			if (matriz[i][j] < menor)
			{
				menor = matriz[i][j];
				linha = i;
				coluna = j;
			}
		}
		maior = matriz[0][coluna];
		for (j = 0; j < tam2; j++)
		{
			if (matriz[j][coluna])
			{
				maior = matriz[j][coluna];
			}
		}
		if (menor == maior)
		{
			printf("\nPonto de sela: %d, na posição [%d][%d]:", maior, linha, coluna);
			cont++;
		}
	}	
	
	if (cont == 0)
	{
		printf("\nERRO! Não existe ponto de sela nesta matriz.");
	}
	
	return 0;
}

// Um “ponto de sela” é caracterizado por uma entrada em uma matriz, 
// tal que esta seja o valor mínimo (menor valor) para sua linha e o
// máximo (maior valor) para sua coluna. 