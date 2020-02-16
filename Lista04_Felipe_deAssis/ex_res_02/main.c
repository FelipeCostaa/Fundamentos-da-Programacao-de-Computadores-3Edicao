/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex2, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int n, i, j, fat = 1;
    float e = 1;

    printf("\n\tPrograma calcula a formula: ");
    printf("\n\t\tE = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!\n");

    printf("\nInforme o valor de N: ");
    scanf("%d%*c", &n);

    for (i = 0; i < n; i++) {
        for (j = 1; j <= 1; j++) {
            fat = fat * j;
        }
        e = e + 1 / fat;
    }
    printf("\n\tE = %.2f", e);

    return (EXIT_SUCCESS);
}
