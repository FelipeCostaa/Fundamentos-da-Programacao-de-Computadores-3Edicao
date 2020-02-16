/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex14, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int anoNasc, anoAtual, anos, meses, dias, semanas;

    printf("\nInforme o ano de nascimento: ");
    scanf("%d*c", &anoNasc);
    printf("\nInforme o ano atual: ");
    scanf("%d*c", &anoAtual);

    anos = anoAtual - anoNasc; //calcula a idade atual em anos
    meses = anos * 12; //calcula a idade em meses
    dias = meses * 30; //calcula a idade em dias
    semanas = dias / 7; //calcula a idade em semanas

    printf("\n\tA idade da pessoa em anos é %d", anos);
    printf("\n\tA idade da pessoa em meses é %d", meses);
    printf("\n\tA idade da pessoa em dias é %d", dias);
    printf("\n\tA idade da pessoa em semanas é %d", semanas);

    return (EXIT_SUCCESS);
}

