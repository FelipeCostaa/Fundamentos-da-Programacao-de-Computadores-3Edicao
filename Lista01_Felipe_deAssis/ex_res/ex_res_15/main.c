/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex15, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    printf("\n\t**CALCULA O LUCRO, IMPOSTO E PREÇO FINAL DE UM VEICULO**");

    //declaração de variaveis
    float precoFabrica, percentualLucro, percentualImposto, lucroDistribuidor;
    float impostos, precoFinal;

    //recebendo dados
    printf("\nInforme o preço de fabrica do veiculo: ");
    scanf("%f", &precoFabrica);
    printf("\nInforme o percentual de lucro do vendedor: ");
    scanf("%f", &percentualLucro);
    printf("\nInforme o percentual de impostos: ");
    scanf("%f", &percentualImposto);

    //precessamento de dados
    lucroDistribuidor = precoFabrica * (percentualLucro / 100); //valor do lucro do distribuidor
    impostos = precoFabrica * (percentualImposto / 100); //valor correspondente aos impostos
    precoFinal = precoFabrica + lucroDistribuidor + impostos; //preço final do veiculo

    //saida de dados
    printf("\n\tO lucro do distribuidor sera de R$%.2f", lucroDistribuidor);
    printf("\n\tO valor total de impostos é de R$%.2f", impostos);
    printf("\n\tO preço final do veiculo é de R$%.2f", precoFinal);

    return (EXIT_SUCCESS);
}

