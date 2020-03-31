/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float sequencia(int num);

int main(int argc, char const *argv[])
{
	int num;

	printf("\nS = 1 + 1/2 + 1/3 .... + 1/N");
	printf("\nInforme o valor de N\n--> ");
	scanf("%d", &num);

	printf("\n\nO valor de S é %.2f", sequencia(num));
	
	return 0;
}

float sequencia(int num)
{
	float S = 0;

	for (float i = 1; i <= num; i++)
	{
		S += 1 / i;
	}

	return S;
}