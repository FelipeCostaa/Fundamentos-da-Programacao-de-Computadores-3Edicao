/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex5, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float preco, novoPreco, desconto = 0.1;

    printf("\nInforme o preco do produto: R$");
    scanf("%f*c", &preco);

    novoPreco = preco + (preco * desconto);

    printf("\n\tO novo preco do produto é de R$%.2f", novoPreco);

    return (EXIT_SUCCESS);
}

