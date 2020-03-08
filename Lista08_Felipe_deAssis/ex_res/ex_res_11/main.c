/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 5
#define tam2 4

int main(int argc, char const *argv[])
{
	char sexo[tam1], corOlhos[tam1], corCabelo[tam1];
	int idade[tam1];

	for (int i = 0; i < tam1; i++)
	{
		printf("\n%dº habitante: ");
		for (int j = 0; j < tam2; j++)
		{
			printf("\nInforme os dados: ");
			printf("\nSexo: \n(f - feminino, m - masculino)\n-> ");
			setbuf(stdin, NULL);
			gets(sexo[j]);

			printf("\nCor dos olhos: \n(a - azuis, c - castanho)\n-> ");
			setbuf(stdin, NULL);
			gets(corOlhos[j]);

			printf("\nCor dos cabelos: \n(l - louros, p - pretos, c - castanhos)\n-> ");
			setbuf(stdin, NULL);
			gets(corCabelo[j]);

			printf("\nIdade: \n-> ");
			scanf("%d", &idade[j]);
		}
		
	}

	pesquisa(sexo, corOlhos, corCabelo, idade);
	
	return 0;
}

int pesquisa(char sexo[tam1], char corOlhos[tam1], char corCabelo[tam1], int idade[tam1])
{
	printf("\nMedia de idade das pessoas com olhos castanhos e cabelos pretos: %.2f.", mediaIdadeOlhosCastanhosCabelosPretos(corOlhos, corCabelo, idade));
}

float mediaIdadeOlhosCastanhosCabelosPretos(char corOlhos[tam1], char corCabelo[tam1], int idade[tam1])
{
	int	cont = 0, mediaIdade = 0;

	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			if (corOlhos[j] == 'c' && corCabelo[j] == 'p')
			{
				mediaIdade += idade[j];
				cont++;
			}
			
		}
		
	}

	return mediaIdade / cont++;
		
}