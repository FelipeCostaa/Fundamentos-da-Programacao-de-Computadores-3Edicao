/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex16, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float precoAtual, vendaMedia, precoNovo;

    printf("\nPreço atual do produto: R$");
    scanf("%f*c", &precoAtual);
    printf("\nVenda media mensal do produto: R$");
    scanf("%f*c", &vendaMedia);

    if (vendaMedia < 500 || precoAtual < 30) {
        precoNovo = precoAtual + (precoAtual * 0.1);
    } else if ((vendaMedia >= 500 && vendaMedia < 1200) || (precoAtual >= 30 && precoAtual < 80)) {
        precoNovo = precoAtual + (precoAtual * 0.15);
    } else {
        precoNovo = precoAtual - (precoAtual * 0.2);
    }
    
    printf("\n\tO novo preço sera de R$%.2f", precoNovo);

    return (EXIT_SUCCESS);
}
