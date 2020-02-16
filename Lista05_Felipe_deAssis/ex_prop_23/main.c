/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex8, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int menu, mesesTrabalhados;
  float salario, novoSalario, salarioFerias, decimoTerceiro;

  do
  {
    menu = 0;
    printf("\n\t\t**MENU**");
    printf("\n\t1 - Novo Salario");
    printf("\n\t2 - Ferias");
    printf("\n\t3 - Decimo Terceiro");
    printf("\n\t4 - Sair");
    printf("\n\tOpção Desejada: ");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
      printf("\nSalario atual: R$");
      scanf("%f", &salario);
      if (salario <= 210)
      {
        novoSalario = salario * 0.15 + salario;
      }
      else if (salario > 210 && salario <= 600)
      {
        novoSalario = salario * 0.1 + salario;
      }
      else if (salario > 600)
      {
        novoSalario = salario * 0.05 + salario;
      }
      printf("\n\tO novo salario é: R$%.2f", novoSalario);
      break;
    case 2:
      printf("\nSalario atual: R$");
      scanf("%f", &salario);
      salarioFerias = (salario / 3) + salario;
      printf("\n\tO salario das ferias é: R$%.2f", salarioFerias);
      break;
    case 3:
      printf("\nSalario atual: R$");
      scanf("%f", &salario);
      printf("\nMeses trabalhados (maximo de 12 meses): ");
      scanf("%d", &mesesTrabalhados);
      decimoTerceiro = salario * mesesTrabalhados / 12;
      printf("\n\tDecimo terceiro: R$%.2f", decimoTerceiro);
      break;
    case 4:
      printf("\n\tSAINDO");
      break;
    default:
      printf("\n\t**OPÇÃO INVALIDA**");
      break;
    }

  } while (menu != 4);

  return (EXIT_SUCCESS);
}