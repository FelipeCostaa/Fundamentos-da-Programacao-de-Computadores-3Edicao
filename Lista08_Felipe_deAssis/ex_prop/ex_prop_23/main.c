/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trianguloEquilatero(int num1, int num2, int num3);
void trianguloIsosceles(int num1, int num2, int num3);
void trianguloEscaleno(int num1, int num2, int num3);
int verificaTrianguo(int num1, int num2, int num3);

int main(int argc, char const *argv[])
{
	int num1, num2, num3;

	do
	{
		printf("\nInforme o primeiro numero: ");
		scanf("%d", &num1);
	} while (num1 <= 0);

	do
	{
		printf("\nInforme o segundo numero: ");
		scanf("%d", &num2);
	} while (num2 <= 0);

	do
	{
		printf("\nInforme o terceiro numero: ");
		scanf("%d", &num3);
	} while (num3 <= 0);

	if (verificaTrianguo(num1, num2, num3) == 1)
	{
		trianguloEquilatero(num1, num2, num3);
		trianguloEscaleno(num1, num2, num3);
		trianguloIsosceles(num1, num2, num3);
	}
	else
	{
		printf("\nNão é um triangulo.");
	}

	return 0;
}

// triângulo equilátero é um triângulo que tem todos os lados iguais
void trianguloEquilatero(int num1, int num2, int num3)
{
	if (num1 == num2 && num2 == num3)
	{
		printf("\nForma um triangulo equilatero.");
	}
}

// triângulo isósceles é um triângulo com pelo menos dois lados iguais
void trianguloIsosceles(int num1, int num2, int num3)
{
	int verif = 0;

	if (num1 == num2 && num1 == num3)
	{
		verif = 1;
	}
	else if (num2 == num1 && num2 == num3)
	{
		verif = 1;
	}
	else if (num3 == num1 && num3 == num2)
	{
		verif = 1;
	}

	if (verif == 1)
	{
		printf("\nForma um triangulo isoceles.");
	}
}

// triângulo escaleno é um triângulo em que todos os lados são diferentes
void trianguloEscaleno(int num1, int num2, int num3)
{
	int verif = 0;

	if (num1 != num2 && num1 != num3)
	{
		verif++;
	}
	else if (num2 != num1 && num2 != num3)
	{
		verif++;
	}
	else if (num3 != num1 && num3 != num2)
	{
		verif++;
	}

	if (verif == 3)
	{
		printf("\nForma um triangulo escaleno.");
	}
}

// a medida de um lado qualquer deve ser inferior ou igual à soma das medidas dos outros dois
int verificaTrianguo(int num1, int num2, int num3)
{
	int verif = 0;

	if (num1 <= (num2 + num3))
	{
		verif = 1;
	}
	else if (num2 <= (num1 + num3))
	{
		verif = 1;
	}
	else if (num3 <= (num1 + num3))
	{
		verif = 1;
	}

	return verif;
}