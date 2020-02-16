/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex2, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float n1, n2, n3, media, exame;

    printf("\nInforme a primeira nota: ");
    scanf("%f*c", &n1);
    printf("\nInforme a primeira nota: ");
    scanf("%f*c", &n2);
    printf("\nInforme a primeira nota: ");
    scanf("%f*c", &n3);

    media = (n1 + n2 + n3) / 3;

    if (media >= 0 && media < 3) {
        printf("\nReprovado");
    } else if (media >= 3 && media < 7) {
        printf("\nExame");
        exame = (media - 6)*-1;
        printf("\nDevera tirar %.1fpts para passar no exame.", exame);
    } else {
        printf("\nAprovado");
    }

    return (EXIT_SUCCESS);
}

