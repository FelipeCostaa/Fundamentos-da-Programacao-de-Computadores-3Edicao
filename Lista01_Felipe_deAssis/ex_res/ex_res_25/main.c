/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex25, resolvido*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    printf("\n\t**CALCULA A QUANTIDADE DE INGRESSOS QUE DEVERAO "
            "\n\tSER VENDIDOS PARA EVITAR PREJUIZO**");

    //declaração de variaveis
    float custo, precoConvite, qtdConvites;

    //entrada de dados
    printf("\nInforme o custo do espetaculo: R$");
    scanf("%f*c", &custo);
    printf("\nInforme o preco do convite: R$");
    scanf("%f*c", &precoConvite);

    //processa dados
    qtdConvites = custo / precoConvite;
    qtdConvites = ceil(qtdConvites);

    //saida de dados
    printf("\n\tA quantidade de convites que deverao ser vendidos "
            "\n\tpara evitar prejuizo é de %.0f..", qtdConvites);

    return (EXIT_SUCCESS);
}

