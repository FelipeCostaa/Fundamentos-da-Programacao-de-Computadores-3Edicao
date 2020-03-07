/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void multiplicacao(int num);

int main(int argc, char const *argv[])
{
	int num;

	do
	{
		printf("\nInforme um numero inteiro entre 1 e 9: \n-> ");
		scanf("%d", &num);
	} while (num >= 1 && num <= 9);
	
	multiplicacao(num);

	return 0;
}

void multiplicacao(int num)
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("%d\n", i * j);			
		}
		
	}
	
}
