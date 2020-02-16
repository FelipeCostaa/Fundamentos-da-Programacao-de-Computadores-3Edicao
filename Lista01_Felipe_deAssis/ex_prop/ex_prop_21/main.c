/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex21, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float hTrabalhadas, salMinimo, hExtras, salReceber, valorHoraTrabalhada,
            valorHoraExtra, salBruto, qtdReceberHorasExtras;

    printf("\nInforme a quantidade de horas trabalhadas: ");
    scanf("%f*c", &hTrabalhadas);
    printf("\nInforme o valor do salario minimo: R$");
    scanf("%f*c", &salMinimo);
    printf("\nInforme o numero de horas extras trabalhadas: ");
    scanf("%f*c", &hExtras);

    valorHoraTrabalhada = salMinimo / 8; //a
    valorHoraExtra = salMinimo / 4; //b
    salBruto = hTrabalhadas * valorHoraTrabalhada; //c
    qtdReceberHorasExtras = hExtras * valorHoraExtra; //d
    salReceber = salBruto + qtdReceberHorasExtras; //e

    printf("\n\tO salario a receber é de R$%.2f", salReceber);

    return (EXIT_SUCCESS);
}

