/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex20, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int codigo, i, contMasc, contFem;
  char sexo;
  float numHrsAulasMes, horaAula, salBruto, salLiquido, descontosMasc, descontosFem,
      mediaSalLiquidosProfMasc, mediaSalLiquidosProfFem;

  horaAula = 30.00;
  codigo = 0;
  contFem = 0;
  contMasc = 0;
  mediaSalLiquidosProfFem = 0;
  mediaSalLiquidosProfMasc = 0;

  while (codigo != 9999)
  {
    printf("\n\n________________________________________");
    printf("\n**Insira os dados do professor**");
    printf("\nSexo (M ou F): ");
    scanf(" %c%*c", &sexo);
    printf("\nCodigo: ");
    scanf("%d%*c", &codigo);
    printf("\nNumero de horas/aula dada no mês: ");
    scanf("%f%*c", &numHrsAulasMes);

    printf("\n\tDados: ");
    printf("\n\tCodigo %d", codigo);
    salBruto = numHrsAulasMes * horaAula;
    printf("\n\tSalario bruto R$%.2f", salBruto);

    if (sexo == 'M')
    {
      contMasc += 1;
      descontosMasc = 0.1;
      salLiquido = salBruto - (salBruto * descontosMasc);
      mediaSalLiquidosProfMasc = (mediaSalLiquidosProfMasc + salLiquido) / contMasc;
    }
    else if (sexo == "F")
    {
      contFem += 1;
      descontosFem = 0.05;
      salLiquido = salBruto - (salBruto * descontosFem);
      mediaSalLiquidosProfFem /= contFem;
    }
    printf("\n\tSalario liquido R$%.2f", salLiquido);
  }
  printf("\n\tMedia do salario liquido masculino: R$%.2f", &mediaSalLiquidosProfMasc);
  printf("\n\tMedia do salario liquido feminino: R$%.2f", &mediaSalLiquidosProfFem);

  return (EXIT_SUCCESS);
}
