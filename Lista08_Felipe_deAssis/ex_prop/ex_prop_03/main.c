/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int divisivel(int num1, int num2);

int main(int argc, char const *argv[])
{
	int num1, num2;

	printf("\nInfome o primeiro numero: ");
	scanf("%d", &num1);
	printf("\nInfome o segundo numero: ");
	scanf("%d", &num2);

	if (divisivel(num1, num2) == 0)
	{
		printf("\n%d é divisivel por %d.", num1, num2);
	}
	else
	{
		printf("\n%d não é divisivel por %d.\nO proximo divisivel de %d é %d", num1, num2, num2, divisivel(num1, num2));
	}
	
	

	return 0;
}

int divisivel(int num1, int num2)
{
	int resultado;

	if (num1 % num2 == 0)
	{
		resultado = 0;
	}
	else
	{
		while (num1 % num2 != 0)
		{
			num1 += 1;
		}
		resultado = num1;
	}
	
	

	return resultado;
}