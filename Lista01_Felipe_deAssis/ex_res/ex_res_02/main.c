/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex2, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    printf("\n\t**RECEBE 3 NOTAS E INFORMA A MEDIA**");

    //declaração das variaveis
    float n1, n2, n3, media;

    //recebe o valor das notas
    printf("\n\nInforme a primeira nota: ");
    scanf("%f", &n1);
    printf("\nInforme a segunda nota: ");
    scanf("%f", &n2);
    printf("\nInforme a terceira nota: ");
    scanf("%f", &n3);

    //calcula a media
    media = (n1 + n2 + n3) / 3;

    //informa na tela a media das notas
    printf("\n\tA media das 3 notas é %.2f", media);

    return (EXIT_SUCCESS);
}

