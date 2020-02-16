/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex6, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float salario, comissaoSobreVendas = 0.04, comissao, vendas, salFinal;

    printf("\nInforme o salario do funcionario: R$");
    scanf("%f*c", &salario);
    printf("\nInforme o valor das vendas do funcionario: R$");
    scanf("%f*c", &vendas);

    comissao = vendas * comissaoSobreVendas;
    salFinal = comissao + salario;
    
    printf("\n\tO valor que o funcionario recebera de comissao é de R$%.2f"
            "\n\tE o salario final do funcionario sera de R$%.2f", comissao, salFinal);

    return (EXIT_SUCCESS);
}

