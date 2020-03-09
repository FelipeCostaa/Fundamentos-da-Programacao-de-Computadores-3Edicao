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
	
	
	return 0;
}

int fatorial()
{
	
}