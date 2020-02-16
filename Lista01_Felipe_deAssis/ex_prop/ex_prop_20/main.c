/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex20, proposto*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
    
    float angEscada, distParede, medidaEscada, rad, pi = 3.14;
    
    printf("\nInforme o angulo da escada: ");
    scanf("%f*c", &angEscada);
    printf("\nInforme a distancia da escada: ");
    scanf("%f*c", &distParede);
    
    rad = angEscada * pi / 180;
    medidaEscada = distParede / cos(rad);
    
    printf("\n\tA medida da escada deve ser %.2f", medidaEscada);

    return (EXIT_SUCCESS);
}

