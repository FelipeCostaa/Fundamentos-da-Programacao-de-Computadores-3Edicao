/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex3, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    printf("\n\t**RECEBE 3 NOTAS E SEUS PESOS "
            "\n\tE INFORMA A MEDIA PONDERADA**");

    //declaração das variaveis
    float n1, n2, n3, mediaPonderada;
    int p1, p2, p3;

    //recebe o valor das notas
    printf("\n\nInforme a primeira nota: ");
    scanf("%f", &n1);
    printf("\nInforme o peso da nota: ");
    scanf("%d", &p1);
    printf("\nInforme a segunda nota: ");
    scanf("%f", &n2);
    printf("\nInforme o peso da nota: ");
    scanf("%d", &p2);
    printf("\nInforme a terceira nota: ");
    scanf("%f", &n3);
    printf("\nInforme o peso da nota: ");
    scanf("%d", &p3);

    //calcula a media ponderada
    mediaPonderada = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

    //exibe na tela a media das notas
    printf("\nA media ponderada das notas é %.2f", mediaPonderada);

    return (EXIT_SUCCESS);
}

