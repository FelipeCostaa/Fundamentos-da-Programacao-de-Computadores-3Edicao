/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 10 

void uniaoVetores(int vetor1[tam], int vetor2[tam]);

int main(int argc, char const *argv[])
{
	int vetor1[tam], vetor2[tam]; // vetor3[tam];

	srand(time(NULL));

	printf("\nPrimeiro vetor gerado: ");
	for (int i = 0; i < tam; i++)
	{
		vetor1[i] = rand() % 100;
		printf("\n[%d]= %d", i+1, vetor1[i]);
	}
	
	printf("\n\nSegundo vetor gerado: ");
	for (int i = 0; i < tam; i++)
	{
		vetor2[i] = rand() % 100;
		printf("\n[%d]= %d", i+1, vetor2[i]);
	}

	uniaoVetores(vetor1, vetor2);

	return 0;
}

void uniaoVetores(int vetor1[tam], int vetor2[tam])
{
	int cont = 0, vetor3[tam];

	for (int i = 0; i < tam; i++)
	{
		vetor3[i] = vetor1[i];		
		cont++;
	}

	for (int i = 0; i < tam; i++)
	{

		for (int j = 0; j < tam; j++)
		{
			if (vetor2[i] != vetor1[j])
			{
				vetor3[tam + i] = vetor2[j];	
				cont++;	
			}
			
		}

	}
	
	printf("\nUnião dos dois vetores: ");
	for (int i = 0; i < cont; i++)
	{
		printf("\n[%d]= %d", i+1, vetor3[i]);
	}
	
	return;
}

// Crie uma sub-rotina que receba como parâmetro dois vetores de dez elementos inteiros positivos e
// mostre o vetor união dos dois primeiros.