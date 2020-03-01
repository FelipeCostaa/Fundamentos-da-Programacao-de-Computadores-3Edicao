/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

// o codigo deve ser refeito 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int dim, num[dim][dim], linha, coluna, soma, cont;

	do
	{
		printf("\nInforme a dimensão da num (Quadrada) - no máximo 100: ");
		scanf("%d", &dim);		
	} while (dim <= 1 || dim > 100);

	linha = 1;
	coluna = 1;
	
	while (1 <= dim)
	{
		while (coluna <= dim)
		{
			printf("\n[%d]= ", coluna);
			scanf("%d", &num[0, coluna]);
			coluna++;
		}
		linha = linha + 1;
		coluna = 1;	
	}
	system("clear");
	
	soma = 0;
	cont = 0;
	linha = 2;
	coluna = dim;

	while (1 <= dim)
	{
		while (coluna >= dim - cont)
		{
			printf("\n-> ");
			scanf("%d", &num[0, coluna]);
			soma = soma + num[0, coluna];
			coluna = coluna - 1;
		}
		cont = cont + 1;
		linha = linha + 1;
		coluna = dim;
	}
	
	printf("\nA soma é: %d", soma);
	
	return 0;
}