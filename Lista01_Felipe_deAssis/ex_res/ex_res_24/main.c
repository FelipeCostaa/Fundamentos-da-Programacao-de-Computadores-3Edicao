/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex24, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    printf("\n\t**CONVERTE HORAS EM MINUTOS**\n");

    //declaração de variaveis
    float horas, hora, minutos, conversao;

    //entrada de dados
    printf("\nInforme a hora (para quatro e meia, deve-se digitar 4.30): ");
    scanf("%f*c", &horas);

    //processa os dados
    hora = (int) horas; //separa a hora
    minutos = (horas - hora)*100; //separa os minutos
    conversao = hora * 60 + minutos; //conversão para minutos

    //saida de dados
    printf("\n\tHoras: %.0f", hora);
    printf("\n\tMinutos: %.0f", minutos);
    printf("\n\n\tAs horas inseridas convertidas em minutos é %.0f", conversao);

    return (EXIT_SUCCESS);
}

