/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 5

void ordenar(int vetor[tam]);

int main(int argc, char const *argv[])
{
	int vetor[tam];

	srand(time(NULL));

	for (int i = 0; i < tam; i++)
	{
		vetor[i] = rand() % 100;
	}
	printf("\nVetor inicial: ");
	for (int i = 0; i < tam; i++)
	{
		printf("\n[%d]= %d", i+1, vetor[i]);
	}

	ordenar(vetor);
	
	printf("\nVetor ordenado: ");
	for (int i = 0; i < tam; i++)
	{
		printf("\n[%d]= %d", i+1, vetor[i]);
	}
	
	return 0;
}

void ordenar(int vetor[tam])
{
	int aux;

	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam; j++)
		{
			if (vetor[j] > vetor[j+1])
			{
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
			}
			
		}
		
	}

}