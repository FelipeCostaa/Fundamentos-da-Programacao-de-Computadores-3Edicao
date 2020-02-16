/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex4, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    printf("\n\t**CALCULA O AUMENTO SALARIAL DO FUNCIONARIO**");

    //declaração das variaveis
    float salario, novoSalario, aumento = 0.25;

    //recebe o salario
    printf("\nInforme o salario do funcionario: ");
    scanf("%f", salario);

    //calcula o aumento
    novoSalario = (salario * aumento) + salario;

    //exibe o novo salario
    printf("\n\tO novo salario do funcionario é %.2f", novoSalario);

    return (EXIT_SUCCESS);
}

