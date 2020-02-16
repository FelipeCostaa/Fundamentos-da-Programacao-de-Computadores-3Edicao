/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex1, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    printf("\n\t**RECEBE 4 NUMEROS E EXIBE A SOMA**");

    //declaração das variaveis
    int num1, num2, num3, num4, soma;

    //recebe as variaveis
    printf("\n\nInforme o primeiro numero: ");
    scanf("%d", &num1);
    printf("\nInforme o segundo numero: ");
    scanf("%d", &num2);
    printf("\nInforme o terceiro numero: ");
    scanf("%d", &num3);
    printf("\nInforme o quarto numero: ");
    scanf("%d", &num4);

    //faz a soma dos valores
    soma = num1 + num2 + num3 + num4;

    //informa na tela a soma dos valores
    printf("\n\tA soma dos quatro valores é: %d", soma);

    return (EXIT_SUCCESS);
}

