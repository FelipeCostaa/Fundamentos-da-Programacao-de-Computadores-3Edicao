/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float calculoMedia(float nota1, float nota2, float nota3, char opcao);

int main(int argc, char const *argv[])
{
	float nota1, nota2, nota3;
	char opcao;
	int peso1 = 5, peso2 = 3, peso3 = 2;

	printf("\nInforme a primeira nota: \n-> ");
	scanf("%f", &nota1);
	printf("\nInforme a segunda nota: \n-> ");
	scanf("%f", &nota2);
	printf("\nInforme a terceira nota: \n-> ");
	scanf("%f", &nota3);	

	printf("\nInforme o que deseja fazer "
				"\n(a - media aritmetica, p - media ponderada \n-> ");
	scanf("%c", &opcao);

	return 0;
}

float calculoMedia(float nota1, float nota2, float nota3, char opcao)
{

}