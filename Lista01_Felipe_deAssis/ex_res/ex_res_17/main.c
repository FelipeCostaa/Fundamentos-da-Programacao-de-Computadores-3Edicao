/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex17, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    printf("\n\t**EXIBE O SALDO DA CONTA BANCARIA**");

    //declaração de variaveis
    float salario, cheque1, cheque2, saldo = 0, cpmf1, cpmf2;

    //entrada de dados
    printf("\nInforme o salario: R$");
    scanf("%f", &salario);
    printf("\nInforme o valor do cheque: R$");
    scanf("%f", &cheque1);
    printf("\nInforme o valor do cheque: R$");
    scanf("%f", &cheque2);

    //processamento de dados
    cpmf1 = cheque1 * (0.38 / 100);
    cpmf2 = cheque2 * (0.38 / 100);
    saldo = salario - cheque1 - cheque2 - cpmf1 - cpmf2;

    //saida de dados
    printf("\nO saldo atual é de R$%.2f", saldo);

    return (EXIT_SUCCESS);
}

