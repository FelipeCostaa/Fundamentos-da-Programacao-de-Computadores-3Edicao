/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 15
#define tam2 5

int main(int argc, char const *argv[])
{
	int matriz[tam1][tam2], repetidos[tam1][tam2], vezes[tam1][tam2];
	int linha1, linha2, coluna, x, num, quant, achou;
	int i, j, k, l;

	for (i = 0; i < tam1; i++)
	{
		for (j = 0; j < tam2; j++)
		{
			printf("\n[%d][%d]= ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	linha1 = 0;
	coluna = 0;
	for (i = 0; i < tam1; i++)
	{
		for (j = 0; j < tam2; j++)
		{
			quant = 0;
			num = matriz[i][j];

			for (k = 0; k < tam1; k++)
			{
				for (l = 0; l < tam2; l++)
				{
					if (matriz[i][j] == num)
					{
						quant++;
					}
				}
				if (quant > 1)
				{
					achou = 0;
					if (coluna == 1)
					{
						linha2 = linha1 - 1;
					}
					else
					{
						linha2 = linha1;
					}
					for (k = 0; k < linha2; k++)
					{
						if (k < linha2)
						{
							x = 5;
						}
						else
						{
							x = coluna - 1;
						}
						for (k = 0; k < x; k++)
						{
							if (num == repetidos[k][l])
							{
								achou = 1;
							}
						}
						if (achou == 0)
						{
							repetidos[linha1][coluna] = num;
							vezes[linha1][coluna] = quant;
							coluna++;
							if (coluna > 5)
							{
								linha1++;
								coluna = 1;
							}
						}
					}
				}
			}
			
			for (i = 0; i < linha1; i++)
			{
				if (i < linha1)
				{
					x = 5;
				}
				else
				{
					x = coluna - 1;
				}
				for (j = 0; j < x; j++)
				{
					printf("\nO numero %d repetiu %d.", repetidos[i][j], vezes[i][j]);
				}
			}
		}
	}
	
	
	return 0;
}