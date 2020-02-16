/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex4, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    printf("\n\t**DEVERA INFORMAR 3 NUMEROS DIFERENTES**\n");

    int n1, n2, n3;

    printf("\nInforme o primeiro numero: ");
    scanf("%d*c", &n1);
    printf("\nInforme o segundo numero: ");
    scanf("%d*c", &n2);
    printf("\nInforme o terceiro numero: ");
    scanf("%d*c", &n3);

    if (n1 < n2 && n1 < n3) {
        if (n2 < n3) {
            printf("\nOrdem crescente dos numeros: %d - %d - %d", n1, n2, n3);
        } else {
            printf("\nOrdem crescente dos numeros: %d - %d - %d", n1, n3, n2);
        }
    } else if (n2 < n1 && n2 < n3) {
        if (n1 < n3) {
            printf("\nOrdem crescente dos numeros: %d - %d - %d", n2, n1, n3);
        } else {
            printf("\nOrdem crescente dos numeros: %d - %d - %d", n2, n3, n1);
        }
    } else {
        if (n2 < n1) {
            printf("\nOrdem crescente dos numeros: %d - %d - %d", n3, n2, n1);
        } else {
            printf("\nOrdem crescente dos numeros: %d - %d - %d", n3, n1, n2);
        }
    }

    return (EXIT_SUCCESS);
}

