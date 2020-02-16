/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex22, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float salBase, tempoServ, imp, imp2, gratificacao, salLiquido;

    printf("\nInforme o salario base: R$");
    scanf("%f*c", &salBase);
    printf("\nInforme o tempo de serviço (em meses): ");
    scanf("%f*c", &tempoServ);

    if (salBase < 200) {
        imp = 0;
    } else if (salBase >= 200 && salBase <= 450) {
        imp = 0.03;
    } else if (salBase > 450 && salBase < 700) {
        imp = 0.08;
    } else {
        imp = 0.12;
    }
    imp2 = salBase * imp;
    printf("\n\tImposto R$%.2f", imp2);

    if (salBase > 500) {
        if (tempoServ < 36) {
            gratificacao = 20;
        } else {
            gratificacao = 30;
        }
    } else {
        if (tempoServ < 36) {
            gratificacao = 23;
        } else if (tempoServ >= 36 && tempoServ <= 72) {
            gratificacao = 35;
        } else {
            gratificacao = 33;
        }
    }
    printf("\n\tGratificação R$%.2f", gratificacao);

    salLiquido = salBase - imp2 + gratificacao;
    printf("\n\tSalario Liquido R$%.2f", salLiquido);

    if (salLiquido < 350) {
        printf("\n\tClassificação A");
    } else if (salLiquido >= 350 && salLiquido <= 600) {
        printf("\n\tClassificação B");
    } else {
        printf("\n\tClassificação C");
    }

    return (EXIT_SUCCESS);
}
