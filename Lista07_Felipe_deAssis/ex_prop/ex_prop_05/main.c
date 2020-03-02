/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

// tem que ser corrigido alguns detalhes

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define mes 6
#define semana 2

int main(int argc, char const *argv[])
{
	float valoresVendas[mes][semana], totalMes[mes], totalSemana[semana];
	int cont = 0;

	for (int i = 0; i < mes; i++)
	{
		totalMes[i] = 0;

		printf("\n%dº mês: ", i+1);
		for (int j = 0; j < semana; j++)
		{
			printf("\n%dª semana: ", j+1);
			printf("\nValor das vendas: R$");
			scanf("%f", &valoresVendas[i][j]);

			totalMes[i] += valoresVendas[i][j];
			totalSemana[cont] += valoresVendas[i][i];
			cont++; 
		}
		printf("\n--------------------------");
	}
	
	for (int i = 0; i < mes; i++)
	{
		printf("\nO total vendido no %dº mês foi de: R$%.2f", i+1, totalMes[i]);
	}
	printf("\n--------------------------");
	
	for (int i = 0; i < cont; i++)
	{
		printf("\nTotal vendido na %dª semana: R$%.2f", i+1, totalSemana[i]);
	}
	
	
	return 0;
}