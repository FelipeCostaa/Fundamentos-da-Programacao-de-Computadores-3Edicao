/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex8, resolvido*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    int menu;
    float num1, num2, num3, soma, raiz;

    printf("\n\t**MENU DE OPÇÕES**"
            "\n\t1- somar dois numeros"
            "\n\t2- raiz quadrada de um numero"
            "\n\n\t");
    scanf("%d*c", &menu);

    if (menu == 1) {
        printf("\nInforme um numero: ");
        scanf("%f*c", &num1);
        printf("\nInforme um numero: ");
        scanf("%f*c", &num2);

        soma = num1 + num2;

        printf("\n\tA soma de %.2f e %.2f é %.2f", num1, num2, soma);
    } else if (menu == 2) {
        printf("\nInformem o numero que deseja saber a raiz quadrada: ");
        scanf("%f*c", &num3);

        raiz = sqrt(num3);

        printf("\n\tA raiz quadrada de %.2f é %.2f", num3, raiz);
    }

    return (EXIT_SUCCESS);
}

