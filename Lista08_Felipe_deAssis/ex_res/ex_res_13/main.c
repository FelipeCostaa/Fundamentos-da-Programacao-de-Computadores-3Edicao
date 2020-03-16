/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fatorial(int vet1[tam], int vet2[tam]);

#define tam 10

int main(int argc, char const *argv[])
{
	int vet1[tam], vet2[tam];

	srand(time(NULL));

	for (int i = 0; i < tam; i++)
	{
		vet1[i] = (rand() % 10) + 1;
	}
	
	printf("\nVetor inicial gerado: ");
	for (int i = 0; i < tam; i++)
	{
		printf("\n[%d]= %d", i+1, vet1[i]);
	}	

	printf("\n\nFatorial do valores do vetor: ");
	printf(fatorial(vet1, vet2));
	
	return 0;
}

int fatorial(int vet1[tam], int vet2[tam])
{
	int fat;

	for (int i = 0; i < tam; i++)
	{
		for (int fat = 1; vet1[i] > 1; vet1[i]--)
		{
			fat *= vet1[i];
			vet2[i] = fat;
		}
		printf("\nFatorial de %d = %d", vet1[i], vet2[i]);	
		
	}
	
	return fatorial;
}