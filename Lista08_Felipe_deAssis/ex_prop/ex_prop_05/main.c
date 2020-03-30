/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void positivoNegativo(int num);

int main(int argc, char const *argv[])
{
	int num;

	printf("\nInforme um numero: \n-->");
	scanf("%d", &num);

	positivoNegativo(num);
	
	return 0;
}

void positivoNegativo(int num)
{
	if (num >= 0)
	{
		printf("\nO numero é positivo.");
	}
	else
	{
		printf("\nO numero é negativo.");
	}

	
}