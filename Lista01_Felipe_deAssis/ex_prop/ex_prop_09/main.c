/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex9, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float area, baseMaior, baseMenor, altura;

    printf("\nInforme a base maior do trapezio: ");
    scanf("%f*c", &baseMaior);
    printf("\nInforme a base menor do trapezio: ");
    scanf("%f*c", &baseMenor);
    printf("\nInforme a altura do trapezio: ");
    scanf("%f*c", &altura);

    area = ((baseMaior + baseMenor) * altura) / 2;

    printf("\n\tA area do trapesio é de %.2f", area);

    return (EXIT_SUCCESS);
}

