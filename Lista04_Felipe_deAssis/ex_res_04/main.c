/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex4, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    //dados cidades
    int codCid1, numVeic1, numAcid1;
    int codCid2, numVeic2, numAcid2;
    int codCid3, numVeic3, numAcid3;
    int codCid4, numVeic4, numAcid4;
    int codCid5, numVeic5, numAcid5;

    //maior e menor indice de acidentes
    float indice1, indice2, indice3, indice4, indice5;
    float mediaVeic, mediaAcid;

    int i;

    printf("\n\tCidade 1");
    printf("\nCodigo da cidade: ");
    scanf("%d%*c", &codCid1);
    printf("\nNumero de veiculos de passeio: ");
    scanf("%d%*c", &numVeic1);
    printf("\nNumero de acidentes com vitimas: ");
    scanf("%d%*c", &numAcid1);
    printf("\n");

    printf("\n\tCidade 2");
    printf("\nCodigo da cidade: ");
    scanf("%d%*c", &codCid2);
    printf("\nNumero de veiculos de passeio: ");
    scanf("%d%*c", &numVeic2);
    printf("\nNumero de acidentes com vitimas: ");
    scanf("%d%*c", &numAcid2);
    printf("\n");

    printf("\n\tCidade 3");
    printf("\nCodigo da cidade: ");
    scanf("%d%*c", &codCid3);
    printf("\nNumero de veiculos de passeio: ");
    scanf("%d%*c", &numVeic3);
    printf("\nNumero de acidentes com vitimas: ");
    scanf("%d%*c", &numAcid3);
    printf("\n");

    printf("\n\tCidade 4");
    printf("\nCodigo da cidade: ");
    scanf("%d%*c", &codCid4);
    printf("\nNumero de veiculos de passeio: ");
    scanf("%d%*c", &numVeic4);
    printf("\nNumero de acidentes com vitimas: ");
    scanf("%d%*c", &numAcid4);
    printf("\n");

    printf("\n\tCidade 5");
    printf("\nCodigo da cidade: ");
    scanf("%d%*c", &codCid5);
    printf("\nNumero de veiculos de passeio: ");
    scanf("%d%*c", &numVeic5);
    printf("\nNumero de acidentes com vitimas: ");
    scanf("%d%*c", &numAcid5);
    printf("\n");

    //calcula o indice de acidentes
    indice1 = numVeic1 / numAcid1;
    indice2 = numVeic2 / numAcid2;
    indice3 = numVeic3 / numAcid3;
    indice4 = numVeic4 / numAcid4;
    indice5 = numVeic5 / numAcid5;

    if (indice1 > indice2 && indice1 > indice3 && indice1 > indice4 && indice1 > indice5) {
        printf("\n\tA cidade 1 tem o maior indice de acidentes");
    } else if (indice2 > indice1 && indice2 > indice3 && indice2 > indice4 && indice2 > indice5) {
        printf("\n\tA cidade 2 tem o maior indice de acidentes");
    } else if (indice3 > indice1 && indice3 > indice2 && indice3 > indice4 && indice3 > indice4) {
        printf("\n\tA cidade 3 tem o maior indice de acidentes");
    } else if (indice4 > indice1 && indice4 > indice2 && indice4 > indice3 && indice4 > indice5) {
        printf("\n\tA cidade 4 tem o maior indice de acidentes");
    } else if (indice5 > indice1 && indice5 > indice2 && indice5 > indice3 && indice5 > indice4) {
        printf("\n\tA cidade 5 tem o maior indice de acidentes");
    } else {
        printf("\n\tERRO");
    }

    mediaVeic = (numVeic1 + numVeic2 + numVeic3 + numVeic4 + numVeic5) / 5;
    printf("\n\tA media de veiculos nas cidades é %.2f", mediaVeic);

    if (numVeic1 < 2000) {
        mediaAcid = numVeic1 / numAcid1;
        printf("\n\tA media de acidentes na cidade 1 é %.2f", mediaAcid);
    } else if (numVeic2 < 2000) {
        mediaAcid = numVeic2 / numAcid2;
        printf("\n\tA media de acidentes na cidade 2 é %.2f", mediaAcid);
    } else if (numVeic3 < 2000) {
        mediaAcid = numVeic3 / numAcid3;
        printf("\n\tA media de acidentes na cidade 3 é %.2f", mediaAcid);
    } else if (numVeic4 < 2000) {
        mediaAcid = numVeic4 / numAcid4;
        printf("\n\tA media de acidentes na cidade 4 é %.2f", mediaAcid);
    } else if (numVeic5 < 2000) {
        mediaAcid = numVeic5 / numAcid5;
        printf("\n\tA media de acidentes na cidade 5 é %.2f", mediaAcid);
    }

    return (EXIT_SUCCESS);
}
