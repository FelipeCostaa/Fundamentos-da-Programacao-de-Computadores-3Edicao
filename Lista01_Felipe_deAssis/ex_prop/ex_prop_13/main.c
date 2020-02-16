/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap3, ex13, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int num, total;

    printf("\nInforme o numero que deseja visualizar a tabuada: ");
    scanf("%d*c", &num);

    total = num * 1;
    printf("\n\t%d*1=%d", num, total);
    total = num * 2;
    printf("\n\t%d*2=%d", num, total);
    total = num * 3;
    printf("\n\t%d*3=%d", num, total);
    total = num * 4;
    printf("\n\t%d*4=%d", num, total);
    total = num * 5;
    printf("\n\t%d*5=%d", num, total);
    total = num * 6;
    printf("\n\t%d*6=%d", num, total);
    total = num * 7;
    printf("\n\t%d*7=%d", num, total);
    total = num * 8;
    printf("\n\t%d*8=%d", num, total);
    total = num * 9;
    printf("\n\t%d*9=%d", num, total);
    total = num * 10;
    printf("\n\t%d*10=%d", num, total);

    return (EXIT_SUCCESS);
}

