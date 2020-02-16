/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex10, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    float area, lado;
    
    printf("\nInforme a medida do lado do quadrado: ");
    scanf("%f*c", &lado);
    
    area = lado * lado;
    
    printf("\nA area do quadrado é de %.2f", area);

    return (EXIT_SUCCESS);
}

