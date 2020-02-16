/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 10 

int main(int argc, char const *argv[])
{
	int vetor[tam], vetorCorrigido[tam];

	printf("\nInforme os dados: ");
	for (int i = 0; i < tam; i++)
	{
		printf("\n%dº numero: ", i + 1);
		scanf("%d", &vetor[i]);

		vetorCorrigido[i] = vetor[i];
		if (vetor[i] == 0)
		{
			vetorCorrigido[i] = 1;
		}		
	}

	system("clear");

	printf("\nVetor informado: \n");
	for (int i = 0; i < tam; i++)
	{
		printf("%d - ", vetor[i]);
	}
	printf("\nVetor com os valores nulos substituidos por 1: \n");
	for (int i = 0; i < tam; i++)
	{
		printf("%d - ", vetorCorrigido[i]);
	}
	

	return 0;
}