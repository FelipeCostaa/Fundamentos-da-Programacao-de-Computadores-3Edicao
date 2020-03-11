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
	int vetor1[tam], vetor2[tam], vetor3[tam];

	srand(time(NULL));

	for (int i = 0; i < tam; i++)
	{
		vetor1[i] = rand() % 100;
	}
	
	for (int i = 0; i < tam; i++)
	{
		vetor2[i] = rand() % 100;
	}
	
	return 0;
}