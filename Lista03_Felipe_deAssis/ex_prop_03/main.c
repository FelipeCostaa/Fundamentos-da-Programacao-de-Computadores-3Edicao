/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex3, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float n1, n2;

    printf("\nNumero 1: ");
    scanf("%f*c", &n1);
    printf("\nNumero 2: ");
    scanf("%f*c", &n2);

    if (n1 > n2) {
        printf("\n\tO %.2f é menor que %.2f", n2, n1);
    } else if (n2 > n1) {
        printf("\n\tO %.2f é menor que %.2f", n1, n2);
    } else {
        printf("\n\tOs numeros são iguais");
    }

    return (EXIT_SUCCESS);
}
