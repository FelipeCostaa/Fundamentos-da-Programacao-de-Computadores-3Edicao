/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 2 // nomes das lojas
#define tam2 2 // nomes produtos
#define tam3 64 // quantidade de caracteres

int main(int argc, char const *argv[])
{
	char lojas[tam1][tam3], produtos[tam2][tam3];
	float precos[tam1][tam2];
	int i, j;

	for (i = 0; i < tam1; i++)
	{
		printf("\n%dª Loja: ", i + 1);
		printf("\nNome: ");
		setbuf(stdin, NULL); // limpa o buffer do teclado
		scanf("%s", &lojas[i][tam3]);
		for (j = 0; j < tam2; j++)
		{
			printf("\n%dº Produto: ", j + 1);
			printf("\nNome: ");
			setbuf(stdin, NULL);
			scanf("%s", &produtos[j][tam3]);
			printf("\nPreço: R$");
			scanf("%f", &precos[i][j]);
			printf("\n-----------------------------");
		}
		printf("\n=============================");
	}

	for (i = 0; i < tam1; i++)
	{
		for (j = 0; j < tam2; j++)
		{
			if (precos[i][j] < 120)
			{
				printf("\nNome da loja: %s", lojas[i]);
				printf("\nNome do produto: %s", produtos[j]);
				printf("\nPreço: R$%.2f", precos[i][j]);
			}
		}
	}
	
	
	return 0;
}

// Faça um programa que preencha:
// ■ ■ um vetor com oito posições, contendo nomes de lojas;
// ■ ■ outro vetor com quatro posições, com nomes de produtos;
// ■ ■ uma matriz com os preços de todos os produtos em cada loja.
// O programa deverá mostrar todas as relações (nome do produto — 
// nome da loja) em que o preço não
// ultrapasse R$ 120,00.