/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex19, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float m2 = 18, dimensaoComodo1, dimensaoComodo2, area, potenciaUtilizada;

    printf("\nInfore a dimensao da primeira parede do comodo: ");
    scanf("%f*c", &dimensaoComodo1);
    printf("\nInfore a dimensao da segunda parede do comodo: ");
    scanf("%f*c", &dimensaoComodo2);

    area = dimensaoComodo1 * dimensaoComodo2;
    potenciaUtilizada = area * m2;

    printf("\n\tA area do comodo é %.2f", area);
    printf("\n\tA potencia que devera ser usada é %.2f", potenciaUtilizada);

    return (EXIT_SUCCESS);
}

