/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex17, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int senha;

    printf("\nDigite a senha: ");
    scanf("%d*c", &senha);

    if (senha == 4531) {
        printf("\n\tACESSO PERMITIDO");
    } else {
        printf("\n\tACESSO NEGADO");
    }

    return (EXIT_SUCCESS);
}
