/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex7, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int i;
    float a, b, c;

    printf("\nInforme o primeiro numero: ");
    scanf("%f*c", &a);
    printf("\nInforme o segundo numero: ");
    scanf("%f*c", &b);
    printf("\nInforme o terceiro numero: ");
    scanf("%f*c", &c);

    printf("\n\tInforme a opção desejada: "
            "\n\t1- A, B e C em ordem crescente"
            "\n\t2- A, B e C em ordem decrescente"
            "\n\t3- O maior fica entre os dois números"
            "\n\n\t");
    scanf("%d*c", &i);

    if (i == 1) {
        if (a < b && a < c) {
            if (b < c) {
                printf("\nA ordem crescente é: %.2f, %.2f, %.2f", a, b, c);
            } else {
                printf("\nA ordem crescente é: %.2f, %.2f, %.2f", a, c, b);
            }
        } else if (b < a && b < c) {
            if (a < c) {
                printf("\nA ordem crescente é: %.2f, %.2f, %.2f", b, a, c);
            } else {
                printf("\nA ordem crescente é: %.2f, %.2f, %.2f", b, c, a);
            }
        } else if (c < a && c < b) {
            if (a < b) {
                printf("\nA ordem crescente é: %.2f, %.2f, %.2f", c, a, b);
            } else {
                printf("\nA ordem crescente é: %.2f, %.2f, %.2f", c, b, a);
            }
        }
    } else if (i == 2) {
        if (a > b && a > c) {
            if (b > c) {
                printf("\nA ordem decrescente é: %.2f, %.2f, %.2f", a, b, c);
            } else {
                printf("\nA ordem decrescente é: %.2f, %.2f, %.2f", a, c, b);
            }
        } else if (b > a && b > c) {
            if (a > c) {
                printf("\nA ordem decrescente é: %.2f, %.2f, %.2f", b, a, c);
            } else {
                printf("\nA ordem decrescente é: %.2f, %.2f, %.2f", b, c, a);
            }
        } else if (c > a && c > b) {
            if (a > b) {
                printf("\nA ordem decrescente é: %.2f, %.2f, %.2f", c, a, b);
            } else {
                printf("\nA ordem decrescente é: %.2f, %.2f, %.2f", c, b, a);
            }
        }
    } else if (i == 3) {
        if (a > b && a > c) {
            printf("\n%.2f, %.2f, %.2f", b, a, c);
        } else if (b > a && b > c) {
            printf("\n%.2f, %.2f, %.2f", a, b, c);
        } else {
            printf("\n%.2f, %.2f, %.2f", a, c, b);
        }
    } else {
        printf("\n\t*Opção invalida*");
    }

    return (EXIT_SUCCESS);
}

