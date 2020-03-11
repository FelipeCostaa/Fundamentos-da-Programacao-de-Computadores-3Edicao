/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 10

int main(int argc, char const *argv[])
{
	int vet1[tam], vet2[tam];

	srand(time(NULL));

	for (int i = 0; i < tam; i++)
	{
		vet1[i] = (rand() % 100) + 1;
	}
	
	printf("\nVetor gerado: ");
	for (int i = 0; i < tam; i++)
	{
		printf("\n[%d]= %d", i+1, vet1[i]);
	}	
	
	return 0;
}

int fatorial(int a[tam], int b[tam])
{
	int f, a[tam], b[tam];

	for (int i = 0; i < tam; i++)
	{
		
	}
	
}