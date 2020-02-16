/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex13, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float precoProd, precoNovo, aum;

    printf("\nPreço do produto: R$");
    scanf("%f*c", &precoProd);

    if (precoProd < 50) {
        aum = 0.05;
    } else if (precoProd >= 50 && precoProd <= 100) {
        aum = 0.1;
    } else {
        aum = 0.15;
    }
    precoNovo = precoProd + (precoProd * aum);
    printf("\n\tPreço novo R$%.2f", precoNovo);

    if (precoNovo <= 80) {
        printf("\n\tClassificação = Barato");
    } else if (precoNovo > 80 && precoNovo <= 120) {
        printf("\n\tClassificação = Normal");
    } else if (precoNovo > 120 && precoNovo <= 200) {
        printf("\n\tClassificação = Caro");
    } else {
        printf("\n\tClassificação = Muito Caro");
    }

    return (EXIT_SUCCESS);
}
