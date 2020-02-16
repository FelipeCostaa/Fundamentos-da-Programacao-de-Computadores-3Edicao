/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex1, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float n1, n2, op;
    int menu;

    printf("\n\tESCOLHA DO USUARIO                      OPERAÇÃO");
    printf("\n\t        1                   Media entre os numeros digitados");
    printf("\n\t        2                    Diferença do maior pelo menor");
    printf("\n\t        3                   Produto entre os numeros digitados");
    printf("\n\t        4                    Divisão do primeiro pelo segundo\n");

    printf("\nObs.: Se escolher a operação 4, o segundo "
            "\nnumero deve ser diferente de zero");
    printf("\nQual tipo de operação deseja realizar: ");
    scanf("%d*c", &menu);
    printf("\nInforme o primeiro numero: ");
    scanf("%f*c", &n1);
    printf("\nInforme o segundo numero: ");
    scanf("%f*c", &n2);

    if (menu == 1) {
        op = (n1 + n2) / 2;
    } else if (menu == 2) {
        if (n1 > n2) {
            op = n1 - n2;
        } else {
            op = n2 - n1;
        }
    } else if (menu == 3) {
        op = n1 * n2;
    } else if (menu == 4) {
        op = n2 / n1;
    } else {
        printf("\n\t*Erro*");
    }
    printf("\n\tO resultado é %.2f", op);

    return (EXIT_SUCCESS);
}
