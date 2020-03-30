/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int horasEmSegundos(int hora, int minuto, int segundo);

int main(int argc, char const *argv[])
{
	int hora, minuto, segundo;

	printf("\nConverte horas em segundos.");
	printf("\nInforme a hora(h m s - *separe por espaço*)\n--> ");
	scanf("%d %d %d", &hora, &minuto, &segundo);

	printf("\nHora informada: \t%dhrs : %dmin : %dseg", hora, minuto, segundo);

	printf("\n\nA hora infomada convertida em segundos é: %d", horasEmSegundos(hora, minuto, segundo));
	
	return 0;
}

int horasEmSegundos(int hora, int minuto, int segundo)
{
	int	conversao;

	conversao = (hora * 3600) + (minuto * 60) + segundo;

	return conversao;
}