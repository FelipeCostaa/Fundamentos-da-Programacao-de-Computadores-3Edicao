/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float percentualDeAcrescimo(float valorAntigo, float valorAtual);

int main(int argc, char const *argv[])
{
	float valorAntigo, valorAtual;

	printf("\nValor antigo do produto: R$");
	scanf("%f", &valorAntigo);
	printf("\nValor atual do produto: R$");
	scanf("%f", &valorAtual);

	printf("\nO percentual de acrescimo entre os valores é de: %.2f%%", percentualDeAcrescimo(valorAntigo, valorAtual));
	
	return 0;
}

float percentualDeAcrescimo(float valorAntigo, float valorAtual)
{
	float resultado;

	resultado = ((valorAtual - valorAntigo) / valorAntigo) * 100;

	return resultado;
}