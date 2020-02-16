/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex23, resolvido*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    printf("\n\t**RECEBE UM NUMERO REAL E RETORNA A PARTE INTEIRA, PARTE"
            "\n\tFRACIONARIA E O ARREDONDAMENTO DO NUMERO INFORMADO\n");

    //declaração variaveis
    float numReal, parteInt, parteFracionada, arredondamento;

    //entrada de dados
    printf("\nInforme um numero real: ");
    scanf("%f*c", &numReal);

    //processamento de dados
    parteInt = (int) numReal; //parte inteira do numero
    parteFracionada = (parteInt - numReal)*(-1); //parte fracionaria do numero
    arredondamento = round(numReal); //arredondamento desse numero

    //saida de dados
    printf("\n\tA parte inteira do numero digitado é: %.4f", parteInt);
    printf("\n\tA parte fracionaria do numero digitado é: %.4f", parteFracionada);
    printf("\n\tO arredondamento do numero digitado é: %.4f", arredondamento);

    return (EXIT_SUCCESS);
}

