/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex14, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float sal, salNovo, aum;

    printf("\nSalario do funcionario R$");
    scanf("%f*c", &sal);

    if (sal <= 300) {
        aum = 0.5;
    } else if (sal > 300 && sal <= 500) {
        aum = 0.4;
    } else if (sal > 500 && sal <= 700) {
        aum = 0.3;
    } else if (sal > 700 && sal <= 800) {
        aum = 0.2;
    } else if (sal > 800 && sal <= 1000) {
        aum = 0.1;
    } else {
        aum = 0.05;
    }
    salNovo = sal + (sal * aum);
    printf("\n\tNovo salario R$%.2f", salNovo);

    return (EXIT_SUCCESS);
}
