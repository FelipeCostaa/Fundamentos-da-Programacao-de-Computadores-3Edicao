/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 5

int main(int argc, char const *argv[])
{
	int vetorA[tam], vetorB[tam], resultante[tam];
	int sub = tam - 1;

	printf("\nVetor A: ");
	for (int i = 0; i < tam; i++)
	{
		printf("\n%dº numero: ", i + 1);
		scanf("%d", &vetorA[i]);
	}
	printf("\nVetor B: ");
	for (int i = 0; i < tam; i++)
	{
		printf("\n%dº numero: ", i + 1);
		scanf("%d", &vetorB[i]);
	}

	system("clear");

	printf("\nVetor A: \n");
	for (int i = 0; i < tam; i++)
	{
		printf("%d - ", vetorA[i]);
	}
	printf("\nVetor B: \n");
	for (int i = 0; i < tam; i++)
	{
		printf("%d - ", vetorB[i]);
	}

	for (int i = 1; i <= tam; i++)
	{
		resultante[i] = vetorB[sub] - vetorA[i]; // **RESOLVER ISSO URGENTE**
		sub--;
	}
	printf("\nVetor resultante da subtração: \n");
	for (int i = 0; i < tam; i++)
	{
		printf("%d - ", resultante[i]);
	}
	printf("\n");
	
	return 0;
}

// Faça um programa que leia dois vetores (A e B) com cinco posições para números inteiros. O programa
// deve, então, subtrair o primeiro elemento de A do último de B, acumulando o valor, subtrair o segundo
// elemento de A do penúltimo de B, acumulando o valor e assim por diante. Ao final, mostre o resultado
// de todas as subtrações realizadas.