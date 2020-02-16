/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex16, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float preco, desc, vlrDesc, precoNovo;
    int cod;

    printf("\nPreço atual: R$");
    scanf("%f*c", &preco);
    printf("\nCodigo: ");
    scanf("%d*c", &cod);

    if (preco < 30) {
        desc = 0;
    } else if (preco >= 30 && preco <= 100) {
        desc = 0.1;
    } else {
        desc = 0.15;
    }
    vlrDesc = preco * desc;
    printf("\n\tValor do desconto R$%.2f", vlrDesc);

    precoNovo = preco - vlrDesc;
    printf("\n\tValor com desconto R$%.2f", precoNovo);

    return (EXIT_SUCCESS);
}
