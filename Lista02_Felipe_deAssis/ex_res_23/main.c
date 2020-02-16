/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex23, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float salMinimo, numHorasTrab, salBruto, imp, gratificacao, auxAlim, salLiquido,
            valorCoeficiente;
    char turno[1], categoria[1];

    printf("\nInforme os dados referente ao funcionario: ");
    printf("\nSalario minimo: R$");
    scanf("%f*c", &salMinimo);
    printf("\nNumero de horas trabalhadas: ");
    scanf("%f*c", &numHorasTrab);
    printf("\nTurno de trabalho: "
            "\nMatutino = M"
            "\nVespertino = V"
            "\nNoturno = N\n");
    scanf(" %c*c", &turno);
    printf("\nCategoria: "
            "\nOperario = O "
            "\nGerente = G\n");
    scanf(" %d*c", &categoria);

    if (turno[1] == 'm' || turno[1] == 'M') {
        valorCoeficiente = salMinimo * 0.1;
    } else if (turno[1] == 'v' || turno[1] == 'V') {
        valorCoeficiente = salMinimo * 0.15;
    } else if (turno[1] == 'n' || turno[1] == 'N') {
        valorCoeficiente = salMinimo * 0.12;
    }
    salBruto = numHorasTrab * valorCoeficiente;
    printf("\n\tSalario bruto R$.%2f", salBruto);

    if (categoria[1] == 'o' || categoria[1] == 'O') {
        if (salBruto >= 300) {
            imp = salBruto * 0.05;
        } else {
            imp = salBruto * 0.03;
        }
    } else if (categoria[1] == 'g' || categoria[1] == 'G') {
        if (salBruto >= 400) {
            imp = salBruto * 0.06;
        } else {
            imp = salBruto * 0.04;
        }
    }
    printf("\n\tImposto R$%.2f", imp);

    if ((turno[1] == 'n' || turno[1] 'N') && (numHorasTrab >= 80)) {
        gratificacao = 50;
    } else {
        gratificacao = 30;
    }
    printf("\n\tGratificação R$%.2f", gratificacao);

    if ((categoria[1] == 'o' || categoria[1] == 'O') && (valorCoeficiente <= 25)) {
        auxAlim = salBruto / 3;
    } else {
        auxAlim = salBruto / 2;
    }
    printf("\n\tAuxilio alimentação: R$%.2f", auxAlim);

    salLiquido = salBruto - imp + gratificacao + auxAlim;
    printf("\n\tSalario liquido R$%.2f", salLiquido);

    if (salLiquido < 350) {
        printf("\n\tMal remunerado");
    } else if (salLiquido >= 350 && salLiquido <= 600) {
        printf("\n\tNormal");
    } else {
        printf("\n\tBem remunerado");
    }

    return (EXIT_SUCCESS);
}
