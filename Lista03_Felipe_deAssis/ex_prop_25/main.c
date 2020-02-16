/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex25, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float grat, hExtra, hFalta, h;

    printf("\nNumero de horas extras: ");
    scanf("%f*c", &hExtra);
    printf("\nNumero de horas que o funcionario faltou: ");
    scanf("%f*c", &hFalta);

    h = hExtra - ((2 / 3) * (hFalta));
    h *= 60;

    if (h >= 2400) {
        grat = 500;
    } else if (h > 1800 && h < 2400) {
        grat = 400;
    } else if (h >= 1200 && h < 1800) {
        grat = 300;
    } else if (h >= 600 && h < 1200) {
        grat = 200;
    } else {
        grat = 100;
    }
    printf("\n\tPremio R$%.2f", grat);

    return (EXIT_SUCCESS);
}
