/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex13, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int menu;
    float sal, imp, nSal;

    printf("\n\t    MENU");
    printf("\n\t1 - Imposto ");
    printf("\n\t2 - Novo Salario ");
    printf("\n\t3 - Classificação \n\n\t\t");
    scanf("%d*c", &menu);

    //receber o salário de um funcionário, calcular e mostrar o valor do imposto usando as regras a seguir.
    if (menu == 1) {
        printf("\nInforme o salario do funcionario: R$");
        scanf("%f*c", &sal);
        if (sal < 500) {
            imp = sal * 0.05;
        } else if (sal >= 500.00 && sal <= 850.00) {
            imp = sal * 0.10;
        } else {
            imp = sal * 0.15;
        }
        printf("\n\tImposto: R$%.2f", imp);
    }//receber o salário de um funcionário, calcular e mostrar o valor do novo salário, usando as regras a seguir.
    else if (menu == 2) {
        printf("\n\tInforme o salario do funcionario: R$");
        scanf("%f*c", &sal);
        if (sal > 1500) {
            nSal = sal + 25;
        } else if (sal >= 750 && sal <= 1500) {
            nSal = sal + 50;
        } else if (sal > 450 && sal < 750) {
            nSal = sal + 75;
        } else {
            nSal = sal + 100;
        }
        printf("\n\tNovo salario R$%.2f", nSal);
    }//receber o salário de um funcionário e mostrar sua classificação usando a tabela a seguir.
    else if (menu == 3) {
        printf("\n\tInforme o salario do funcionario: R$");
        scanf("%f*c", &sal);
        if (sal <= 700) {
            printf("\n\tMal remunerado");
        } else {
            printf("\n\tBem remunerado");
        }
    } else {
        printf("\n\t**OPÇÃO INVALIDA**");
    }

    return (EXIT_SUCCESS);
}

