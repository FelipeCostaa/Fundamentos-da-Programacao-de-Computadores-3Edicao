/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex24, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float preco, novoPreco, aum, imp;
    int categoria;
    char situacao;

    printf("\n\tCATEGORIA "
            "\n\t1 — limpeza "
            "\n\t2 — alimentação "
            "\n\t3 — vestuário");
    printf("\n\n\tSITUAÇÃO "
            "\n\tR — produtos que necessitam de refrigeração "
            "\n\tN — produtos que não necessitam de refrigeração\n");

    printf("\nCategoria: ");
    scanf("%d*c", &categoria);
    printf("\nSituação: ");
    scanf(" %c*c", &situacao);
    printf("\nInforme o preço R$");
    scanf("%f*c", &preco);

    if (preco <= 25) {
        if (categoria == 1) {
            aum = 0.05;
        } else if (categoria == 2) {
            aum = 0.08;
        } else if (categoria == 3) {
            aum = 0.1;
        }
    } else {
        if (categoria == 1) {
            aum = 0.12;
        } else if (categoria == 2) {
            aum = 0.15;
        } else if (categoria == 3) {
            aum = 0.18;
        }
    }
    aum = aum * preco;
    printf("\n\tAumento R$%.2f", aum);

    if (categoria == 2 || situacao == 'r') {
        imp = 0.05;
    } else {
        imp = 0.08;
    }
    imp = imp * preco;
    printf("\n\tImposto R$%.2f", imp);

    novoPreco = preco + aum - imp;
    printf("\n\tNovo preço R$%.2f", novoPreco);

    if (novoPreco <= 50) {
        printf("\n\tClassificação Barato");
    } else if (novoPreco > 50 && novoPreco < 120) {
        printf("\n\tClassificação Normal");
    } else {
        printf("\n\tClassificação Caro");
    }

    return (EXIT_SUCCESS);
}
