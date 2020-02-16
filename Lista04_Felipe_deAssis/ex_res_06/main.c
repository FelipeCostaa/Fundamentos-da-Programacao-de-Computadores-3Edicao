/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex6, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

  int cod;
  float numHrTrab, vlrHrTrab, salMin, auxAlim, salFinal, salInicial;
  char turno, categoria;
  int i;
  salMin = 450;
  printf("\n\t*CALCULO DE SALARIO\n");
  for (i = 1; i <= 10; i++)
  {
    printf("\nCodigo do funcionario: ");
    scanf("%d%*c", &cod);
    printf("\nNumero de horas trabalhadas: ");
    scanf("%f%*c", &numHrTrab);
    //o usuario deve entrar com valores validos
    do
    {
      printf("\nTurno:"
             "\nM - Matutino"
             "\nV - Vespertino"
             "\nN - Noturno :");
      scanf(" %c", &turno);
    } while (turno != 'M' && turno != 'V' && turno != 'N');
    do
    {
      printf("\nCategoria"
             "\nO - Operario"
             "\nG - Gerente: ");
      scanf(" %c", &categoria);
    } while (categoria != 'O' && categoria != 'G');
    //se o funcionario for gerente
    if (categoria = 'G')
    {
      if (turno = 'N')
      {
        vlrHrTrab = salMin * 0.18;
      }
      else
      {
        vlrHrTrab = salMin * 0.15;
      }
    }
    //se o funcionario for operario
    else if (categoria = 'O')
    {
      if (turno = 'N')
      {
        vlrHrTrab = salMin * 0.13;
      }
      else
      {
        vlrHrTrab = salMin * 0.1;
      }
    }
    salInicial = vlrHrTrab * numHrTrab;
    //calculo do aux alimentação
    if (salInicial < 300)
    {
      auxAlim = salInicial * 0.2;
    } 
    else if (salInicial >= 300 && salInicial <= 600)
    {
      auxAlim = salInicial * 0.15;
    }
    else
    {
      auxAlim = salInicial * 0.05;
    }
    salFinal = salInicial + auxAlim;
    printf("\n\tFolha de pagamento do funcionario %d", cod);
    printf("\n\tNumero de horas trabalhadas %.1f", numHrTrab);
    printf("\n\tValor da hora trabalhada R$%.2f", vlrHrTrab);
    printf("\n\tSalario inical R$%.2f", salInicial);
    printf("\n\tAuxilio alimentação R$%.2f", auxAlim);
    printf("\n\tSalario final R$%.2f", salFinal);
  }

  return (EXIT_SUCCESS);
}
