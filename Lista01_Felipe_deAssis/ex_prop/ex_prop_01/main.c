/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex1, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float num1, num2, sub;

    printf("\nInforme o primeiro numero: ");
    scanf("%f*c", &num1);
    printf("\nInforme o segundo numero: ");
    scanf("%f*c", &num2);

    sub = num1 - num2;

    printf("\n\tA subtracao do primeiro pelo segundo numero é %.2f", sub);

    return (EXIT_SUCCESS);
}

