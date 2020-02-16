/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex3, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int num1, num2;

    printf("\nDigite um numero: ");
    scanf("%d*c", &num1);
    printf("\nDigite um numero: ");
    scanf("%d*c", &num2);

    if (num1 > num2) {
        printf("\nO numero %d é maior que %d", num1, num2);
    } else if (num2 > num1) {
        printf("\nO numero %d é maior que %d", num2, num1);
    } else {
        printf("\nOs numeros são iguais");
    }

    return (EXIT_SUCCESS);
}

