/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 8
#define tam2 64 // quantidade de caracteres nome

int main(int argc, char const *argv[])
{
	float nota[tam1];
	char aluno[tam1][tam2];
	int i;
	float total = 0, media;

	for (i = 0; i < tam1; i++)
	{
		printf("\nDigite o nome do %dº aluno: ", i + 1);
    setbuf(stdin, NULL); // limpar o buffer
		scanf("%[^\n]", &aluno[i]);
		printf("\nDigite a nota do %s: ", aluno[i]);
		scanf("%f", &nota[i]);
		total += nota[i];
		system("clear");
	}

	printf("\nRelatorio das notas: ");
	printf("\nNome: \t\t\tNota: ");
	for (i = 0; i < tam1; i++)
	{
		printf("\n%s \t\t\t%.2f", aluno[i], nota[i]);
	}
	media = total / tam1;
	printf("\n\nMedia da classe: %.2f", media);
	d
	return 0;
}