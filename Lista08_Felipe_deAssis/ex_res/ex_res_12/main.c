/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 3
int main(int argc, char const *argv[])
{
	int numPerfeito[tam];

	for (int i = 0; i < tam; i++)
	{
		printf("\t%d\t-", numPerfeito[i]);
	}
	
	
	return 0;
}

int numerosPerfeitos(int numPerfeito[tam])
{
	int a, r, num = 1, soma, cont = 0;

	while (cont <= 3)
	{
		soma = 0;
		for (int a = 1; a < num-1; a++)
		{
			r = num % a;
			if (r == 0)
			{
				soma += a;
			}
			if (soma == num)
			{
				numPerfeito[cont +1];
				cont++;
			}
		}
		num++;
		
	}
	
}