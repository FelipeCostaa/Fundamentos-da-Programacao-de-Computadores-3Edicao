/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex19, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float alt, peso;

    printf("\nInforme a altura: ");
    scanf("%f*c", &alt);
    printf("\nInforme o peso: ");
    scanf("%f*c", &peso);

    if (alt < 1.2) {
        if (peso <= 60) {
            printf("\n\tClassificação A");
        } else if (peso > 60 && peso <= 90) {
            printf("\n\tClassificação D");
        } else {
            printf("\n\tClassificação G");
        }
    } else if (alt >= 1.2 && alt <= 1.7) {
        if (peso <= 60) {
            printf("\n\tClassificação B");
        } else if (peso > 60 && peso <= 90) {
            printf("\n\tClassificação E");
        } else {
            printf("\n\tClassificação H");
        }
    } else {
        if (peso <= 60) {
            printf("\n\tClassificação C");
        } else if (peso > 60 && peso <= 90) {
            printf("\n\tClassificação F");
        } else {
            printf("\n\tClassificação I");
        }
    }

    return (EXIT_SUCCESS);
}
