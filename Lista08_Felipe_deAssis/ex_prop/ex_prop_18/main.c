/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

// Crie uma sub-rotina que gere e mostre os três
// primeiros números primos acima de 100.

// #101		#103 	#107

#include <stdio.h>
#include <stdlib.h>

void numerosPrimosAcimaDe100();

int main(int argc, char const *argv[])
{

	numerosPrimosAcimaDe100();

	return 0;
}

void numerosPrimosAcimaDe100()
{
	int num = 101, cont = 0, contPrimo = 0;

	do
	{
		cont = 0;
		for (int i = 1; i <= num; i++)
		{
			if (num % i == 0)
			{
				cont++;
				// printf("\nCont é igual a %d.", cont);
			}
		}
		if (cont == 2)
		{
			printf("\n%d é numero primo.", num);
			contPrimo++;
		}
		// else
		// {
		// 	printf("\n%d não é primo.", num);
		// }
		// se quiser ver quais numeros não são primos basta tirar os comentarios acima

		num += 2;
		// serve para adicionar +2 numeros a variavel que esta sendo testada,
		// levando em consideração que numeros primos são todos impares exceto o 2

	} while (contPrimo < 3);
	// basta trocar o valor '3' pela quantidade de numeros primos depois do 100 que se quer
}