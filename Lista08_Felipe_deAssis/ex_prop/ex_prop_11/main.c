/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float formula(int num);

int main(int argc, char const *argv[])
{
	int num;

	printf("\nS = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + .... + (n² + 1) / (n + 3)");
	printf("\nDefina o valor de N\n--> ");
	scanf("%d", &num);

	printf("\n\nO valor de S é: %.2f", formula(num));
	
	return 0;
}

float formula(int num)
{
	float S;

	for (float i = 1; i <= num; i++)
	{
		S += (i * i + 1) / (i + 3);
	}
	
	return S;
}