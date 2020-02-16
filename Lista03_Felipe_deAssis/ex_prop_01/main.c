/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex1, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float n1, n2, n3, n4, media, aprov = 7;

    printf("\nNota 1: ");
    scanf("%f*c", &n1);
    printf("\nNota 2: ");
    scanf("%f*c", &n2);
    printf("\nNota 3: ");
    scanf("%f*c", &n3);
    printf("\nNota 4: ");
    scanf("%f*c", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    if (media < aprov) {
        printf("\n\tReprovado");
    } else {
        printf("\n\tAprovado");
    }

    return (EXIT_SUCCESS);
}

