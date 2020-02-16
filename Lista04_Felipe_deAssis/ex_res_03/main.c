/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex3, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int qtd, num, fat = 1;
    int i, j;

    printf("\nQuantos numeros devem ser lidos: ");
    scanf("%d", &qtd);

    for (i = 1; i <= qtd; i++) {
        printf("\nDigite um numero: ");
        scanf("%d", &num);
        fat = 1;
        for (j = 1; j <= num; j++) {
            fat = fat * j;
        }
        printf("\nFatorial: %d", fat);
    }

    return (EXIT_SUCCESS);
}
