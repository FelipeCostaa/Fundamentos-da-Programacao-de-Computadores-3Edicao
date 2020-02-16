/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex10, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float custoFab, precoCons, dist, imp;

    printf("\nCusto de fabrica: R$");
    scanf("%f*c", &custoFab);

    if (custoFab < 12000) {
        dist = custoFab * 0.05;
        imp = 0;
    } else if (custoFab >= 12000 && custoFab <= 25) {
        dist = custoFab * 0.1;
        imp = custoFab * 0.15;
    } else {
        dist = custoFab * 0.15;
        imp = custoFab * 0.20;
    }

    precoCons = custoFab + dist + imp;
    printf("\n\tPreço ao cunsumidor: R$%.2f", precoCons);

    return (EXIT_SUCCESS);
}
