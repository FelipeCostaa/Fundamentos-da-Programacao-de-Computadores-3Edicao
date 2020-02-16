/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex6, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float n1, n2, op, op2;
    int menu;

    printf("\n\t1 - O primeiro número elevado ao segundo número");
    printf("\n\t2 - Raiz quadrada de cada um dos números");
    printf("\n\t3 - Raiz cúbica de cada um dos números\n");

    printf("\nPrimeiro numero: ");
    scanf("%f*c", &n1);
    printf("\nSegundo numero: ");
    scanf("%f*c", &n2);
    printf("\nQual operação deseja fazer: ");
    scanf("%d*c", &menu);

    if (menu == 1) {
        op = pow(n1, n2);
    } else if (menu == 2) {
        op = sqrt(n1);
        op2 = sqrt(n2);
    } else if (menu == 3) {
        op = pow(n1, 1.0 / 3.0);
        op = pow(n2, 1.0 / 3.0);
    } else {
        printf("\n\tOpção invalida");
    }
    
    printf("\n\tResultado %.2f \n\t%.2f", op, op2);

    return (EXIT_SUCCESS);
}
