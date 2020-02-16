/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex9, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    printf("\n\t**CALCULA A AREA DE UM TRIANGULO**");

    //declaração das variaveis
    float base, altura, area;

    //entrada de dados
    printf("\nInforme a base do triangulo: ");
    scanf("%f", &base);
    printf("\nInforme a altura do triangulo: ");
    scanf("%f", &altura);

    //processamento dos dados
    area = (base * altura) / 2;

    //saida de dados
    printf("\n\tA area do triangulo é: %.2f", area);

    return (EXIT_SUCCESS);
}

