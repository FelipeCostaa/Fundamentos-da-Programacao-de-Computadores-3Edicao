/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex22, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int idade;
    float peso;

    printf("\nInforme sua idade: ");
    scanf("%d*c", &idade);
    printf("\nInforme seu peso: ");
    scanf("%f*c", &peso);

    if (idade < 20) {
        if (peso < 60) {
            printf("\n\tGrupo de risco 9");
        } else if (peso >= 60 && peso <= 90) {
            printf("\n\tGrupo de risco 8");
        } else {
            printf("\n\tGrupo de risco 7");
        }
    } else if (idade >= 20 && idade <= 50) {
        if (peso < 60) {
            printf("\n\tGrupo de risco 6");
        } else if (peso >= 60 && peso <= 90) {
            printf("\n\tGrupo de risco 5");
        } else {
            printf("\n\tGrupo de risco 4");
        }
    } else {
        if (peso < 60) {
            printf("\n\tGrupo de risco 3");
        } else if (peso >= 60 && peso <= 90) {
            printf("\n\tGrupo de risco 2");
        } else {
            printf("\n\tGrupo de risco 1");
        }
    }

    return (EXIT_SUCCESS);
}
