/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define turmas 3
#define alunos 8
#define disciplinas 4

int main(int argc, char const *argv[])
{
	float medias[turmas][alunos][disciplinas], mediaAluno, mediaTurma;
	int i, j, k;

	for (i = 0; i < turmas; i++)
	{
		printf("\n%dª Turma: ", i+1);
		for (j = 0; j < alunos; j++)
		{
			printf("\n%dº Aluno: ", j+1);
			for (k = 0; k < disciplinas; k++)
			{
				printf("\n%dª Disciplina: ", k+1);
				printf("\nInforme a média da nota: ");
				scanf("%f", &medias[i][j][k]);
			}
			
		}
		system("clear");
	}

	for (i = 0; i < turmas; i++)
	{
		for (j = 0; j < alunos; j++)
		{
			mediaAluno = 0;
			for (k = 0; k < disciplinas; k++)
			{
				mediaAluno += medias[i][j][k];
			}
			mediaAluno = mediaAluno / disciplinas;
			printf("\nA media do %dº aluno na turma %d é: mediaAluno", j+1, k+1, mediaAluno);
		}
		
	}
	
	
	return 0;
}