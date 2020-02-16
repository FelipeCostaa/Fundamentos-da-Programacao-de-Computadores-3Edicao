/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 2 

int main(int argc, char const *argv[])
{
	int matriz[tam][tam], resultante[tam][tam], maior;
	int i, j;

	for (i = 0; i < tam; i++)
	{
		for (j = 0; j < tam; j++)
		{
			printf("%d - %d");
			scanf("%d", &matriz[i][j]);
		}
	}

	return 0;
}