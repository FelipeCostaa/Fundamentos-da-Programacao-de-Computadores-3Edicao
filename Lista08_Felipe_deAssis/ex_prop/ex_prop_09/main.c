/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int somaDivisores(int num);

int main(int argc, char const *argv[])
{
	int num;

	printf("\nInfome um numero: ");
	scanf("%d", &num);

	printf("\nA soma dos divisores de %d é %d", num, somaDivisores(num));
	
	return 0;
}

int somaDivisores(int num)
{
	int soma = 0;

	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			soma += i;
		}
		
	}
	
	return soma;
}