/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex16, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    printf("\n\t**CALCULA O SALARIO A RECEBER**");

    //entrada de dados
    float horasTrabalhadas, salMinimo, salReceber, imposto, salBruto;
    float valorHoraTrabalhada, salLiquido;

    //recebe dados
    printf("\nInfome a quantidade de horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);
    printf("\nInforme o valor do salario minimo: R$");
    scanf("%f", &salMinimo);

    //processa os dados
    valorHoraTrabalhada = salMinimo / 2;
    salBruto = horasTrabalhadas*valorHoraTrabalhada;
    imposto = salBruto * 0.03;
    salReceber = salBruto - imposto;

    //saida de dados
    printf("\n\tO salario a receber sera de R$%.2f", salReceber);

    return (EXIT_SUCCESS);
}

