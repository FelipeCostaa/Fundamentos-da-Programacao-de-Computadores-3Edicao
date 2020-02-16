/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex3, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int idade = 0, idade15 = 0, idade16 = 0, idade31 = 0, idade46 = 0, idade60 = 0;
  int i;
  float porcentagem1, porcentagem2;

  for (i = 1; i <= 8; i++)
  {
    printf("\nInforme a %dº idade: ", i);
    scanf("%d%*c", &idade);
  
  //letra A
    if (idade <= 15)
    {
      idade15++;
    }
    else if (idade >= 16 && idade <= 30)
    {
      idade16++;
    }
    else if (idade >= 31 && idade <= 45)
    {
      idade31++;
    }
    else if (idade >= 46 && idade <= 60)
    {
      idade46++;
    }
    else if (idade > 60)
    {
      idade60++;
    }
  }
  //letra A
  printf("\n\tPessoas até 15 anos: %d", idade15);
  printf("\n\tPessoas de 16 até 30 anos: %d", idade16);
  printf("\n\tPessoas de 31 até 45 anos: %d", idade31);
  printf("\n\tPessoas de 46 até 60 anos: %d", idade46);
  printf("\n\tPessoas acima de 60 anos: %d", idade60);

  //letra B
  porcentagem1 = idade15 * 100 / 8;
  printf("\n\tPorcentagem de pessoas na primeira faixa etaria: %.2f", porcentagem1);
  //letra C
  porcentagem2 = idade60 * 100 / 8;
  printf("\n\tPorcentagem de pessoas na ultima faixa etaria: %.2f", porcentagem2);

  return (EXIT_SUCCESS);
}
