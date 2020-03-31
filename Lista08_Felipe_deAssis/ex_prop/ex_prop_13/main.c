/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

// Tem que finalizar

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 3
#define CARACTERES 1

int main(int argc, char const *argv[])
{
	int idade[TAM];
	char sexo[TAM];
	float salario[TAM];
	int numeroFilhos[TAM];

	printf("\nPreencha os dados: ");
	for (int i = 0; i < TAM; i++)
	{
		system("clear");
		printf("\n%dª pessoa: ", i + 1);
		printf("\nIdade: ");
		scanf("%d", &idade[i]);
		// do
		// {
		printf("\nSexo ('m' ou 'f'): ");
		setbuf(stdin, NULL);
		// gets(sexo[i]);
		scanf(" %s", &sexo[i]);

		// } while (sexo[i] != 'm' || sexo[i] != 'f');
		printf("\nSalario: R$");
		scanf("%f", &salario[i]);
		printf("\nNumero de filhos: ");
		scanf("%d", &numeroFilhos[i]);
	}

	return 0;
}