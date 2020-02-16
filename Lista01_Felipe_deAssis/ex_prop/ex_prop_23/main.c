/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex23, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    float angulo1, angulo2, angulo3;
    
    printf("\nInforme o primeiro angulo: ");
    scanf("%f*c", &angulo1);
    printf("\nInforme o segundo angulo: ");
    scanf("%f*c", &angulo2);
    
    angulo3 = 180 - (angulo1 + angulo1);
    
    printf("\n\tA medida do terciro angulo é %.2f", angulo3);

    return (EXIT_SUCCESS);
}

