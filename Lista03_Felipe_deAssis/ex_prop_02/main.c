/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex2, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float n1, n2, media;

    printf("\nNota 1: ");
    scanf("%f*c", &n1);
    printf("\nNota 2: ");
    scanf("%f*c", &n2);

    media = (n1 + n2) / 2;

    if (media > 0 && media < 3) {
        printf("\n\tReprovado");
    } else if (media > 3 && media < 7) {
        printf("\n\tAprovado");
    } else {
        printf("\n\tExame");
    }

    return (EXIT_SUCCESS);
}
