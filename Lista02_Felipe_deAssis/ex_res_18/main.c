/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex18, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float x, y, z;

    printf("\nInforme a medida x: ");
    scanf("%f*c", &x);
    printf("\nInforme a medida y: ");
    scanf("%f*c", &y);
    printf("\nInforme a medida z: ");
    scanf("%f*c", &z);

    if ((x < y + z) && (y < x + z) && (z < x + y)) {
        if (x == y && y == z) {
            printf("\n\tTriangulo Equilatero");
        } else if (x == y || x == z || y == z) {
            printf("\n\tTriangulo Isosceles");
        } else if (x != y && x != z && y != z) {
            printf("\n\tTriangulo Escaleno");
        }
    }
    printf("\n\t*Essas medidas não formam um triangulo*");

    return (EXIT_SUCCESS);
}
