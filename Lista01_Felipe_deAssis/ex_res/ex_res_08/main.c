/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex8, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    printf("\n\t**CALCULA O VALOR DO RENDIMENTO APOS UM DEPOSITO**");

    //declaração das variaveis
    float deposito, taxaJuros, rendimento, total;

    //entrada de dados
    printf("\nInforme o valor do deposito: ");
    scanf("%f", &deposito);
    printf("\nInforme a taxa de juros: ");
    scanf("%f", &taxaJuros);

    //processamento dos dados
    rendimento = deposito * (taxaJuros / 100);
    total = rendimento + deposito;

    //saida dos dados
    printf("\n\tO valor do rendimento é de R$%.2f", rendimento);
    printf("\n\tO valor total apos o rendimento é de R$%.2f", total);

    return (EXIT_SUCCESS);
}

