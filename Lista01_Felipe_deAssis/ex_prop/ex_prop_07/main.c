/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex7, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float peso, engordar, emagrecer;

    printf("\nInforme seu peso: ");
    scanf("%f*c", &peso);

    engordar = peso + (peso * 0.15);
    emagrecer = peso - (peso * 0.2);

    printf("\n\tSe voce engordar 15%% o seu novo peso sera de %.2f"
            "\n\tE se emagrecer 20%% o seu novo peso sera de %.2f", engordar, emagrecer);

    return (EXIT_SUCCESS);
}

