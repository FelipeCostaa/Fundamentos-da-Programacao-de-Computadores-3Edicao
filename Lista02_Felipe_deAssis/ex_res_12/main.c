/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex12, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int codCargo;
    float salAtual, valorAum, salNovo;

    printf("\n\tCodigo -    Cargo    - Percentual");
    printf("\n\t   1   - Escrituario - 50%%");
    printf("\n\t   2   - Secretario  - 35%%");
    printf("\n\t   3   - Caixa       - 20%%");
    printf("\n\t   4   - Gerente     - 10%%");
    printf("\n\t   5   - Diretor     - Não tem aumento");

    printf("\n\nInforme o codigo do cargo do funcionario: ");
    scanf("%d*c", &codCargo);

    //mostrar cargo, valor do aumento e novo salario
    if (codCargo == 1) {
        printf("\nInforme o salario atual do funcionario: R$");
        scanf("%f*c", &salAtual);
        printf("\n\tCargo: Escrituario");
        valorAum = salAtual * 0.5;
        printf("\n\tAumento R$%.2f", valorAum);
        salNovo = salAtual + valorAum;
        printf("\n\tNovo salario R$%.2f", salNovo);
    } else if (codCargo == 2) {
        printf("\nInforme o salario atual do funcionario: R$");
        scanf("%f*c", &salAtual);
        printf("\n\tCargo: Secretario");
        valorAum = salAtual * 0.35;
        printf("\n\tAumento R$%.2f", valorAum);
        salNovo = salAtual + valorAum;
        printf("\n\tNovo salario R$%.2f", salNovo);
    } else if (codCargo == 3) {
        printf("\nInforme o salario atual do funcionario: R$");
        scanf("%f*c", &salAtual);
        printf("\n\tCargo: Caixa");
        valorAum = salAtual * 0.20;
        printf("\n\tAumento R$%.2f", valorAum);
        salNovo = salAtual + valorAum;
        printf("\n\tNovo salario R$%.2f", salNovo);
    } else if (codCargo == 4) {
        printf("\nInforme o salario atual do funcionario: R$");
        scanf("%f*c", &salAtual);
        printf("\n\tCargo: Gerente");
        valorAum = salAtual * 0.10;
        printf("\n\tAumento R$%.2f", valorAum);
        salNovo = salAtual + valorAum;
        printf("\n\tNovo salario R$%.2f", salNovo);
    } else if (codCargo == 4) {
        printf("\n\tCargo: Diretor");
        printf("\n\tNão terá aumento");
    } else {
        printf("\n\t**Não é uma opção valida.**");
    }

    return (EXIT_SUCCESS);
}

