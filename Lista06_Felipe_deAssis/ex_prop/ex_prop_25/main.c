/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 15

int main(int argc, char const *argv[])
{
	int vetor[tam], divididos[tam];
	int maiorNumero = -99999999;

	printf("\nInforme os dados: ");
	for (int i = 0; i < tam; i++)
	{
		printf("\n%dº numero: ", i + 1);
		scanf("%d", &vetor[i]);
		if (vetor[i] > maiorNumero)
		{
			maiorNumero = vetor[i];
		}
		
	}
	system("clear");
	printf("\nNumeros informados: \n");
	for (int i = 0; i < tam; i++)
	{
		printf("%d - ", vetor[i]);
	}
	for (int i = 0; i < tam; i++)
	{
		divididos[i] = maiorNumero / vetor[i];
	}
	printf("\n\nVertor correspondente a divisão dos valores do \nvetor pelo maior valor contido no vetor\n");
	for (int i = 0; i < tam; i++)
	{
		printf("%d - ", divididos[i]);
	}
		
	return 0;
}
