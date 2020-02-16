/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex24, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float qtdQuePossui, dolar = 1.80, marcoAlemao = 2.00, libraEsterlina = 3.57,
            dolarC, marcoC, libraC;

    printf("\nInforme a quantidade de dinheiro que possui: R$");
    scanf("%f*c", &qtdQuePossui);

    dolarC = qtdQuePossui / dolar; //qtd em dolar
    printf("\nConversao em dolar é %.2f", dolarC);
    marcoC = dolar * (qtdQuePossui / marcoAlemao);
    printf("\nConversao em marco alemao é %.2f", marcoC);
    libraC = qtdQuePossui / libraEsterlina;
    printf("\nConversao em libra esternila é %.2f", libraC);

    return (EXIT_SUCCESS);
}

//refazer