/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 10
#define tam2 5

int main(int argc, char const *argv[])
{
	float preco[tam1];
	int quantEstoqueProd[tam1][tam2], quantProdArmazem[tam1], quantEstoqueGeral = 0, 
			posicaoLinhaMaiorEstoque = 0, posicaoColunaMaiorEstoque = 0;

	for (int i = 0; i < tam1; i++)
	{
		printf("\nInsira o preço do %dª produto: R$", i+1);
		scanf("%d", &preco[i]);
	}

	for (int i = 0; i < tam2; i++)
	{
		printf("\n%dº Armazem: ", i+1);
		quantProdArmazem[i] = 0;
		for (int j = 0; j < tam1; j++)
		{
			printf("\nQuantidade em estoque do %dº produto: ", j+1);
			scanf("%d", &quantEstoqueProd[i][j]);

			quantProdArmazem[i] += quantEstoqueProd[i][j];
			quantEstoqueGeral += quantEstoqueProd[i][j];

			if (quantEstoqueProd[i][j] > posicaoLinhaMaiorEstoque)
			{
				posicaoLinhaMaiorEstoque = i;
				posicaoColunaMaiorEstoque = j;
			}
			
		}
		
	}
	
	printf("\n\n");
	for (int j = 0; j < tam2; j++)
	{
		printf("\nQuantidade de produtos estocados no %dº armazem: %d", j+1, quantProdArmazem[j]);
	}

	printf("\n\nQuantidade de total de itens armazenados: %d", quantEstoqueGeral);
	
	return 0;
}

// Crie um programa que:
// ■ ■ receba o preço de dez produtos e armazene-os em um vetor;			X
// ■ ■ receba a quantidade estocada de cada um desses produtos, em cinco armazéns diferentes, utilizando		X
// uma matriz 5  10.
// O programa deverá calcular e mostrar:
// ■ ■ a quantidade de produtos estocados em cada um dos armazéns;				X
// ■ ■ a quantidade de cada um dos produtos estocados, em todos os armazéns juntos;			X
// ■ ■ o preço do produto que possui maior estoque em um único armazém;
// ■ ■ o menor estoque armazenado;
// ■ ■ o custo de cada armazém