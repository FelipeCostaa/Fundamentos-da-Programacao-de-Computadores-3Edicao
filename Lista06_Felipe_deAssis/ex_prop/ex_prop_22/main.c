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
	int vetorA[tam], vetorB[tam], contB = 0;

	printf("\nValores do vetor A: \n");
	for (int i = 0; i < tam; i++)
	{
		printf("\n%dº numero: ", i + 1);
		scanf("%d", &vetorA[i]);
		if (vetorA[i] > 0)
		{
			vetorB[contB] = vetorA[i];
			contB++;
		}
	}

	system("clear");

	printf("\nVetor A: \n");
	for (int i = 0; i < tam; i++)
	{
		printf("%d - ", vetorA[i]);
	}

	printf("\n\nVetor B: \n");
	for (int i = 0; i < contB; i++)
	{
		if (contB == 0)
		{
			printf("\nERRO! Não foi informado nenhum numero nulo ou negativo");
			break;
		}
		printf("%d - ", vetorB[i]);
	}
	
	return 0;
}