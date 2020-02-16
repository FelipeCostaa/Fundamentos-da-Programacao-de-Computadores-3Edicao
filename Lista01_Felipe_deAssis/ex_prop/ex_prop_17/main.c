/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex17, proposto*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float raio, comprimento, pi = 3.14, area, volume;

    printf("\nInforme o raio da esfera: ");
    scanf("%f", &raio);

    comprimento = 2 * pi * raio;
    area = pi * pow(raio, 2);
    volume = 1.3333 * pi * pow(raio, 3);

    printf("\n\tO comprimento da esfera é %.2f", comprimento);
    printf("\n\tA area da esfera é %.2f", area);
    printf("\n\tO volume da esfera é %.2f", volume);

    return (EXIT_SUCCESS);
}

