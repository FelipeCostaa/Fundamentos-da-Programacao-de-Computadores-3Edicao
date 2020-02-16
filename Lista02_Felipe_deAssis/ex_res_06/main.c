/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex6, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int n1, resto;

    printf("\nInforme um numero inteiro: ");
    scanf("%d*c", &n1);

    resto = n1 % 2;

    if (resto == 1) {
        printf("\nO numero é impar.");
    } else {
        printf("\n\tO numero é par.");
    }

    return (EXIT_SUCCESS);
}

