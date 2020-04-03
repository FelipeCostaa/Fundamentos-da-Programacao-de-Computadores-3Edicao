/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MES 12
#define CARACTERES 64

void menorTemperatura(float *temperatura, int M, char meses[MES][CARACTERES]);
void maiorTemperatura(float *temperatura, int M, char meses[MES][CARACTERES]);

int main(int argc, char const *argv[])
{
	char meses[MES][CARACTERES] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
	float temperatura[MES];

	for (int i = 0; i < MES; i++)
	{
		printf("\nTemperatura média do mês de %s: ", meses[i]);
		scanf("%f", &temperatura[i]);
	}

	menorTemperatura(temperatura, MES, meses);
	maiorTemperatura(temperatura, MES, meses);

	return 0;
}

void menorTemperatura(float *temperatura, int M, char meses[MES][CARACTERES])
{
	float menor = 9999;
	int posicao;

	for (int i = 0; i < MES; i++)
	{
		if (temperatura[i] < menor)
		{
			menor = temperatura[i];
			posicao = i - 1;
		}
	}

	printf("\nA menor temperatura do ano foi %.2fº no mês de %s.", menor, meses[posicao]);
}

void maiorTemperatura(float *temperatura, int M, char meses[MES][CARACTERES])
{
	float maior = 0;
	int posicao;

	for (int i = 0; i < MES; i++)
	{
		if (temperatura[i] > maior)
		{
			maior = temperatura[i];
			posicao = i - 1;
		}
	}

	printf("\nA maior temperatura do ano foi %.2fº no mês de %s.", maior, meses[posicao]);
}