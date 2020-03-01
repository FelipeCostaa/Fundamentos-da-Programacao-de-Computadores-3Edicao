/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 5 // vendedores
#define tam2 4 // vendas semanais

int main(int argc, char const *argv[])
{
	float vendas[tam1][tam2], totalVendas[tam1], totalMes, totalSemana[tam2];

	totalMes = 0;
	
	for (int i = 0; i < tam1; i++)
	{
		printf("\n%dº Vendedor: ", i+1);
		totalVendas[i] = 0;
		for (int j = 0; j < tam2; j++)
		{
			printf("\nQuantidade de vendas da %dª semana: ", j+1);
			scanf("%f", &vendas[i][j]);
			totalVendas[i] += vendas[i][j];
			totalMes += totalVendas[i];
		}
		printf("\n-------------------------------");
	}

	system("clear");

	for (int i = 0; i < tam1; i++)
	{
		printf("\nTotal de vendas do %dº vendedor: R$%.2f", i+1, totalVendas[i]);
	}
	
	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			totalSemana[j] = vendas[j][i];
		}
		printf("\nTotal de vendas da %dª semana: R$%.2f", i+1, totalSemana[i]);
	}

	printf("\nTotal de vendas do mês: R$%.2f", totalMes);
	
	return 0;
}