/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int converterSegundosParaHoras(int seg);

int main(int argc, char const *argv[])
{
	int seg;

	printf("\nInforme a quantidade de segundos: ");
	scanf("%d", &seg);

	converterSegundosParaHoras(seg);
	
	return 0;
}

int converterSegundosParaHoras(int seg)
{
	int horas, minutos, segundos, resto;

	horas = seg / 3600;
	resto = segundos % 3600;
	minutos = resto / 60;
	segundos = resto % 60;

	printf("\n%d:%d:%d", horas, minutos, segundos);

}