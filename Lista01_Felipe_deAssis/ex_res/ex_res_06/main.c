/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex6, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    printf("\n\t**CALCULA O SALARIO DO FUNCIONARIO**");

    //declaração de variaveis
    float salario, salReceber, gratificacao = 0.05, imposto = 0.07;

    //entrada de dados
    printf("\nInforme o salario do funcionario: ");
    scanf("%f", &salario);

    //processamento de dados
    salReceber = salario + (salario * gratificacao)-(salario * imposto);

    //informa o salario a receber do funcionario
    printf("\n\tO salario que o funcionario recebera apos descontar "
            "\n\to imposto e acrescentar a gratificação sera de R$%.2f", salReceber);

    return (EXIT_SUCCESS);
}

