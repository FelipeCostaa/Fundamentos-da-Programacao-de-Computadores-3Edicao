/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex18, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int idade, cont1 = 0, maiorIdade = idade, menorIdade = idade, cont2 = 0, menorIdade2 = 0;
  char sexo, sexoMenorSalario;
  float salario, mediaSalario = 0, menorSalario = salario;

  printf("\n\t**Digite um numero negativo para sair do programa**");
  do
  {
    printf("\nInforme os dados: ");
    printf("\nIdade: ");
    scanf("%d", &idade);
    printf("\nM - Masculino\nF - Feminino \nSexo: ");
    scanf(" %c%*c", &sexo);
    printf("\nSalario: R$");
    scanf("%f", &salario);
    printf("===================================");
    cont1++;
    mediaSalario += salario;
    if (maiorIdade > idade)
    {
      maiorIdade = idade;
    }
    else if (menorIdade < idade)
    {
      menorIdade = idade;
    }
    if (sexo == 'F')
    {
      if (salario < 200.00)
      {
        cont2++;
      }
    }
    if (salario < menorSalario)
    {
      menorSalario = salario;
      menorIdade2 = idade;
      sexoMenorSalario = sexo;
    }
        
  } while (idade > 1);
  mediaSalario /= cont1;
  printf("\n\tA media dos salarios é %.2f", mediaSalario);
  printf("\n\tMaior idade %d", maiorIdade);
  printf("\n\tMenor idade %d", menorIdade);
  printf("\n\tQuantidade de mulheres com salario inferior a R$200.00: %d", cont2);
  printf("\n\tIdade e sexo da pessoa com menor salario: %d e %c", menorIdade2, sexoMenorSalario);

  return (EXIT_SUCCESS);
}