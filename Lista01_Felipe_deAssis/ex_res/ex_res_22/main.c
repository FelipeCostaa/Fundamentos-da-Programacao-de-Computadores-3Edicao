/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex22, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    printf("\n\t**CALCULA O VALOR DE CADA KW, O VALOR TOTAL "
            "\n\tE O VALOR APLICANDO UM DESCONTO DE 15%%**");

    //declaração de variaveis
    float salMinimo, kwConsumida, valorKw, valorPago, valorComDesconto,
            desconto = 0.15;

    //entrada de dados
    printf("\n\nInforme o valor do salario minimo: R$");
    scanf("%f", &salMinimo);
    printf("\nInforme a quantidade de KW consumida pela residencia: ");
    scanf("%f", &kwConsumida);

    //processamento de dados
    valorKw = salMinimo / 5; //valor de cada kw
    valorPago = valorKw * kwConsumida; //valor pago pela residencia
    valorComDesconto = valorPago - (valorPago * desconto);

    //saida de dados
    printf("\n\tO valor de cada kw é de %.2f", valorKw);
    printf("\n\tO valor total é de %.2f", valorPago);
    printf("\n\tO valor a ser pago aplicando o desconto é de %.2f", valorComDesconto);

    return (EXIT_SUCCESS);
}

