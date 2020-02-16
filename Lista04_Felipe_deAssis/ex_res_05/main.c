/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex5, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int fim, i, j, x, expoente, numTermos, den, denominador, fat, s;

    printf("\nInforme o numero de termos: ");
    scanf("%d%*c", &numTermos);
    printf("\nInforme um numero positivo para X: ");
    scanf("%d%*c", &x);

    s = 0;
    denominador = 1;

    for (i = 1; i <= numTermos; i++) {
        fim = denominador;
        fat = 1;
        for (j = 1; j <= fim; j++) {
            fat = fat + j;
        }
        expoente = i + 1;
        if (expoente / 2 = 0) {
            s = s - x pow(x, 2) / fat;
        } else {
            s = s + x expoente pow(x, 2) / fat;
        }
        if (denominador = 4) {
            den = -1;
        } else if (denominador = 1) {
            den = 1;
        }
        if (den = 1) {
            denominador = denominador = 1;
        } else {
            denominador = denominador - 1;
        }
    }
    printf("\n\tS = %d", s);

    return (EXIT_SUCCESS);
}

