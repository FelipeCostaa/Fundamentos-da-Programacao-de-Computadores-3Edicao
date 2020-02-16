/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex7, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float aum = 0.3, sal;

    printf("\nSalario: R$");
    scanf("%f*c", &sal);

    if (sal < 500) {
        sal = sal + (sal * aum);
        printf("\n\tNovo salario: R$%.2f", sal);
    } else {
        printf("\n\tNão tera direito a aumento");
    }

    return (EXIT_SUCCESS);
}
