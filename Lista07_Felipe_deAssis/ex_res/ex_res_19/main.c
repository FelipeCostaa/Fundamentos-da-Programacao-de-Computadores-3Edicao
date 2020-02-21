/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

// o codigo tem de ser corrigido 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 5
#define tam2 4

int main(int argc, char const *argv[])
{
	int matriz[tam1][tam2], num, r, linP, colP, linI, colI, tot;

	linP = 2;
	colP = 1;
	linI = 1;
	colI = 1;
	tot = 0;

	while (tot != 20)
	{
		printf("\nInfome um numero: ");
		scanf("%d", &num);
		r = num % 2;
		if (r = 0)
		{
			if (linP > 4)
			{
				printf("\nSem espaço para numeros pares.");
			}
			else
			{
				matriz[linP][colP] = num;
				colP++;
				if (colP > 4)
				{
					linP = linP + 2;
					colP = 1;
				}
				
			}
			
		}
		else
		{
			if (linI > 5)
			{
				printf("\nSem espaço para numeros impares.");
			}
			else
			{
				matriz[linI][colI] = num;
				colI++;
				if (colI > 4)
				{
					linI = linI + 2;
					colI = 1;
				}
				
			}
			
		}
		tot++;
	}

	while (tot == 20)
	{
		printf("\nMatriz totalmente preenchida.");
		for (int i = 0; i < tam1; i++)
		{
			for (int j = 0; j < tam2; j++)
			{
				printf("\n[%d][%d]= %d", i+1, j+1, matriz[i][j]);
			}
			
		}
		
	}
	
		
	return 0;
}