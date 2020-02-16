/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex17, resolvido*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    printf("\n\t**RESOLVE EQUAÇOES DE 2º GRAU**");

    float delta, a, b, c, x, x1, x2;

    printf("\n\nInforme os dados: ");
    printf("\na = ");
    scanf("%f*c", &a);
    printf("\nb = ");
    scanf("%f*c", &b);
    printf("\nb = ");
    scanf("%f*c", &c);

    delta = pow(b, 2) * (-4) * a * c;

    if (delta < 0) {
        printf("\n\tNão existe uma raiz real");
    } else if (delta == 0) {
        printf("\n\tExite uma raiz real");
        x = (b * (-1)) / (2 * a);
    } else if (delta > 0) {
        printf("\n\tExistem duas raizes reais");
        x1 = ((b * (-1) + sqrt(delta)) / (2 * a));
        x1 = ((b * (-1) - sqrt(delta)) / (2 * a));
        printf("\n\tx¹ = %.2f", x1);
        printf("\n\tx² = %.2f", x2);
    }

    return (EXIT_SUCCESS);
}
