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

	printf("\nInforme a primeira nota: \n-> ");
	scanf("%f", &nota1);
	printf("\nInforme a segunda nota: \n-> ");
	scanf("%f", &nota2);
	printf("\nInforme a terceira nota: \n-> ");
	scanf("%f", &nota3);	

		printf("\nInforme o que deseja fazer "
					"\n(a - media aritmetica, p - media ponderada \n-> ");
		setbuf(stdin, NULL); 
		gets(opcao);

	calculoMedia(nota1, nota2, nota3, opcao);
	
	return 0;
}

float calculoMedia(float nota1, float nota2, float nota3, char opcao)
{
	float media;

	if (opcao == 'a' || opcao == 'A')
	{
		media = (nota1 + nota2 + nota3) / 3;
	}
	else if (opcao == 'p' || opcao == 'P')
	{
		media = (nota1 * 5 + nota2 * 3 + nota3 * 2) / (5 + 3 + 2);
	}

	return media;	
}