/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificaNumero(int num);

int main(int argc, char const *argv[])
{
	int num, x;

	printf("\nInforme um numero: ");
	scanf("%d", &num);

	x = verificaNumero(num);
	
	if (x == 1)
	{
		printf("\nO numero é positivo.");
	}
	else
	{
		printf("\nO numero é negativo.");		
	}
	
	return 0;
}

int verificaNumero(int num){
	if (num > 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}