/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex13, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    printf("**\n\t**EXIBE A CONVERSÃO DE PES PARA POLEGADAS, JARDAS E MILHAS**");

    //declaração das variaveis
    float pes, polegadas, jardas, milhas;

    //entrada de dados
    printf("\nInforme a medida em pés: ");
    scanf("%f", &pes);

    //processamento dos dados
    polegadas = pes * 12; //polegadas
    jardas = pes * 3; //jardas
    milhas = jardas / 1760; //milhas

    //saida de dados
    printf("\n\t%.2f convertido em polegadas é %.2f", pes, polegadas);
    printf("\n\t%.2f convertido em jardas é %.2f", pes, jardas);
    printf("\n\t%.2f convertido em milhas é %.2f", pes, milhas);

    return (EXIT_SUCCESS);
}

