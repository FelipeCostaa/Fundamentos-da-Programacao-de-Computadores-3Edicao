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
	int vetor[tam], vetorPositivo[tam], cont = 0;

	printf("\nInforme os dados: ");
	for (int i = 0; i < tam; i++)
	{
		printf("\n%dº numero: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	// printf("\n");
	system("clear");
	for (int i = 0; i < tam; i++)
	{
		if (vetor[i] > 0)
		{
			vetorPositivo[cont] = vetor[i];
			cont++;
		}
	}
	printf("\nNumeros informados: \n");
	for (int i = 0; i < tam; i++)
	{
		printf("%d - ", vetor[i]);
	}
	printf("\n\nNumeros positivos informados: \n");
	for (int i = 0; i < cont; i++)
	{
		if (cont == 0)
		{
			printf("\nERRO! Não foram informados numeros positivos.");
			break;
		}
		printf("%d - ", vetorPositivo[i]);
	}
	
	
	return 0;
}