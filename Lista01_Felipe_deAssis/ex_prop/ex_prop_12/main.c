/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex12, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    float salMinimo, salFuncionario, qtdSalMin;
    
    printf("\nInforme o valor do salario minimo: R$");
    scanf("%f*c", &salMinimo);
    printf("\nInforme o salario do funcionario: R$");
    scanf("%f*c", &salFuncionario);
    
    qtdSalMin=salFuncionario/salMinimo;
    
    printf("\n\tA quantidade de salarios minimos que o funcionario recebe é "
            "de R$%.2f", qtdSalMin);

    return (EXIT_SUCCESS);
}

