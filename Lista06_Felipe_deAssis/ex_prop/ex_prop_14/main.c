/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 6
#define tam2 64

int main(int argc, char const *argv[])
{
	char nomeAluno[tam1][tam2];
	float nota1[tam1], nota2[tam1], media[tam1];
	int i;
	char situacao[tam1][tam2]; // situacao 0 = reprovado, 1 = aprovado

	printf("\nInforme os dados dos alunos: ");
	for (i = 0; i < tam1; i++)
	{
		printf("\nNome: ");
		setbuf(stdin, NULL); // limpar o buffer
		scanf("%[^\n]", &nomeAluno[i]);
		printf("\nNota 1ª prova: ");
		scanf("%f", &nota1[i]);
		printf("\nNota 1ª prova: ");
		scanf("%f", &nota2[i]);

		media[i] = (nota1 + nota2) / 2;
	}
	
	printf("\nALUNO:\t\t1ª PROVA\t\t2ª PROVA\t\tMEDIA\t\tSITUAÇÃO");
	for (i = 0; i < tam1; i++)
	{
		printf("\n%s\t\t%.2f\t\t%.2f\t\t%.2f", nomeAluno[i], nota1[i], nota2[i], media[i]);
		if (media[i] < 7)
		{
			situacao[i] = "Reprovado";
			printf("\t\t%s\n", situacao[i][tam2]);
		}
		else
		{
			situacao[i] = "Aprovado";
			printf("\t\t%s\n", situacao[i][tam2]);
		}
	}
	
	return 0;
}
