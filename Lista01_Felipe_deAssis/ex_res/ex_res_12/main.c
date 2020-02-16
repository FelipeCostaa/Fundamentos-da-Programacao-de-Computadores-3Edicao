/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex12, resolvido*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    printf("\n\t**MOSTRA UM NUMERO ELEVADO AO OUTRO**");

    //declaração das variaveis
    float num1, num2, resultado1, resultado2;

    //entrada de dados
    printf("\nInforme o primeiro numero: ");
    scanf("%f", &num1);
    printf("\nInforme o segundo numero: ");
    scanf("%f", &num2);

    //processamento de dados
    resultado1 = pow(num1, num2);
    resultado2 = pow(num2, num1);

    //saida de dados
    printf("\nO numero %.2f elevado a %.2f é %.2f", num1, num2, resultado1);
    printf("\nO numero %.2f elevado a %.2f é %.2f", num2, num1, resultado2);

    return (EXIT_SUCCESS);
}

