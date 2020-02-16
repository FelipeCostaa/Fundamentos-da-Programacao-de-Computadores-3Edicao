/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex11, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int hora1, minuto1; //horario de inico
    int hora2, minuto2; //horario do termino
    int hora3, minuto3; //recebe a duração

    printf("\nInforme o horario de inicio: ");
    printf("\nHora: ");
    scanf("%d*c", &hora1);
    printf("\nMinutos: ");
    scanf("%d*c", &minuto1);

    printf("\nInforme o horario de termino: ");
    printf("\nHora: ");
    scanf("%d*c", &hora2);
    printf("\nMinutos: ");
    scanf("%d*c", &minuto2);

    if (minuto1 > minuto2) {
        minuto2 = minuto2 + 60;
        hora2 = hora2 - 1;
    } else if (hora1 > hora2) {
        hora2 = hora2 + 24;
    }
    minuto3 = minuto2 - minuto1;
    hora3 = hora2 - hora1;
    printf("\n\tO jogo durou %dhrs e %dmin", hora3, minuto3);

    return (EXIT_SUCCESS);
}

