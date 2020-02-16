/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex9, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float saldoMedio, vlrCredito, perc;

    printf("\nSaldo Medio: R$");
    scanf("%f*c", &saldoMedio);

    if (saldoMedio > 400) {
        perc = saldoMedio * 0.3;
    } else if (saldoMedio <= 400 && saldoMedio > 300) {
        perc = saldoMedio * 0.25;
    } else if (saldoMedio <= 300 && saldoMedio > 200) {
        perc = saldoMedio * 0.2;
    } else {
        perc = saldoMedio * 0.1;
    }

    vlrCredito = perc + saldoMedio;

    printf("\n\tSaldo Medio R$%.2f", saldoMedio);
    printf("\n\tValor de Credito R$%.2f", vlrCredito);

    return (EXIT_SUCCESS);
}
