/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 5
#define tam2 10
#define tam3 4
#define tam4 3

int main(int argc, char const *argv[])
{
	int vetor1[tam1], vetor2[tam2], matriz[tam3][tam4], maior, menor;
	int mult, matrizResultante[tam3][tam4], somaPares[tam3], quant[tam4];

	printf("\nPrimeiro vetor: ");
	maior = 0;
	for (int i = 0; i < tam1; i++)
	{
		printf("\n%dº numero: ", i+1);
		scanf("%d", &vetor1[i]);
		if (vetor1[i] > maior)
		{
			maior = vetor1[i];
		}
		
	}
	system("clear");
	
	printf("\nSegundo vetor: ");
	menor = 99999999;
	for (int i = 0; i < tam2; i++)
	{
		printf("\n%dº numero: ", i+1);
		scanf("%d", &vetor2[i]);
		if (vetor2[i] < menor)
		{
			menor = vetor2[i];
		}
		
	}	
	system("clear");

	mult = menor * maior;

	printf("\nMatriz: ");
	for (int i = 0; i < tam3; i++)
	{
		for (int j = 0; j < tam4; j++)
		{
			printf("\n[%d][%d]= ", i+1, j+1);
			scanf("%d", &matriz[i][j]);

			// monta a matriz resultante
			matrizResultante[i][j] = matriz[i][j] + mult;
		}
		
	}
	system("clear");

	printf("\nMaior elemento do primeiro vetor: %d", maior);
	printf("\n---------------------------------------------");
	printf("\nMenor elemento do segundo vetor: %d", menor);
	printf("\n---------------------------------------------");

	printf("\nMatriz original: ");
	for (int i = 0; i < tam3; i++)
	{
		for (int j = 0; j < tam4; j++)
		{
			printf("\n[%d][%d]= %d", i+1, j+1, matriz[i][j]);
		}
		
	}
	printf("\n---------------------------------------------");

	printf("\nMatriz resultante: ");
	for (int i = 0; i < tam3; i++)
	{
		somaPares[i] = 0;
		for (int j = 0; j < tam4; j++)
		{
			printf("\n[%d][%d]= %d", i+1, j+1, matrizResultante[i][j]);
			if (matrizResultante[i][j] % 2 == 0)
			{
				somaPares[i] += matrizResultante[i][j];
			}
			if (matrizResultante[i][j] >= 1 && matrizResultante[i][j] <= 5)
			{
				quant[j]++;
			}
			
		}
		
	}
	printf("\n---------------------------------------------");

	printf("\nSoma dos numeros pares do vetor resultante: ");
	for (int i = 0; i < tam3; i++)
	{
		printf("\n%dª linha: %d", i+1, somaPares[i]);
	}
	printf("\n---------------------------------------------");

	printf("\nQuantidade de numeros entre 1 e 5 em cada coluna da matriz resultante");
	for (int i = 0; i < tam3; i++)
	{
		printf("\n%dª coluna: %d", i+1, quant[i]);
	}
			

	return 0;
}