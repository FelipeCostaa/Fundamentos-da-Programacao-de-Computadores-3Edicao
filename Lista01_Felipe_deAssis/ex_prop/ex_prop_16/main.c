/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex16, proposto*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float catOposto, catAdjacente, hipotenusa;

    printf("\nInforme o cateto oposto: ");
    scanf("%f*c", &catOposto);
    printf("\nInforme o cateto adjacente: ");
    scanf("%f*c", &catAdjacente);

    hipotenusa = sqrt(pow(catOposto, 2) + pow(catAdjacente, 2));

    printf("\n\tO valor da hipotenusa é %.2f", hipotenusa);

    return (EXIT_SUCCESS);
}

