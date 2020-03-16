/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 10

void elementosAeB(int vetor1[TAM], int vetor2[TAM], int vetor3[TAM]);
void ordemDecrescente(int vetor3[TAM]);

int main(int argc, char const *argv[])
{
	int vetor1[TAM], vetor2[TAM], vetor3[TAM];

	srand(time(NULL));

	printf("\nPrimeiro vetor gerado: ");
	for (int i = 0; i < TAM; i++)
	{
		vetor1[i] = rand() % 15;
		printf("\n[%d]= %d", i+1, vetor1[i]);
	}

	printf("\nSegundo vetor gerado: ");
	for (int i = 0; i < TAM; i++)
	{
		vetor2[i] = rand() % 15;
		printf("\n[%d]= %d", i+1, vetor2[i]);
	}	

	elementosAeB(vetor1, vetor2, vetor3);

	printf("\n\nVetor 3(união do vetor 1 e vetor 2):");
	for (int i = 0; i < TAM+TAM; i++)
	{
		printf("\n[%d]= %d", i+1, vetor3[i]);
	}

	ordemDecrescente(vetor3);

	printf("\n\nVetor 3 ordenado de forma decrescente: ");
	for (int i = 0; i < TAM+TAM; i++)
	{
		printf("\n[%d]= %d", i+1, vetor3[i]);
	}
		

	return 0;
}

void elementosAeB(int vetor1[TAM], int vetor2[TAM], int vetor3[TAM])
{
	for (int i = 0; i < TAM; i++)
	{
		vetor3[i] = vetor1[i];		
	}

	for (int j = 0; j < TAM; j++)
	{
		vetor3[TAM+j] = vetor2[j];
	}
	

}

void ordemDecrescente(int vetor3[TAM])
{
	int aux;

	for (int i = 0; i < TAM+TAM; i++)
	{
		for (int j = 0; j < TAM+TAM; j++)
		{
			if (vetor3[i] > vetor3[j+1])
			{
				aux = vetor3[i];
				vetor3[i] = vetor3[j+1];
				vetor3[j+1] = aux;
			}
			
		}
		
	}
	
}