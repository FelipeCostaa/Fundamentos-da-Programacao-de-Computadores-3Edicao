/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex23, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int cod, qtd;
    float preco, total, desc;

    printf("\n\tInforme o codigo do produto: ");
    scanf("%d*c", &cod);
    printf("\n\tInforme a quantidade: ");
    scanf("%d*c", &qtd);

    if (cod >= 1 && cod <= 10) {
        preco = 10;
    } else if (cod >= 11 && cod <= 20) {
        preco = 15;
    } else if (cod >= 21 && cod <= 30) {
        preco = 20;
    } else if (cod >= 31 && cod <= 40) {
        preco = 30;
    }
    printf("\n\tPreço unitario R$%.2f", preco);
    total = preco * qtd;
    printf("\n\tPreço total R$%.2f", total);
    if (total <= 250) {
        desc = 0.05;
    } else if (total > 250 && total <= 500) {
        desc = 0.1;
    } else {
        desc = 0.15;
    }
    desc = desc * total;
    printf("\n\tO desconto sera de R$%.2f", desc);
    total = total - desc;
    printf("\n\tValor total da nota aplicando o desconto R$%.2f", total);

    return (EXIT_SUCCESS);
}
