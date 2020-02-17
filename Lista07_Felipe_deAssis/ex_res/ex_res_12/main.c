/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 4

int main(int argc, char const *argv[])
{
	int matriz[tam][tam], somaLinha[tam], somaColuna[tam];
	int diagonalPrimaria, diagonalSecundaria, quadradoMagico;
	int i, j;

	// recebe os valores da matriz
	for (i = 0; i < tam; i++)
	{
		for (j = 0; j < tam; j++)
		{
			printf("\n[%d][%d]= ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
		
	}
	
	// realiza a soma das linhas e colunas
	for (i = 0; i < tam; i++)
	{
		somaLinha[i] = 0;
		somaColuna[i] = 0;
		for (j = 0; j < tam; j++)
		{
			somaLinha[i] += matriz[i][j];
			somaColuna[i] += matriz[j][i];
		}
		
	}

	// realiza a soma da diagonal principal 
	diagonalPrimaria = 0;
	for (i = 0; i < tam; i++)
	{
		diagonalPrimaria += matriz[i][i];
	}
	
	// realiza a soma da diagonal secundaria 
	diagonalSecundaria = 0;
	j = 3;
	for (i = 0; i < tam; i++)
	{
		diagonalSecundaria += matriz[i][j];
		j--;
	}
	
	quadradoMagico = 1;
	for (i = 0; i < tam; i++)
	{
		for (j = 0; j < tam; j++)
		{
			if (somaLinha[i] != somaColuna[i])
			{
				quadradoMagico = 0;
			}
			
		}
		
	}

	for (i = 0; i < tam; i++)
	{
		if (somaLinha[i] != diagonalPrimaria)
		{
			quadradoMagico = 0;
		}
		
	}
	
	for (i = 0; i < tam; i++)
	{
		if (somaLinha[i] != diagonalSecundaria)
		{
			quadradoMagico = 0;
		}
		
	}

	if (quadradoMagico == 1)
	{
		printf("\nA matriz forma um quadrado magico.");
	}
	else
	{
		printf("\nA matriz não forma um quadrado magico.");
	}
	

	return 0;
}