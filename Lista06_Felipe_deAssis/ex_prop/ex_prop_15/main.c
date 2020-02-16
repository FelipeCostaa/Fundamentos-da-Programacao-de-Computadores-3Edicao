/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 3
#define tam2 64

int main(int argc, char const *argv[])
{
	int quantDVD[tam1];
	char nome[tam1][tam2];
	int i;
	int quantGratis;

	printf("\nInsira os dados: ");
	for (i = 0; i < tam1; i++)
	{
		setbuf(stdin, NULL); // limpar o buffer
		printf("\nNome: ");
		// setbuf(stdin, NULL); // limpar o buffer
		scanf("%[^\n]", &nome[i]);
		printf("\nQuantidade DVD's alugados no ano: ");
		scanf("%d", &quantDVD[i]);
		system("clear");
	}
	printf("\n\n\nDados de entrada: ");
	for (i = 0; i < tam1; i++)
	{
		printf("\n%dº Nome: %s", i + 1, nome[i]);
		printf("\nNumero de DVD's: %d", quantDVD[i]);
		if (quantDVD[i] < 20)
		{
			printf("\nTem direito a 1 locação gratis");
		}
		else if (quantDVD[i] < 30)
		{
			printf("\nTem direito a 2 locações gratis");
		}
		else
		{
			printf("\nTem direito a 3 locações gratis");
		}
			printf("\n\n");
	}

	return 0;
}
