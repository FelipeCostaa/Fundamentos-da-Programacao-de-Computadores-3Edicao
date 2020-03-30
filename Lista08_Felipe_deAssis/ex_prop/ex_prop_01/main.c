/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int somaNumeros(int num);

int main(int argc, char const *argv[])
{
	int num;

	printf("\nInforme um numero: ");
	scanf("%d", &num);

	printf("\nA soma dos numeros inteiros entre 1 e %d é: %d", num, somaNumeros(num));
	
	return 0;
}

int somaNumeros(int num)
{
	int soma = 0;

	for (int i = 0; i <= num; i++)
	{
		soma += i;
	}
	
	return soma;
}