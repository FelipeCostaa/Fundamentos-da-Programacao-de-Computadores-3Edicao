/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex11, resolvido*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h> //biblioteca para calcular a raiz quadrada

int main(int argc, char** argv) {

    //declaração das variaveis
    float numero, numQuadrado, numCubo, raizQuadrada, raizCubica;

    //entrada de dados
    printf("\nInforme um numero positivo maior que zero: ");
    scanf("%f", &numero);

    //processamento dos dados
    numQuadrado = pow(numero, 2); //eleva o numero ao quadrado
    numCubo = pow(numero, 3); //eleva o numero ao cubo
    raizQuadrada = sqrt(numero); //raiz quadrada
    raizCubica = pow(numero, (1/3)); //raiz cubica

    //saida de dados
    printf("\n\t%.2f ao quadrado é %.2f", numero, numQuadrado);
    printf("\n\t%.2f ao cubo é %.2f", numero, numCubo);
    printf("\n\tA raiz quadrada de %.2f é %.2f", numero, raizQuadrada);
    printf("\n\tA raiz cubica de %.2f é %.2f", numero, raizCubica);

    return (EXIT_SUCCESS);
}

