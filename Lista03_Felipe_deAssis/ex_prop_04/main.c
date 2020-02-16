/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex4, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float n1, n2, n3;

    printf("\nNumero 1: ");
    scanf("%f*c", &n1);
    printf("\nNumero 2: ");
    scanf("%f*c", &n2);
    printf("\nNumero 3: ");
    scanf("%f*c", &n3);

    if (n1 > n2 && n1 > n3) {
        printf("\n\t%.2f é maior", n1);
    } else if (n2 > n1 && n2 > n3) {
        printf("\n\t%.2f é maior", n2);
    } else if (n3 > n1 && n3 > n2) {
        printf("\n\t%.2f é maior", n3);
    } else {
        printf("\n\tForam informados numeros iguais, execute o programa novamente");
    }

    return (EXIT_SUCCESS);
}
