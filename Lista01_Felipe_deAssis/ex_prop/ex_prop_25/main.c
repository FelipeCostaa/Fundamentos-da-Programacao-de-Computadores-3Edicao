/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex25, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int horas, minutos;

    printf("\n**Informe as horas e minutos separadamente**\n");
    printf("\nInforme as horas: ");
    scanf("%d*c", &horas);
    printf("\nInforme os minutos: ");
    scanf("%d*c", &minutos);

    horas = horas * 60; //hora convertida em minutos
    printf("\nA hora digitada convertida em minutos é: %d", horas);
    horas = horas + minutos; //total de minutos
    printf("\nAs horas informadas convertidas em minutos e somada aos minutos informados é %d", horas);
    horas = horas * 60; //minutos convertidos em segundos
    printf("\nA soma dos minutos convertida em segundos é %d", horas);

    return (EXIT_SUCCESS);
}

