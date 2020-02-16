/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 5

int main(int argc, char const *argv[])
{
	int vetorPrincipal[tam1], soma = 0;
	int i;

	printf("\nInforme os numeros: ");
	for (i = 0; i < tam1; i++)
	{
		printf("\nDigite o %dº numero: ", i + 1);
		scanf("%d", &vetorPrincipal[i]);
		soma += vetorPrincipal[i];
	}
	printf("\n\nOs numeros digitados foram: ");
	for (i = 0; i < tam1; i++)
	{
		printf("%d", vetorPrincipal[i]);
		if (i < 4)
		{
			printf(" + ");
		}
		if (i == 4)
		{
			printf(" = %d\n", soma);
		}
	}
		
	return 0;
}