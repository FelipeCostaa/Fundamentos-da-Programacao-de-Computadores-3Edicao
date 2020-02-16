/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex10, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int dia1, mes1, ano1;
    int dia2, mes2, ano2;

    printf("\nInforme a primeira data: ");
    printf("\nDia (dd): ");
    scanf("%d*c", &dia1);
    printf("\nMês (mm): ");
    scanf("%d*c", &mes1);
    printf("\nAno (aaaa): ");
    scanf("%d*c", &ano1);

    printf("\n\nInforme a primeira data: ");
    printf("\nDia (dd): ");
    scanf("%d*c", &dia2);
    printf("\nMês (mm): ");
    scanf("%d*c", &mes2);
    printf("\nAno (aaaa): ");
    scanf("%d*c", &ano2);

    if (ano1 > ano2) {
        printf("\n\t%d-%d-%d é maior que %d-%d-%d", dia1, mes1, ano1, dia2, mes2, ano2);
    } else if (ano2 > ano1) {
        printf("\n\t%d-%d-%d é maior que %d-%d-%d", dia2, mes2, ano2, dia1, mes1, ano1);
    } else if (ano1 == ano2) {
        if (mes1 > mes2) {
            printf("\n\t%d-%d-%d é maior que %d-%d-%d", dia1, mes1, ano1, dia2, mes2, ano2);
        } else if (mes2 > mes1) {
            printf("\n\t%d-%d-%d é maior que %d-%d-%d", dia2, mes2, ano2, dia1, mes1, ano1);
        } else if (mes1 == mes2) {
            if (dia1 > dia2) {
                printf("\n\t%d-%d-%d é maior que %d-%d-%d", dia1, mes1, ano1, dia2, mes2, ano2);
            } else if (dia2 > dia1) {
                printf("\n\t%d-%d-%d é maior que %d-%d-%d", dia2, mes2, ano2, dia1, mes1, ano1);
            } else {
                printf("\n\t*AS DATAS SÃO IGUAIS*");
            }
        }
    }

    return (EXIT_SUCCESS);
}

