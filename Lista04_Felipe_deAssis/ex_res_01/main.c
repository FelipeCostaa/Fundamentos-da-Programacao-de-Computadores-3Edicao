/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex1, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int anoAtual, i;
    float salInicial = 1000, salNovo = 0, aum = 0.015, aum2007;
    
    printf("\nInforme o ano atual: ");
    scanf("%d", &anoAtual);
    
    salNovo =  aum * salInicial + salInicial;

    for (i = 2007; i <= anoAtual; i++) {
        aum2007 = aum * 2;
        salNovo = salNovo + (aum2007 * salNovo);
    }
    printf("\n\tO salario atualmente é de R$%.2f", salNovo);

    return (EXIT_SUCCESS);
}
