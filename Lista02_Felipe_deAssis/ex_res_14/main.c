/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex14, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float salInicial, salNovo, bonificacao, aux;

    printf("\nInforme o salario: R$");
    scanf("%f*c", &salInicial);

    if (salInicial <= 500) {
        bonificacao = salInicial * 0.05;
    } else if (salInicial > 500 && salInicial <= 1200) {
        bonificacao = salInicial * 0.12;
    } else {
        bonificacao = 0;
        printf("\n\tSem bonificação");
    } 
    if (salInicial <= 600) {
        aux = 150;
    } else {
        aux = 100;
    }
    
    salNovo = salInicial + bonificacao + aux;
    printf("\n\tO novo salario acrescido da bonificação e do auxilio é de R$%.2f", salNovo);
    
    return (EXIT_SUCCESS);
}

