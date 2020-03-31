/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float pesoIdeal(float altura, char sexo);

int main(int argc, char const *argv[])
{
	float altura;
	char sexo;

	printf("\n*Calcula o seu peso ideal*");
	printf("\nInforme os dados: ");
	printf("\nAltura\n--> ");
	scanf("%f", &altura);
	printf("\nSexo (m ou f)\n--> ");
	scanf("%s", &sexo);

	pesoIdeal(altura, sexo);
	
	return 0;
}

float pesoIdeal(float altura, char sexo)
{
	float pesoIdeal;

	switch (sexo)
	{
	case 'f':
		pesoIdeal = 62.1 * altura - 44.7;
		printf("\nO seu peso ideal é de %.2fkg", pesoIdeal);
		break;
	
	case 'm':
		pesoIdeal = 72.7 * altura - 58;
		printf("\nO seu peso ideal é de %.2fkg", pesoIdeal);
		break;
	
	default:
		printf("\nERRO! O sexo informado é invalido.\nTente novamente.");
		break;
	}


}