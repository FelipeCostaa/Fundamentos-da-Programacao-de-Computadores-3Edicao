/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maiorMenor(int num1, int num2);

int main(int argc, char const *argv[])
{
	int num1, num2;

	printf("\nCalcula o maior e menor valor: \n");

	printf("\nInforme o primeiro numero:\n-> ");
	scanf("%d", &num1);
	printf("\nInforme o segundo numero:\n-> ");
	scanf("%d", &num2);	

	maiorMenor(num1, num2);
	
	return 0;
}

int maiorMenor(int num1, int num2)
{
	if (num1 > num2)
	{
		printf("\nO %d é maior que %d.", num1, num2);
	}
	else if (num1 < num2)
	{
		printf("\nO %d é maior que %d.", num2, num1);
	}
	else
	{
		printf("\nOs numeros são iguais.");
	}
	
}