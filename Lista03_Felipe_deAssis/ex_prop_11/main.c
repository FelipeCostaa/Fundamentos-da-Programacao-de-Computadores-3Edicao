/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex11, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float salAtual, aum, salNovo;

    printf("\nSalario atual R$");
    scanf("%d*c", &salAtual);

    if (salAtual < 300) {
        aum = salAtual * 0.15;
    } else if (salAtual > 300 && salAtual < 600) {
        aum = salAtual * 0.1;
    } else if (salAtual >= 600 && salAtual <= 900) {
        aum = 0;
    }
    printf("\n\tAumento R$%.2f", aum);
    salNovo = salAtual + aum;
    printf("\n\tNovo salario R$@.2f", salNovo);

    return (EXIT_SUCCESS);
}
