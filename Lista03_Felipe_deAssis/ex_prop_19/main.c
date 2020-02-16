/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex19, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    float alt, pesoIdeal;
    char sexo;
   
    printf("\n\t CODIGO             SEXO");
    printf("\n\t    1               Masculino");
    printf("\n\t    2               Feminino\n");
    printf("\nQual o seu sexo: ");
    scanf(" %c*c", &sexo);
    printf("\nQual a sua altura: ");
    scanf("%f*c", &alt);
    
    if (sexo == 'm' || sexo == 'M'){
        pesoIdeal = (72.7 * alt) - 58;
    } else if (sexo == 'f' || sexo == 'F') {
        pesoIdeal = (62.1 * alt) - 44.7;
    }
    printf("\n\tPeso Ideal: %.2f", pesoIdeal);

    return (EXIT_SUCCESS);
}


