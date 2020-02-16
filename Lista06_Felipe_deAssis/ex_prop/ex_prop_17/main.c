/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 10
#define tam2 20

int main(int argc, char const *argv[])
{
	int vetor1[tam1], vetor2[tam1], vetoresOrdenados[tam2], vetor3[tam2], aux;
	int i, j;

	printf("\nPrimeiro Vetor: ");
	for (i = 0; i < tam1; i++)
	{
		printf("\n%dº número: ", i + 1);
		scanf("%d", &vetor1[i]);
		vetor3[i] = vetor1[i];
	}
	printf("\nSegundo Vetor: ");
	for (i = 0; i < tam1; i++)
	{
		printf("\n%dº número: ", i + 1);
		scanf("%d", &vetor2[i]);
		vetor3[i + 10] = vetor2[i];
	}

	system("clear");

	printf("\n\nNumeros do primeiro vetor: \n");
	for (i = 0; i < tam1; i++)
	{
		printf("%d - ", vetor1[i]);
	}
	printf("\n\nNumeros do segundo vetor: \n");
	for (i = 0; i < tam1; i++)
	{
		printf("%d - ", vetor2[i]);
	}		
	printf("\n\nVetor03: \n");
	for (i = 0; i < tam2; i++)
	{
		printf("%d - ", vetor3[i]);
	}

	system("clear");

	for (i = 0; i < tam2; i++)
	{
		for (j = 0; j < tam2; j++)
		{
			if (vetor3[i] < vetor3[j])
			{
				aux = vetor3[i];
				vetor3[i] = vetor3[j];
				vetor3[j] = aux;
			}
		}
	}

	printf("\n\nVetor Ordenado: \n");
	for (i = 0; i < tam2; i++)
	{
		printf("%d - ", vetor3[i]);
	}

	return 0;
}
