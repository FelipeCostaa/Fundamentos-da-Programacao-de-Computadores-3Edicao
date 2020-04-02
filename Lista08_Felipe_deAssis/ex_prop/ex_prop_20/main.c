/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

// A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e o
// número de filhos. Faça uma sub-rotina que leia esses dados para um número não determinado de pessoas
// e retorne a média de salário da população, a média do número de filhos, o maior salário e o percentual
// de pessoas com salário inferior a R$ 380,00.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mediaSalario(float *salario, int cont);

int main(int argc, char const *argv[])
{
	int cont = 1, menu = 0;
	float salario[cont];
	int numFilhos[cont];

	do
	{
		printf("\nSalário: R$");
		scanf("%f", &salario[cont]);
		printf("\nNumero de filhos: ");
		scanf("%d", &numFilhos[cont]);

		printf("\nValor do salario na memoria: R$%.2f", salario[cont]);

		do
		{
			printf("\nContinuar inserindo dados? \n(0 não | 1 sim) \n--> ");
			scanf("%d", &menu);
			// system("clear");
		} while (menu != 0 && menu != 1);
		// printf("\nPassou\n");

		cont++;
	} while (menu != 0);

	printf("\nSalario: ");
	for (int i = 0; i < cont - 1; i++)
	{
		printf("\n%dº | R$%.2f", i + 1, salario[i]);
	}

	// mediaSalario(salario, cont);

	return 0;
}

void mediaSalario(float *salario, int cont)
{
	float media = 0;

	printf("\nValor salario posição 0: R$%.2f", salario[0]);

	// for (int i = 0; i < cont; i++)
	// {
	// 	media += salario[i];
	// 	printf("\nValor da media teste: %.2f", media);
	// }

	printf("\n");
}