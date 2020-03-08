/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sequencia(int num);

int main(int argc, char const *argv[])
{
	int num, s;

	printf("\nCalcula o valor de 's': \n\ts = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!");
	printf("\n\nInforme o valor de paremetro: \n-> ");
	scanf("%d", &num);

	s = sequencia(num);
	printf("\t%d", s);
	
	return 0;
}

int sequencia(int num) 
{
	int a, b, f, seq;

	seq = 1;

	for (int i = 0; i <= num; i++)
	{
		f = 1;
		for (int j = 0; j <= a; j++)
		{
			f *= b;
		}
		seq = seq + 1 / f;
	}
	
}