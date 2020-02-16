/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex21, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int codEstadoOrigem, codCarga;
    float pesoCargaTn, pesoCargaKg, precoKg, precoCarga, imp = 0, valorImp, total;

    printf("\n\tCODIGO DO ESTADO            IMPOSTO");
    printf("\n\t       1                       35%%"
            "\n\t       2                       25%%"
            "\n\t       3                       15%%"
            "\n\t       4                        5%%"
            "\n\t       5                    Isento\n");

    printf("\n\tCODIGO DA CARGA         PREÇO POR QUILO");
    printf("\n\t    10 a 20                   100"
            "\n\t    21 a 30                   250"
            "\n\t    31 a 40                   340\n");

    printf("\nInforme o código do estado de origem da carga do caminhão: ");
    scanf("%d*c", &codEstadoOrigem);
    printf("\nQual o codigo da carga: ");
    scanf("%d*c", &codCarga);
    printf("\nQual o peso da carga: ");
    scanf("%f*c", &pesoCargaTn);

    pesoCargaKg = pesoCargaTn * 1000;
    printf("\n\tO peso da carga convertido em quilos é %.2fKg", pesoCargaKg);
    
    if (codCarga >= 10 && codCarga <= 20) {
        precoKg = 100;
    } else if (codCarga > 20 && codCarga <= 30) {
        precoKg = 250;
    } else if (codCarga > 30 && codCarga <= 40) {
        precoKg = 340;
    } else {
        printf("\n\t*Codigo da carga invalido*");
    }
    precoCarga = pesoCargaKg * precoKg;
    printf("\n\tO preço da carga do caminhao é R$%.2f", precoCarga);

    if (codEstadoOrigem == 1) {
        imp = 0.35;
    } else if (codEstadoOrigem == 2) {
        imp = 0.25;
    } else if (codEstadoOrigem == 3) {
        imp = 0.15;
    } else if (codEstadoOrigem == 4) {
        imp = 0.05;
    } else if (codEstadoOrigem == 5) {
        imp = 0;
    } else {
        printf("\n\t*Codigo do estado invalido*");
    }
    valorImp = precoCarga * imp;
    printf("\n\tO valor do imposto é R$%.2f", valorImp);
    total = precoCarga + valorImp;
    printf("\nO valor total transportado no caminhão é de R$%.2f", total);

    return (EXIT_SUCCESS);
}
