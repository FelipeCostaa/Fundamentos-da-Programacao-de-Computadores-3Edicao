/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex14, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    printf("\n\t**CALCULA A IDADE DA PESSOA**");

    //declaração de variaveis
    int anoNasc, anoAtual, idade, idade2050;

    //recebe dados
    printf("\nInforme seu ano de nascimento: ");
    scanf("%d", &anoNasc);
    printf("\nInforme o ano atual: ");
    scanf("%d", &anoAtual);

    //processa os dados
    idade = anoAtual - anoNasc; //idade atual
    idade2050 = 2050 - anoNasc; //idade em 2050
    
    //saida de dados
    printf("\n\tA idade atual é de %d", idade);
    printf("\n\tA idade no ano de 2050 será de %d", idade2050);

    return (EXIT_SUCCESS);
}

