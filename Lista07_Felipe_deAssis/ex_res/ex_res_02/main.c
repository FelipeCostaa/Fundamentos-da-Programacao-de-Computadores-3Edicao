/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 5
#define tam2 3

int main(int argc, char const *argv[])
{
	float nota[tam1][tam2], menorNota;
	int i, j;
	int posicaoMenorProva;

	// recebe as 3 notas de 10 alunos
	for (i = 0; i < tam1; i++)
	{
		printf("Notas do %dº aluno: \n", i + 1);
		for (j = 0; j < tam2; j++)
		{
			printf("%dº prova: ", j + 1);
			scanf("%f", &nota[i][j]);
		}
	}

	// verifica a menor nota de cada aluno
	for (i = 0; i < tam1; i++)
	{
		menorNota = 100;
		for (j = 0; j < tam2; j++)
		{
			if (nota[i][j] < menorNota)
			{
				menorNota = nota[i][j];
				posicaoMenorProva = j;
			}
		}
		printf("%dº aluno: \n", i + 1);
		printf("Menor nota: %.2f\n", menorNota);
		printf("Prova %d\n", posicaoMenorProva + 1);
	}
	
	return 0;
}
