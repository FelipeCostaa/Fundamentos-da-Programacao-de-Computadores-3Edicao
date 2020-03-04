/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 8
#define tam2 5

int main(int argc, char const *argv[])
{
	int idade[tam1], codigoDisciplina[tam2], quantProvas[tam1][tam2];
	int quantIdade = 0;

	for (int i = 0; i < tam1; i++)
	{
		printf("\n%dº aluno: ", i+1);
		printf("\nIdade: ");
		scanf("%d", &idade[i]);
		if (idade >= 18 && idade <= 25)
		{
			quantIdade++;
		}
		
	}
	
	printf("\n---------------------------------------------");
	for (int i = 0; i < tam2; i++)
	{
		printf("\n%dª disciplina", i+1);
		printf("\nCodigo: ");
		scanf("%d", &codigoDisciplina[i]);
	}
	
	printf("\n---------------------------------------------");
	for (int i = 0; i < tam1; i++)
	{
		for (int j = 0; j < tam2; j++)
		{
			printf("\nQuantidade de provas que o aluno %d fez na disciplina %d: ", i+1, j+1);
			scanf("%d", &quantProvas[i][j]);

			if (quantProvas[i][j] < 3)
			{
				
			}
			
		}
		printf("\n-------------------------------------------");
	}
	
	if (quantIdade > 0)
	{
		printf("\nQuantidade de alunos com idade entre 18 e 25 anos: %d", quantIdade);
	}
	else
	{
		printf("\nNão ha nenhum aluno informado com idade entre 18 e 25.");
	}
	
	
	return 0;
}