/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex21, resolvido*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    printf("\n\t**Calcula e mostra a que distância a escada deve "
            "\n\testar da parede para pregar um quadro**");

    //declaração de variaveis
    float distEscadaParede, tamEscada, altQuadro, angulo;

    //entrada de dados
    printf("\n\n\t**Lembre-se de que o tamanho da escada deve ser maior que "
            "\n\ta altura que se deseja alcançar**");
    printf("\n\nInforme o tamanho da escada: ");
    scanf("%f", &tamEscada);
    printf("\nA que altura deseja pregar o quadro? ");
    scanf("%f", &altQuadro);

    //processamento de dados
    distEscadaParede = pow(tamEscada, 2) - pow(altQuadro, 2);
    distEscadaParede = sqrt(distEscadaParede);

    //saida de dados
    printf("\n\tA distancia que a escada deve estar da parede é de %.2f", distEscadaParede);

    return (EXIT_SUCCESS);
}

