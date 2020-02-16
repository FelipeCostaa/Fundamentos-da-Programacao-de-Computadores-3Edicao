/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex21, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float preco;
    int cod;

    printf("\n\tCODIGO DE ORIGEM                PROCEDENCIA");
    printf("\n\t       1                        Sul");
    printf("\n\t       2                        Norte");
    printf("\n\t       3                        Leste");
    printf("\n\t       4                        Oeste");
    printf("\n\t     5 ou 6                     Nordeste");
    printf("\n\t    7, 8 ou 9                   Sudeste");
    printf("\n\t     10 a 20                    Centro-Oeste");
    printf("\n\t     21 a 30                    Nordeste\n");

    printf("\nValor do produto: R$");
    scanf("%f*c", &preco);
    printf("\nCodigo de origem: ");
    scanf("%d*c", &cod);

    if (cod == 1) {
        printf("\n\tSul");
    } else if (cod == 2) {
        printf("\n\tNorte");
    } else if (cod == 3) {
        printf("\n\tLeste");
    } else if (cod == 4) {
        printf("\n\tOeste");
    } else if (cod == 5 || cod == 6) {
        printf("\n\tNordeste");
    } else if (cod == 7 || cod == 8 || cod == 9) {
        printf("\n\tSudeste");
    } else if (cod >= 10 && cod <= 20) {
        printf("\n\tCentro-Oeste");
    } else if (cod >=21 && cod <=30) {
        printf("\n\tNordeste");
    }

    return (EXIT_SUCCESS);
}
