/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex5, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    printf("\n\t     **Os tres primeiros numeros informados devem ser** "
            "\n\t**obrigatoriamente em ordem crescente e serem diferentes.**\n");

    int n1, n2, n3, n4;

    printf("\nInforme o primeiro numero: ");
    scanf("%d*c", &n1);
    printf("\nInforme o segundo numero: ");
    scanf("%d*c", &n2);
    printf("\nInforme o terceiro numero: ");
    scanf("%d*c", &n3);
    printf("\nInforme o quarto numero (fora da ordem): ");
    scanf("%d*c", &n4);

    if (n4 > n3) {
        printf("\n\tA ordem descrencente dos numeros é: %d, %d, %d, %d", n4, n3, n2, n1);
    } else if (n4 > n2 && n4 < n3) {
        printf("\n\tA ordem descrencente dos numeros é: %d, %d, %d, %d", n3, n4, n2, n1);
    } else if (n4 > n1 && n4 < n2) {
        printf("\n\tA ordem descrencente dos numeros é: %d, %d, %d, %d", n3, n2, n4, n1);
    } else if (n4 < n1) {
        printf("\n\tA ordem descrencente dos numeros é: %d, %d, %d, %d", n3, n2, n1, n4);
    } else {
        printf("\n\t*Algo deu errado*");
    }

    return (EXIT_SUCCESS);
}

