/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex10, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int idade, qtdJogadoresMenorQue18;
  float peso, altura, mediaIdadeTime, mediaAltCampeonato, porcentagemJogadoresMaisDe80kg, totalJogadoresMaisDe80kg;
  int i, j, contTime;

  contTime = 0;
  qtdJogadoresMenorQue18 = 0;
  porcentagemJogadoresMaisDe80kg = 0;

  for (i = 0; i < 5; i++) //for para qtd de times
  {
    contTime++;
    mediaIdadeTime = 0;
    for (j = 0; j < 11; j++) //for para qtd de jogadores
    {
      printf("\n\nInsira os dados dos jogadores do time %d", contTime);
      printf("\nIdade: ");
      scanf("%d%*c", &idade);
      printf("\nPeso: ", &peso);
      scanf("%f%*c", &peso);
      printf("\nAltura: ");
      scanf("%f%*c", &altura);

      //calcula a qtd com -18 anos
      if (idade < 18)
      {
        qtdJogadoresMenorQue18++;
      }
      mediaIdadeTime = mediaIdadeTime + idade;
      mediaAltCampeonato = mediaAltCampeonato + altura;

      //porcentagem de jogadores com mais de 80kg
      if (peso > 80)
      {
        totalJogadoresMaisDe80kg++;
      }
      mediaIdadeTime /= 11;
      printf("\n\tMedia de idade: %f", mediaIdadeTime);
    }
  }
  printf("\n\tQuantidade de jogadores menores de 18 anos: %d", qtdJogadoresMenorQue18);
  mediaAltCampeonato = mediaAltCampeonato / 55;
  printf("\n\tMedia de altura dos jogadores: %.2f", mediaAltCampeonato);
  porcentagemJogadoresMaisDe80kg = totalJogadoresMaisDe80kg * 100 / 55;
  printf("\n\tPorcentagem de jogadores com mais de 80Kg: %f", porcentagemJogadoresMaisDe80kg);

  return (EXIT_SUCCESS);
}
