/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex8, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float pesoKg, pesoGr;

    printf("\nInforme o seu peso (em Kg): ");
    scanf("%f*c", &pesoKg);

    pesoGr = pesoKg / 1000;
    pesoGr = ((int) pesoGr - pesoKg * (-1))*1000;

    printf("\n\tO peso informado convertido em Gr é %.0f", pesoGr);

    return (EXIT_SUCCESS);
}

