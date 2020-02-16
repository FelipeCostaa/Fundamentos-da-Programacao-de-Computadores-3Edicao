/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex21, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int voto, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0, cont6 = 0, cont7 = 0;
  float porcentagemNulos, porcentagemBrancos;

  do
  {
    voto = 0;
    printf("\n\t**SISTEMA DE VOTOS PARA ELEIÇÃO**");
    printf("\n\t1 - Candidato A");
    printf("\n\t2 - Candidato B");
    printf("\n\t3 - Candidato C");
    printf("\n\t4 - Candidato D");
    printf("\n\t5 - Voto Nulo");
    printf("\n\t6 - Voto Em Branco");
    printf("\n\t7 - SAIR");
    printf("\n\tVOTO: ");
    scanf("%d", &voto);

    if (voto == 1)
    {
      cont1++;
    }
    else if (voto == 2)
    {
      cont2++;
    }
    else if (voto == 3)
    {
      cont3++;
    }
    else if (voto == 4)
    {
      cont4++;
    }
    else if (voto == 5)
    {
      cont5++;//votos nulos
    }
    else if (voto == 6)
    {
      cont6++;//votos em branco
    }
    else if (voto > 6)
    {
      printf("\n\tCOMANDO INVALIDO!!\n");
      break;
    }

    cont7++; //total de votos
  } while (voto != 0 || voto == 7);

  porcentagemNulos = cont5 * 100 / cont7;
  porcentagemBrancos = cont6 * 100 / cont7;

  printf("\n\tTotal de votos na eleição: %d", cont7 - 1);
  printf("\n\tQuantidade de votos para o candidato A: %d", cont1);
  printf("\n\tQuantidade de votos para o candidato B: %d", cont2);
  printf("\n\tQuantidade de votos para o candidato C: %d", cont3);
  printf("\n\tQuantidade de votos para o candidato D: %d", cont4);
  printf("\n\tPorcentagem de votos nulos: %.2f", porcentagemNulos);
  printf("\n\tPorcentagem de votos em branco: %.2f", porcentagemBrancos);

  return (EXIT_SUCCESS);
}