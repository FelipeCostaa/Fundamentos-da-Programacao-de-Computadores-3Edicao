/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void primos(int x, int y);

int main(int argc, char const *argv[])
{
	int x, y;

	printf("\n**Calcula a soma dos números primos entre X e Y**\n");

	printf("\nInforme o valor de Y: \n-> ");
	scanf("%d", &y);
	do
	{
		printf("\nInforme o valor de X: \n-> ");
		scanf("%d", &x);		
	} while (x > y);

	primos(x, y);
	
	return 0;
}

void primos(int x, int y)
{
	int cont = 0, soma = 0;

	for (int i = x; i <= y; i++)
	{
		for (int j = x; j <= y; j++)
		{
			if (i % 2 == 0)
			{
				cont++;
			}
			
		}
		if (cont == 2)
		{
			soma += i;
		}
		
	}
	if (soma == 0)
	{
		printf("\nNão existem numeros primos entre %d e %d", x, y);
	}
	else
	{
		printf("\nSoma dos numeros primos entre %d e %d é %d", x, y, soma);
	}
	
	
	return;
}