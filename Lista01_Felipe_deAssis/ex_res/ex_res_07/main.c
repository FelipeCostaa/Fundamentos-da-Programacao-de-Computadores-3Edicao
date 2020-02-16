/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex7, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    printf("\n\t**CALCULA O SALARIO DO FUNCIONARIO**");

    //declaração das variaveis
    float salario, salReceber, gratificacao = 50, imposto = 0.01;

    //entrada de dados
    printf("\nInforme o salario do funcionario: ");
    scanf("%f", &salario);

    //processamento de dados
    salReceber = salario + gratificacao - (salario * imposto);

    //saida de dados
    printf("\n\tO salario do funcionario apos adicionar a gratificação e retirar "
            "\n\tos impostos é de R$%.2f", salReceber);

    return (EXIT_SUCCESS);
}

