/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex18, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int idade;

    printf("\nInforme a idade: ");
    scanf("%d*c", &idade);

    if (idade >= 18) {
        printf("\n\tMAIOR DE IDADE");
    } else {
        printf("\n\tMENOR DE IDADE");
    }

    return (EXIT_SUCCESS);
}
