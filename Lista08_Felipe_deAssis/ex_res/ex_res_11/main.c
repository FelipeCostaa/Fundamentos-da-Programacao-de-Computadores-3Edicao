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

float mediaIdadeOlhosCastanhosCabelosPretos(char corOlhos[tam1], char corCabelo[tam1], int idade[tam1]);
int maiorIdadeHabitantes(int idade[tam1]);
int quantidadeSexoFemininoIdadeEntre18e35ComOlhosAzuisCabelosLoiros(char sexo[tam1], int idade[tam1], char corOlhos[tam1], char corCabelo[tam1]);

int main(int argc, char const *argv[])
{
	char sexo[tam1], corOlhos[tam1], corCabelo[tam1];
	int idade[tam1];
	float mediaIdade;

	for (int i = 0; i < tam1; i++)
	{
		printf("\n%dº habitante: ", i+1);
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
	
	return 0;
}

float mediaIdadeOlhosCastanhosCabelosPretos(char corOlhos[tam1], char corCabelo[tam1], int idade[tam1])
{
	float	cont = 0, mediaIdade = 0;

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
	mediaIdade /= cont++;

	return mediaIdade;
}

int maiorIdadeHabitantes(int idade[tam1])
{
	int maiorIdade = idade[0];

	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			if (idade[i] > maiorIdade)
			{
				maiorIdade = idade[i];
			}
			
		}
		
	}
	
	return maiorIdade;
}

int quantidadeSexoFemininoIdadeEntre18e35ComOlhosAzuisCabelosLoiros(char sexo[tam1], int idade[tam1], char corOlhos[tam1], char corCabelo[tam1])
{
	int cont = 0;

	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			if (sexo[j] == 'f')
			{
				if (idade[j] > 18 && idade[j] <= 35)
				{
					if (corOlhos[j] == 'a')
					{
						if (corCabelo[j] == 'l')
						{
							cont++;
						}
						
					}
					
				}
				
			}
			
		}
		
	}
	
	return cont;
}