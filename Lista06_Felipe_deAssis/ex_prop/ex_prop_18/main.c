/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 15

int main(int argc, char const *argv[])
{
	int vetor[tam];
	int maiorNumero = 0, posicaoMaior, menorNumero = 999999999, posicaoMenor;

	printf("\nInforme os dados: ");
	for (int i = 0; i < tam; i++)
	{
		printf("\n%dº numero: ", i + 1);
		scanf("%d", &vetor[i]);
		if (vetor[i] > maiorNumero)
		{
			maiorNumero = vetor[i];
			posicaoMaior = i;
		}
		if (vetor[i] < menorNumero)
		{
			menorNumero = vetor[i];
			posicaoMenor = i;
		}
	}
	system("clear");

	printf("\nNumeros informados:\n");
	for (int i = 0; i < tam; i++)
	{
		printf("%d - ", vetor[i]);
	}
	
	printf("\n\n\nO maior numero do vetor é: %d\nA posição que ele ocupa é: %d\n\n", maiorNumero, posicaoMaior + 1);
	printf("\nO menor numero do vetor é: %d\nA posição que ele ocupa é: %d\n\n", menorNumero, posicaoMenor + 1);
	
	return 0;
}

// Faça um programa que preencha um vetor com quinze números, determine e mostre:
// ■ ■ o maior número e a posição por ele ocupada no vetor;
// ■ ■ o menor número e a posição por ele ocupada no vetor.