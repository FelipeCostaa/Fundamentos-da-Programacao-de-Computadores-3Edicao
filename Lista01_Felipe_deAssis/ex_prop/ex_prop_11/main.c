/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex11, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float area, diagonalMaior, diagonalMenor;

    printf("\nInforme a diagoral maior do losango: ");
    scanf("%f*c", &diagonalMaior);
    printf("\nInforme a diagoral menor do losango: ");
    scanf("%f*c", &diagonalMenor);

    area = (diagonalMaior * diagonalMenor) / 2;

    printf("\n\tA area do losango é de %.2f", area);

    return (EXIT_SUCCESS);
}

