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
	int vetor1[tam], vetor2[tam], resultante[tam];

	printf("\nInforme os valores do primeiro vetor: ");
	for (int i = 0; i < tam; i++)
	{
		printf("\n%dº numero: ", i + 1);
		scanf("%d", &vetor1[i]);
	}
	system("clear");
	printf("\nInforme os valores do segundo vetor: ");
	for (int i = 0; i < tam; i++)
	{
		printf("\n%dº numero: ", i + 1);
		scanf("%d", &vetor2[i]);
	}	
	printf("\n\n");
	system("clear");
	printf("\n\nPrimero vetor: \n");
	for (int i = 0; i < tam; i++)
	{
		printf("%d - ", vetor1[i]);
	}
	printf("\n\nSegundo vetor: \n");
	for (int i = 0; i < tam; i++)
	{
		printf("%d - ", vetor2[i]);
	}
	for (int i = 0; i < tam; i++)
	{
		resultante[i] = vetor1[i] * vetor2[i];
	}
	printf("\n\nVetor resultande da multiplicação dos vetores de mesmo indice: \n");
	for (int i = 0; i < tam; i++)
	{
		printf("%d - ", resultante[i]);
	}	

	
	return 0;
}

// Faça um programa que leia dois vetores de dez posições e faça a multiplicação dos elementos de mesmo
// índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.