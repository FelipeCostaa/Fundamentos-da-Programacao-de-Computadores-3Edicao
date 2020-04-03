/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mediaSalario(float *salario, int cont);
void mediaNumFilhos(int *numFilhos, int cont);
void maiorSalario(float *salario, int cont);

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
		scanf("%d", &numFilhos[cont - 1]);

		do
		{
			printf("\nContinuar inserindo dados? \n(0 não | 1 sim) \n--> ");
			scanf("%d", &menu);
			printf("\n-------------------------");
		} while (menu != 0 && menu != 1);

		cont++;
	} while (menu != 0);

	printf("\n\n");

	mediaSalario(salario, cont);
	mediaNumFilhos(numFilhos, cont);
	maiorSalario(salario, cont);

	return 0;
}

void mediaSalario(float *salario, int cont)
{
	float media = 0;

	for (int i = 0; i < cont; i++)
	{
		media += salario[i];
	}

	media /= (cont - 1);

	printf("\nA media do salario é de: R$%.2f", media);
}

void mediaNumFilhos(int *numFilhos, int cont)
{
	float media = 0;

	for (int i = 0; i < cont; i++)
	{
		media += numFilhos[i];
	}

	media /= (cont - 1);

	printf("\nA media do numero de filhos é de: %.2f", media);
}

void maiorSalario(float *salario, int cont)
{
	float maiorSal = 0;

	for (int i = 0; i < cont; i++)
	{
		if (salario[i] > maiorSal)
		{
			maiorSal = salario[i];
		}
	}

	printf("\nO maior salario é de: R$%.2f", maiorSal);
}