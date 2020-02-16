/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex12, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int numOperario, numPecasMes, numPecasMesFabrica, numOperarioMaior;
  char sexo;
  float salMin, salOperario, totalFolha, salMaior, mediaMasc, mediaFem;
  int i, contMasc, contFem;

  salMin = 450;
  contFem = 0;
  contMasc = 0;
  numPecasMesFabrica = 0;
  totalFolha = 0;
  mediaFem = 0;
  mediaMasc = 0;

  for (i = 0; i < 3; i++)
  {
    printf("\n\n\nInforme o numero do operario: ");
    scanf("%d%*c", &numOperario);
    printf("\nNumero de peças fabricadas no mes: ");
    scanf("%d%*c", &numPecasMes);
    printf("\nSexo (M ou F): ");
    scanf(" %c%*c", &sexo);

    //seleciona a classe do funcionario
    if (numPecasMes <= 30) //classe 1
    {
      salOperario = salMin;
    }
    else if (numPecasMes >= 31 && numPecasMes <= 50) //classe 2
    {
      salOperario = salMin + ((numPecasMes - 30) * (0.03 * salMin));
    }
    else //clase 3
    {
      salOperario = salMin + ((numPecasMes - 30) * (0.05 * salMin));
    }
    printf("\n\tDados do operario: ");
    printf("\n\tNumero do operario: %d", numOperario);
    printf("\n\tSalario: R$%.2f", salOperario);

    totalFolha += salOperario;
    numPecasMesFabrica += numPecasMes;

    // media de pecas maculinas
    if (sexo == 'M')
    {
      contMasc++;
      mediaMasc = numPecasMes / contMasc;
    }
    // media de pecas femininas
    else if (sexo == 'F')
    {
      contFem++;
      mediaFem = numPecasMes / contFem;
    }

    if (salOperario > salMaior)
    {
      salMaior = salOperario;
      numOperarioMaior = numOperario;
    }
  }
  printf("\n\n\tTotal da folha de pagamento: R$%.2f", totalFolha);
  printf("\n\tNumero de peças produzidas no mês: %d", numPecasMesFabrica);
  printf("\n\tMedia de peças fabricadas por homens: %.2f", mediaMasc);
  printf("\n\tMedia de peças fabricadas por mulheres: %.2f", mediaFem);
  printf("\n\tQuem recebe o maior salario é o operario(a) %d", numOperarioMaior);

  return (EXIT_SUCCESS);
}
