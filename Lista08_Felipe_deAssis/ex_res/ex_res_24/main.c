/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void subtracao(float num1, float num2);
void adicao(float num1, float num2);
void divisao(float num1, float num2);
void multiplicacao(float num1, float num2);

int main(int argc, char const *argv[])
{
	float num1, num2;
	char op;

	printf("\nInforme o tipo de operação que deseja efetuar"
	"\n'-' subtração\n'+' adição\n'/' divisão\n'*' multiplicação\n--> ");
	scanf("\n%s", &op);

	printf("\nInforme os dois números para prosseguir: ");
	printf("\nPrimeiro numero\n--> ");
	scanf("%f", &num1);
	printf("\nSegundo numero\n--> ");
	scanf("%f", &num2);

	switch (op)
	{
	case '-':
		subtracao(num1, num2);
		break;

	case '+':
		adicao(num1, num2);
		break;

	case '/':
		divisao(num1, num2);
		break;

	case '*':
		multiplicacao(num1, num2);
		break;
	
	default:
		printf("\nERRO! Operação não reconhecida.");
		break;
	}
	
	return 0;
}

void subtracao(float num1, float num2)
{
	float resultado;

	resultado = num1 - num2;
	printf("\nA subtração do %2.f pelo %.2f é: %2.f", num1, num2, resultado);

	return;	
}

void adicao(float num1, float num2)
{
	float resultado;

	resultado = num1 + num2;
	printf("\nA soma do %2.f pelo %.2f é: %2.f", num1, num2, resultado);

	return;
}

void divisao(float num1, float num2)
{
	float resultado;

	resultado = num1 / num2;
	printf("\nA divisão do %2.f pelo %.2f é: %2.f", num1, num2, resultado);

	return;
}

void multiplicacao(float num1, float num2)
{
	float resultado;

	resultado = num1 * num2;
	printf("\nA multiplicação do %2.f pelo %.2f é: %2.f", num1, num2, resultado);

	return;
}