/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex18, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float tempC, tempF;

    printf("\nInforme a temperatura em graus celsius: ");
    scanf("%f*c", &tempC);

    tempF = 180 * (tempC + 32) / 100;
    
    printf("\n\tA temperatura convertida em Fahrenheit é %.2f", tempF);

    return (EXIT_SUCCESS);
}

