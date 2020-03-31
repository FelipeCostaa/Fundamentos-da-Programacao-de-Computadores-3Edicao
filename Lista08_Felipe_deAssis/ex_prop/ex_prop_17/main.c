/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mdc(int num1, int num2);

int main(int argc, char const *argv[])
{
	int num1, num2;

	printf("\nCalcula o MDC de dois numeros.");
	printf("\nPrimeiro numero: ");
	scanf("%d", &num1);
	printf("\nSegundo numero: ");
	scanf("%d", &num2);

	mdc(num1, num2);

	return 0;
}

void mdc(int num1, int num2)
{
	int mdc = 0, maiorValor;

	if (num1 > num2)
	{
		maiorValor = num1;
	}
	else
	{
		maiorValor = num2;
	}

	for (int i = 2; i < maiorValor; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			mdc = i;
		}
	}
	printf("\nO MDC de %d e %d é: %d", num1, num2, mdc);
}