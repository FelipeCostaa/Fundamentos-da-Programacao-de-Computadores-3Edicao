/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex15, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int menu;
    float vlrInv, rend, vlrFinal;

    printf("\n\t  TIPO           DESCRIÇÃO           RENDIMENTO MENSAL");
    printf("\n\t   1        Poupança                        3%%");
    printf("\n\t   2        Fundos de renda fixa            4%%\n");

    printf("\nQual tipo de investimento pretende fazer: ");
    scanf("%d*c", &menu);
    printf("\nQual o valor que sera investido: R$");
    scanf("%d*c", &vlrInv);

    if (menu == 1) {
        rend = 0.03;
    } else if (menu == 2) {
        rend = 0.04;
    } else {
        printf("\n\t*Opção Invalida*");
    }
    vlrFinal = vlrInv + (vlrInv * rend);
    printf("\n\tApos 1 mes tera a quantia de R$%.2f", vlrFinal);

    return (EXIT_SUCCESS);
}
