/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculoMinutos(int horaInicio, int minutoInicio, int horaTermino, int minutoTermino);

int main(int argc, char const *argv[])
{
	int horaInicio, minutoInicio, horaTermino, minutoTermino, minutos;

	printf("\nInforme a hora inicial e final do jogo: ");
	printf("\nHora inicial: \n(horas : minutos)\n-> ");
	scanf("%d %d", &horaInicio, &minutoInicio);

	printf("\nHora final: \n(horas : minutos)\n-> ");
	scanf("%d %d", &horaTermino, &minutoTermino);

	printf("\nHora inical informada: %d:%dhrs", horaInicio, minutoInicio);
	printf("\nHora final informada: %d:%dhrs", horaTermino, minutoTermino);

	minutos = calculoMinutos(horaInicio, minutoInicio, horaTermino, minutoTermino);
	printf("\n\nDuração do jogo em minutos %d", minutos);

	return 0;
}

int calculoMinutos(int horaInicio, int minutoInicio, int horaTermino, int minutoTermino)
{
	int totalHora, totalMinuto, total;

	if (minutoTermino < minutoInicio)
	{
		minutoTermino += 60;
		horaTermino -= 1;
	}
	if (horaTermino < horaInicio)
	{
		horaTermino += 24;
	}
	
	totalMinuto = minutoTermino - minutoInicio;
	totalHora = horaTermino - horaInicio;
	total = totalHora * 60 + totalMinuto;

	return total;
	
}