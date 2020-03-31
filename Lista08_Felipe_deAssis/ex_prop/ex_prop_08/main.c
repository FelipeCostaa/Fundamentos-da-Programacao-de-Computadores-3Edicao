/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fatorial(int num);

int main(int argc, char const *argv[])
{
	int num;

	printf("\nInforme um numero para calcular o seu fatorial: ");
	scanf("%d", &num);

	printf("\n\nO fotorial do %d é %d.", num, fatorial(num));
	
	return 0;
}

int fatorial(int num)
{
	int fatorial = 1;

	for (int i = num; i > 1; i--)
	{
		fatorial *= i;
	}
	

	return fatorial;
}