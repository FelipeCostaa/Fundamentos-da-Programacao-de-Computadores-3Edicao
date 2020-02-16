/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex2, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  float sal = 545.00, preco[10], totalVendido, totalGeral, comissao;
  int quantidade[10], maior;
  int i;

  totalGeral = 0;
  maior = 0;
  //recebe o preco e quantidade vendidas
  for (i = 0; i < 10; i++)
  {
    printf("\nInforme o valor do produto: R$");
    scanf("%f%*c", &preco[i]);
    printf("Informe a quantidade vendida: ");
    scanf("%d%*c", &quantidade[i]);
  }

  //calcula o total vendido e o total geral
  for (i = 0; i < 10; i++)
  {
    totalVendido = preco[i] * quantidade[i];
    totalGeral += totalVendido;
    printf("\n--------------------------");
    printf("\n\tQuantidade vendida %d \n\tValor unitario R$%.2f"
           "\n\tValor total R$%.2f",
           quantidade[i], preco[i], totalVendido);
  }
  comissao = totalGeral * 0.05;
  printf("\n----------------------------");
  printf("\n\tValor total de todas os mercadorias vendidas R$%.2f", totalGeral);
  printf("\n\tComissão do vendedor R$%.2f", comissao);

  //produto mais vendido
  for (i = 0; i < 10; i++)
  {
    if (maior < quantidade[i])
    {
      maior = quantidade[i];
    }
  }
  printf("\n\tO objeto mais vendido teve foi o %dº e obteve %d vendas", i++, maior);

  return (EXIT_SUCCESS);
}
