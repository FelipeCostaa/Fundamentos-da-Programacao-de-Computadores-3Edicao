/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float media(int vetor[], int cont);

int main(int argc, char const *argv[])
{
	int cont = 0, vetor[cont];

	printf("\n**Para encerrar o programa digite '0'**");
	do
	{
		printf("\nInforme o %d numero: ", cont+1);
		scanf("%d", &vetor[cont]);

		// printf("\nNumero informado: %d", vetor[cont]);
		
		if (vetor[cont] == 0)
		{
			break;
		}
		
		cont++;	
	} while (vetor[cont] != 0);	
	
	printf("\nA media dos valores é: %.2f.", media(vetor, cont));

	return 0;
}

float media(int vetor[], int cont)
{
	float media = 0;

	for (int i = 0; i < cont; i++)
	{
		media += vetor[i];
	}
	
	media /= cont;

	return media;
}