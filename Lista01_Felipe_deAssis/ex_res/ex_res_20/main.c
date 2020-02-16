/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex20, resolvido*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
    
    printf("\n\t**CALCULA E MOSTRA A MEDIDA DA ESCADA**");

    //declaração de variaveis
    float angulo, altParede, medidaEscada, radiano;

    //entrada de dados
    printf("\nInforme o angulo que a escada forma: ");
    scanf("%f", &angulo);
    printf("\nInforme a altura da parede: ");
    scanf("%f", &altParede);

    //processamento de dados
    radiano = angulo * 3.14 / 180; //conversão de radianos para graus
    medidaEscada = altParede / sin(radiano);

    //saida de dados
    printf("\n\tA medida da escaade é de %.2f", medidaEscada);

    return (EXIT_SUCCESS);
}
