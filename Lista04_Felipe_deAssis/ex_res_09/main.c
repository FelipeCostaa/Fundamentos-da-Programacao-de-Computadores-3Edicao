/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex9, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  float nota1, nota2, mediaIndividual, mediaClasse;
  int totalAprov, totalExame, totalReprov;
  int i;

  for (i = 0; i < 6; i++)
  {
    printf("\n\nInforme a primeira nota: ");
    scanf("%f%*c", &nota1);
    printf("\nInforme a segunda nota: ");
    scanf("%f%*c", &nota2);

    mediaIndividual = (nota1 + nota2) / 2;
    printf("\n\tMedia: %.2f", mediaIndividual);
    mediaClasse += mediaIndividual;

    if (mediaIndividual <= 3)
    {
      totalReprov++; //pode-se usar totalReprovado++ que teria o mesmo efeito
      printf("\n\tSituação do aluno: Reprovado");
    }
    else if (mediaIndividual > 3 && mediaIndividual < 7)
    {
      totalExame += 1;
      printf("\n\tSituação do aluno: Exame");
    }
    else
    {
      totalAprov += 1;
      printf("\n\tSituação do aluno: Aprovado");
    }
  }

  printf("\n\n\tTotal de alunos aprovados %d", totalAprov);
  printf("\n\tTotal de alunos em exame %d", totalExame);
  printf("\n\tTotal de alunos reprovados %d", totalReprov);
  printf("\n\tA media da turma é de %.2f", mediaClasse);

  return (EXIT_SUCCESS);
}
