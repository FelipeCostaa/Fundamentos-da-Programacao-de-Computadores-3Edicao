/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex1, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float trabLab, avSemestre, exameFinal, media, pesoTrab = 2, pesoAv = 3, pesoExame = 5;

    printf("\nInforme a nota do trabalho de laboratorio: ");
    scanf("%f*c", &trabLab);
    printf("\nInforme a nota da avalição semestral: ");
    scanf("%f*c", &avSemestre);
    printf("\nInforme a nota do exame final: ");
    scanf("%f*c", &exameFinal);

    media = (trabLab * pesoTrab + avSemestre * pesoAv + exameFinal * pesoExame)
            / (pesoTrab + pesoAv + pesoExame);


    if (media >= 8 && media <= 10) {
        printf("\nConceito A");
    } else if (media >= 7 && media < 8) {
        printf("\nConceito B");
    } else if (media >= 6 && media < 7) {
        printf("\nConceito C");
    } else if (media >= 5 && media < 6) {
        printf("\nConceito D");
    } else {
        printf("\nConceito E");
    }


    return (EXIT_SUCCESS);
}

