/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex4, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float nota1, nota2, mediaPonderada, peso1 = 2, peso2 = 3;

    printf("\nInforme a primeira nota: ");
    scanf("%f*c", &nota1);
    printf("\nInforme a segunda nota: ");
    scanf("%f*c", &nota2);

    mediaPonderada = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);

    printf("\n\tA media ponderada das duas notas é de %.2f", mediaPonderada);

    return (EXIT_SUCCESS);
}

