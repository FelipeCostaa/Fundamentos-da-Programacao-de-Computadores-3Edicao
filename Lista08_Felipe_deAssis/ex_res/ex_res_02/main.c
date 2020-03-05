/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int somaNumeros(int num1, int num2);

int main(int argc, char const *argv[])
{
	int num1, num2, soma;

	printf("\nInforme o primeiro numero: ");
	scanf("%d", &num1);
	printf("\nInforme o segundo numero: ");
	scanf("%d", &num2);

	soma = somaNumeros(num1, num2);
	printf("\nA soma dos numeros entre %d e %d é %d.", num1, num2, soma);

	return 0;
}

int somaNumeros(int num1, int num2){
	int soma = 0;

	for (int i = num1+1; i < num2; i++)
	{
		soma += i;
	}
	
	return soma;
}