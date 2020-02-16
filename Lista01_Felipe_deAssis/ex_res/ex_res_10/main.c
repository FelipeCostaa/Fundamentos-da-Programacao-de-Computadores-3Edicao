/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex10, resolvido*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h> //biblioteca para calcular a raiz quadrada

int main(int argc, char** argv) {

    printf("\n\t**CALCULA A AREA DE UM CIRCULO**");

    //declaração das variaveis
    float pi = 3.1415, raio, area;

    //entrada de dados
    printf("\nInforme o raio do circulo: ");
    scanf("%f", &raio);

    //processamento dos dados
    area = pi * (pow(raio, 2));

    //saida de dados
    printf("\n\tA area do circulo é: %.2f", area);

    return (EXIT_SUCCESS);
}

