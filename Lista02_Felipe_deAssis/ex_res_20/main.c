/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex20, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int codProd, codPais;
    float pesoProdKg, pesoProdGr, precoProdGr = 0, precoTotal, valorImp, valorTotal, imp = 0;

    printf("\n\t  CODIGO DO                PREÇO POR"
            "\n\t   PRODUTO                   GRAMA");
    printf("\n\t    1 a 4                      10");
    printf("\n\t    5 a 7                      25 ");
    printf("\n\t    8 a 10                     35 \n");

    printf("\n\tCODIGO DO PAÍS              IMPOSTO"
            "\n\t  DE ORIGEM");
    printf("\n\t      1                        0%%");
    printf("\n\t      2                       15%% ");
    printf("\n\t      3                       25%% \n");



    printf("\nCodigo do produto: ");
    scanf("%d*c", &codProd);
    printf("\nCodigo do país de origem: ");
    scanf("%d*c", &codPais);
    printf("\nPeso (em Kg): ");
    scanf("%f*c", &pesoProdKg);

    pesoProdGr = pesoProdKg * 1000; //peso convertido para gramas
    printf("\n\tO peso do produto convertido em gramas é: %.2fGr", pesoProdGr);

    if (codPais == 1) {
        imp = 0;
    } else if (codPais == 2) {
        imp = 0.15;
    } else if (codPais == 3) {
        imp = 0.25;
    } else {
        printf("\n\t*Codigo do Pais Invalido*");
    }

    if (codProd >= 1 && codProd <= 4) {
        precoProdGr = 10;
    } else if (codProd >= 5 && codProd <= 7) {
        precoProdGr = 25;
    } else if (codProd >= 8 && codProd <= 10) {
        precoProdGr = 35;
    } else {
        printf("\n\t*Codigo do Produto Invalido*");
    }

    precoTotal = pesoProdGr * precoProdGr; //preco total do produto comprado
    printf("\n\tO preço do produto é R$%.2f", precoTotal);
    valorImp = precoTotal * imp; //valor do imposto sobre o preço total
    printf("\n\tO valor do imposto é R$%.2f", valorImp);
    valorTotal = precoTotal + valorImp;
    printf("\n\tO valor que deverá ser pago é de R$%.2f", valorTotal);

    return (EXIT_SUCCESS);
}
