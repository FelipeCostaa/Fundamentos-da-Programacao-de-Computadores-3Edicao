/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex15, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float salMinimo, numHorasTrab, qtdHorasExtras, salReceber, vHoraTrab, salMes,
            bonusDependentes, hExtras, salBruto, impRendaRetido, salLiquido, grat;
    int numDependentes;

    printf("\nInforme o valor do salario minimo: R$");
    scanf("%f*c", &salMinimo);
    printf("\nInforme o numero de horas trabalhadas: ");
    scanf("%f*c", &numHorasTrab);
    printf("\nInforme o numero de dependentes: ");
    scanf("%d*c", &numDependentes);
    printf("\nInforme a quantidade de horas extras: ");
    scanf("%f*c", &qtdHorasExtras);

    vHoraTrab = salMinimo / 5;
    salMes = numHorasTrab * vHoraTrab;
    bonusDependentes = numDependentes * 32;
    hExtras = qtdHorasExtras * (vHoraTrab * 0.50);
    salBruto = salMes + bonusDependentes + hExtras;

    if (salBruto < 200) {
        impRendaRetido = 0;
    } else if (salBruto >= 200 && salBruto < 500) {
        impRendaRetido = salBruto * 0.1;
    } else {
        impRendaRetido = salBruto * 0.2;
    }

    salLiquido = salBruto - impRendaRetido;

    if (salLiquido < 350) {
        grat = 100;
    } else {
        grat = 50;
    }

    salReceber = salLiquido + grat;
    printf("\n\tO funcionario recebera R$%.2f", salReceber);

    return (EXIT_SUCCESS);
}

