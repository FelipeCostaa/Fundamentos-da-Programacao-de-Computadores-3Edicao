/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex2, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float num1, num2, num3, mult;

    printf("\nInforme o primeiro numero: ");
    scanf("%f*c", &num1);
    printf("\nInforme o segundo numero: ");
    scanf("%f*c", &num2);
    printf("\nInforme o terceiro numero: ");
    scanf("%f*c", &num3);

    mult = num1 * num2 * num3;
    
    printf("\n\tA multiplicação dos tres numeros inseridos é %.2f", mult);

    return (EXIT_SUCCESS);
}

