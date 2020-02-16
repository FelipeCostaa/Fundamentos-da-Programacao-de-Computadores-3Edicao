/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex18, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    printf("\n\t**CALCULA A QUANTIDADE DE RAÇÃO CONSUMIDA POR DOIS GATOS**");

    //declaração variaveis
    float pesoRacao, gato1, gato2, restoRacao, qtdDias = 5, total;

    //recebe dados
    printf("\nInforme a quantidade (Kg) de ração comprada: ");
    scanf("%f", &pesoRacao);
    printf("\nInforme a quantidade (Gr) de ração dada ao primeiro gato: ");
    scanf("%f", &gato1);
    printf("\nInforme a quantidade (Gr) de ração dada ao primeiro gato: ");
    scanf("%f", &gato2);

    //processa os dados
    gato1 = gato1 / 1000;
    gato2 = gato2 / 1000;
    total = pesoRacao - qtdDias * (gato1 + gato2);

    //saida de dados
    printf("\n\tRestara %.3fKg de ração apos cinco dias.", total);

    return (EXIT_SUCCESS);
}

