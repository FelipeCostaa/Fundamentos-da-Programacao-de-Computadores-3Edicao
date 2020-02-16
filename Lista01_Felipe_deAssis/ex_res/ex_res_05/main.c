/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex5, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    printf("\n\t*CALCULA E MOSTRA O AUMENTO E O NOVO SALARIO DO FUNCIONARIO**");

    //declaração das variaveis
    float salario, percentualAum, valorAum, novoSalario;

    //recebe os valores
    printf("\nInforme o salario do funcionario: ");
    scanf("%f", &salario);
    printf("\nInforme o percentual do aumento: ");
    scanf("%f", &percentualAum);

    //calculo do aumento e novo salario
    valorAum = salario * (percentualAum / 100);
    novoSalario = valorAum + salario;

    //informa na tela o valor do aumento e do novo salario
    printf("\n\tO valor do aumento é de %.2f", valorAum);
    printf("\n\tO novo salario é de %.2f", novoSalario);

    return (EXIT_SUCCESS);
}

