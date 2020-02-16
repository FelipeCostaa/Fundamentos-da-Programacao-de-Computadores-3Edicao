/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex20, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int idade;

    printf("\nQual a idade: ");
    scanf("%d*c", &idade);

    if (idade < 5) {
        printf("\n\tNÃO ATINGIU A IDADE MINIMA");
    } else if (idade >= 5 && idade <= 7) {
        printf("\n\tCATEGORIA INFANTIL");
    } else if (idade >= 8 && idade <= 10) {
        printf("\n\tCATEGORIA JUVENIL");
    } else if (idade >= 11 && idade <= 15) {
        printf("\n\tCATEGORIA ADOLESCENTE");
    } else if (idade >= 16 && idade <= 30) {
        printf("\n\tCATEGORIA ADULTO");
    } else {
        printf("\n\tCATEGORIA SENIOR");
    }

    return (EXIT_SUCCESS);
}
