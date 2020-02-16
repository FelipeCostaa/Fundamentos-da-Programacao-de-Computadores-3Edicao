/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex19, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    //declaração de variaveis
    float altDegrau, altUsuario, qtdDegraus;

    //entrada de dados
    printf("\n*Informe a altura em metros*");
    printf("\nInforme a altura do degral: ");
    scanf("%f", &altDegrau);
    printf("\nQual algura deseja alcançar subindo os degraus? ");
    scanf("%f", &altUsuario);

    //processamento de dados
    qtdDegraus = altUsuario / altDegrau;
    
    //saida de dados
    printf("\n\tA quantidade de degraus que devera subir é de: %.1f", qtdDegraus);

    return (EXIT_SUCCESS);
}

