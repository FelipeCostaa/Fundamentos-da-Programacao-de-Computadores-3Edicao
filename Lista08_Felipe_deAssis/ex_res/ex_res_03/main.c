/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int inteirosDivisiveisEntreAeB(int a, int b, int c);

int main(int argc, char const *argv[])
{
	int a, b, c, resultado;

	do
	{
		printf("\nInforme o primeiro numero: ");
		scanf("%d", &a);		
	} while (a < 1);
	
	printf("\nInforme o segundo numero: ");
	scanf("%d", &b);
	printf("\nInforme o terceiro numero: ");
	scanf("%d", &c);

	resultado = inteirosDivisiveisEntreAeB(a, b, c);

	printf("\nSoma dos numeros entre %d e %d que são divisiveis por %d é %d", b, c, a, resultado);

	return 0;
}

int inteirosDivisiveisEntreAeB(int a, int b, int c)
{
	int soma = 0;

	for (int i = b + 1; i < c; i++)
	{
		if (i % a == 0)
		{
			soma += i;
		}
		
	}
	
	return soma;
}