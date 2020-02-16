/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex3, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float num1, num2, div;

    printf("\nInforme o primeiro numero: ");
    scanf("%f*c", num1);
    printf("\nInforme o segundo numero: ");
    scanf("%f*c", num2);

    div = num1 / num2;

    printf("\n\tA divisao do primeiro pelo segundo numero é: %.2f", div);

    return (EXIT_SUCCESS);
}

