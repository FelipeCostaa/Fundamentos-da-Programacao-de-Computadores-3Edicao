/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float volume(float raio);

int main(int argc, char const *argv[])
{
	float raio;

	printf("\nInforme o raio da esfera: ");
	scanf("%f", &raio);

	printf("\n\nO volume da esfera é de: %.2f", volume(raio));
	
	return 0;
}

float volume(float raio)
{
	float volume;

	volume = (4 * 3.1415926 * raio * raio * raio) / 3;

	return volume;
}