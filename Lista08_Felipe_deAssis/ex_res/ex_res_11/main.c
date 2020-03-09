/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 1
#define tam2 2

float mediaIdadeOlhosCastanhosCabelosPretos(char corOlhos[tam1], char corCabelo[tam1], int idade[tam1]);
int maiorIdadeHabitantes(int idade[tam1]);
int quantidadeSexoFemininoIdadeEntre18e35ComOlhosAzuisCabelosLoiros(char sexo[tam1], int idade[tam1], char corOlhos[tam1], char corCabelo[tam1]);

int main(int argc, char const *argv[])
{
	char sexo[tam1][tam2], corOlhos[tam1][tam2], corCabelo[tam1][tam2];
	int idade[tam1];

	for (int i = 0; i < tam1; i++)
	{
		printf("\n%dº habitante: ", i+1);
		printf("\nInforme os dados: ");
		printf("\nSexo: \n(f - feminino, m - masculino)\n-> ");
		setbuf(stdin, NULL);
		gets(sexo[i]);

		printf("\nCor dos olhos: \n(a - azuis, c - castanho)\n-> ");
		setbuf(stdin, NULL);
		gets(corOlhos[i]);

		printf("\nCor dos cabelos: \n(l - louros, p - pretos, c - castanhos)\n-> ");
		setbuf(stdin, NULL);
		gets(corCabelo[i]);

		printf("\nIdade: \n-> ");
		scanf("%d", &idade[i]);
		printf("\n-------------------------------------");
	}
	
	if (mediaIdadeOlhosCastanhosCabelosPretos(corOlhos, corCabelo, idade) > 0)
	{
		printf("\nMedia de idade das pessoas com olhos castanhos e cabelos pretos: %.2f", mediaIdadeOlhosCastanhosCabelosPretos(corOlhos, corCabelo, idade));
	}
	else
	{
		printf("\nNão exitem pessoas com olhos castanhos e cabelos pretos");
	}
	
	printf("\nMaior idade entre os habitantes: %d", maiorIdadeHabitantes(idade));

	if (quantidadeSexoFemininoIdadeEntre18e35ComOlhosAzuisCabelosLoiros(sexo, idade, corOlhos, corCabelo) > 0)
	{
		printf("\nQuantidade de pessoas do sexo feminino com idade entre 18 e 35 anos que tenha os olhos azuis e cabelos loiros: %d", quantidadeSexoFemininoIdadeEntre18e35ComOlhosAzuisCabelosLoiros(sexo, idade, corOlhos, corCabelo));
	}
	else
	{
		printf("\nNão existem pessoas com idade entre 18 e 35 anos e que possuem olhos azuis e cabelos loiros");
	}

	return 0;
}

float mediaIdadeOlhosCastanhosCabelosPretos(char corOlhos[tam1], char corCabelo[tam1], int idade[tam1])
{
	float	cont = 0, mediaIdade = 0;

	for (int i = 0; i < tam1; i++)
	{
		if (corOlhos[i] == 'c' && corCabelo[i] == 'p')
		{
			mediaIdade += idade[i];
			cont++;
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
		if (idade[i] > maiorIdade)
		{
			maiorIdade = idade[i];
		}
		
	}
	
	return maiorIdade;
}

int quantidadeSexoFemininoIdadeEntre18e35ComOlhosAzuisCabelosLoiros(char sexo[tam1], int idade[tam1], char corOlhos[tam1], char corCabelo[tam1])
{
	int cont = 0;

	for (int i = 0; i < tam1; i++)
	{
		if (sexo[i] == 'f')
		{
			if (idade[i] > 18 && idade[i] <= 35)
			{
				if (corOlhos[i] == 'a')
				{
					if (corCabelo[i] == 'l')
					{
						cont++;
					}
					
				}
				
			}
			
		}		
	}
	
	return cont;
}