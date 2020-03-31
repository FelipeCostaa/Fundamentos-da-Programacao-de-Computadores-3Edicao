/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int formula(int x, int z);

int main(int argc, char const *argv[])
{
	int z, x;

	printf("\nFormula: X^z");
	printf("\nInforme os valores: ");
	printf("\nX --> ");
	scanf("%d", &x);
	printf("\nZ --> ");
	scanf("%d", &z);

	printf("\n%d elevado a %d é %d", x, z, formula(x, z));
	
	return 0;
}

int formula(int x, int z)
{
	int resultado = x;

	for (int i = 1; i < z; i++)
	{
		resultado *= x;
	}
	
	return resultado;
}