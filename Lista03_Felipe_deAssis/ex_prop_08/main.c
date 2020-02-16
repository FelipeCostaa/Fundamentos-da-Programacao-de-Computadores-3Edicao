/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex8, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float sal, salReajustado, aum;

    printf("\nSalario: R$");
    scanf("%f*c", &sal);

    if (sal < 300) {
        aum = sal * 0.35;
    } else {
        aum = sal * 0.15;
    }
    printf("\n\tAumento R$%.2f", aum);
    salReajustado = sal + aum;
    printf("\n\tNovo salario: R$%.2f", salReajustado);

    return (EXIT_SUCCESS);
}
