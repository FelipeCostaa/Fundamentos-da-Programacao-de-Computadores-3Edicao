/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex12, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float salBruto, vlrReceber, grat;

    printf("\nSalario bruto do funcionario: R$");
    scanf("%f*c", &salBruto);

    if (salBruto <= 350) {
        grat = 100;
    } else if (salBruto > 350 && salBruto < 600) {
        grat = 75;
    } else if (salBruto >= 600 && salBruto <= 900) {
        grat = 50;
    } else {
        grat = 35;
    }

    vlrReceber = (salBruto - (salBruto * 0.07)) + grat;
    printf("\n\tSalario a receber R$%.2f", vlrReceber);

    return (EXIT_SUCCESS);
}
