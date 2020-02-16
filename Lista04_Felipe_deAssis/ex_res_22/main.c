/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex22, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  char sexo, experiencia;
  int idade, qtdFem, qtdMasc, idadeMediaMasc, idadeMasc, qtdFemComExperiencia,
      menorIdade;
  float porcentagemMais45anos, porcentagem;

  qtdFem = 0;
  qtdMasc = 0;
  porcentagemMais45anos = 0;
  qtdFemComExperiencia = 0;
  menorIdade = 0;

  printf("\n**Informe 0 na idade quando desejar sair**\n");

  while (idade != 0)
  {
    printf("\nInsira os dados do candidato: ");
    printf("\nIdade: ");
    scanf("%d%*c", &idade);
    printf("\nSexo (M ou F): ");
    scanf(" %c%*c", &sexo);
    printf("\nPossui experiencia (S ou N): ");
    scanf(" %c%*c", &experiencia);

    if (sexo == 'F')
    {
      qtdFem++;
      if (experiencia == 'S')
      {
        if (idade < 21)
        {
          qtdFemComExperiencia++;
        }
        if (idade < menorIdade)
        {
          menorIdade = idade;
        }
      }
    }
    else if (sexo == 'M')
    {
      qtdMasc++;
      if (experiencia == 'S')
      {
        idadeMasc += idade;
      }
      if (idade > 45)
      {
        porcentagemMais45anos++;
      }
    }
  }
  idadeMediaMasc = idadeMasc / qtdMasc;
  porcentagem = porcentagemMais45anos * 100 / qtdMasc;
  printf("\n\tQuantidade de candidatos do sexo feminino: %d", qtdFem);
  printf("\n\tQuantidade de candidatos do sexo masculino: %d", qtdMasc);
  printf("\n\tIdade media dos homens que ja tem experiencia no serviço: %d", idadeMediaMasc);
  printf("\n\tPorcentagem dos homens com +45 anos entre o total de homens: %.2f", porcentagem);
  printf("\n\tQuantidade de mulheres com -21 anos com experiencia: %d", qtdFemComExperiencia);
  printf("\n\tMenor idade das mulheres que ja tem experiencia: %d", menorIdade);

  return (EXIT_SUCCESS);
}
