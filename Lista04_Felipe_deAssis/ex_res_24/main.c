/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex24, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int menu;
  float salario, imposto, novoSalario;

  printf("\n\tMENU DE OPÇÕES");
  printf("\n\t1 - Imposto");
  printf("\n\t2 - Novo Salario");
  printf("\n\t3 - Classificação");
  printf("\n\t4 - Finalizar Programa\n");

  printf("\nInforme a opção desejada: ");
  scanf("%d%*c", &menu);

  do
  {
    if (menu == 1)
    {
      printf("\nSalario do funcionario R$");
      scanf("%f%*c", &salario);
      if (salario < 500)
      {
        imposto = salario * 0.05;
      }
      else if (salario >= 500 && salario <= 850)
      {
        imposto = salario * 0.1;
      }
      else if (salario > 850)
      {
        imposto = salario * 0.15;
      }
      printf("\n\tImposto: R$%.2f", imposto);
    }
    if (menu == 2)
    {
      printf("\nSalario do funcionario R$");
      scanf("%f%*c", &salario);
      if (salario > 1500)
      {
        novoSalario = salario + 25;
      }
      else if (salario <= 1500 && salario >= 750)
      {
        novoSalario = salario + 50;
      }
      else if (salario < 750 && salario >= 450)
      {
        novoSalario = salario + 75;
      }
      else
      {
        novoSalario = salario + 100;
      }
      printf("\n\tNovo salario: R$%.2f", &novoSalario);
    }
    if (menu == 3)
    {
      printf("\nSalario do funcionario R$");
      scanf("%f%*c", &salario);
      if (salario <= 700)
      {
        printf("\n\tClassificação: Mal remunerado");
      }
      else if (salario > 700)
      {
        printf("\n\tClassificação: Bem remunerado");
      }
    }
    if (menu > 4)
    {
      printf("\n\t**OPÇÃO DE MENU INVALIDA**");
    }

    printf("\n_________________________________________");
    printf("\n\n\tMENU DE OPÇÕES");
    printf("\n\t1 - Imposto");
    printf("\n\t2 - Novo Salario");
    printf("\n\t3 - Classificação");
    printf("\n\t4 - Finalizar Programa\n");

    printf("\n\nInforme a opção desejada: ");
    scanf("%d%*c", &menu);

  } while (menu != 4);

  return (EXIT_SUCCESS);
}
