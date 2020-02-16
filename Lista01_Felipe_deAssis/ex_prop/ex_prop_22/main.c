/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex22, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int numLados, numDiagonais;

    printf("\nInforme o numero de lados do poligono: ");
    scanf("%f*c", &numLados);

    numDiagonais = numLados * (numLados - 3) / 2;

    printf("\n\tO numero de diagonais desse poligono é %d", numDiagonais);

    return (EXIT_SUCCESS);
}

