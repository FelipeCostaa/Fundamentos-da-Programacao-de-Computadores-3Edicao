/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex15, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float salario, conta1, conta2, multa = 0.02, restanteSal;

    printf("\nInforme o valor do salario: R$");
    scanf("%f*c", &salario);
    printf("\nInforme o valor da primeira conta: R$");
    scanf("%f*c", &conta1);
    printf("\nInforme o valor da segunda conta: R$");
    scanf("%f*c", &conta2);

    restanteSal = salario - conta1 - conta2 - (conta1 * multa + conta2 * multa);

    printf("\n\tAbatendo o valor das contas atrazadas sobrara R$%.2f do salario.", restanteSal);

    return (EXIT_SUCCESS);
}

