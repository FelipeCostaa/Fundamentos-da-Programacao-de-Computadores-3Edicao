/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 3
#define tam2 64

int main(int argc, char const *argv[])
{
	char nomeProd[tam1][tam2];
	float preco[tam1], media = 0, total = 0;
	int i, cont1 = 0, cont2 = 0;

	for (i = 0; i < tam1; i++)
	{
		printf("\n%dº produto: ", i + 1);
		setbuf(stdin, NULL); // limpar o buffer
		printf("\nNome: ");
		scanf("%[^\n]", &nomeProd[i]);
		printf("\nPreço: ");
		scanf("%f", &preco[i]);	
		system("clear");
	}

	for (i = 0; i < tam1; i++)
	{
		if (preco[i] < 50)
		{
			cont1++;
		}
		if (preco[i] >= 50 && preco[i] < 100)
		{
			printf("\nProduto com preço entre R$50 e R$100: %s", nomeProd[i]);
		}
		if (preco[i] >= 100)
		{
			cont2++;
			total += preco[i];
		}
	}

	media = total / cont2;
	
	printf("\nQuantidade de produtos com preço inferior a R$50: %d", cont1++);
	printf("\nMedia dos produtos com preço superior a R$100: %.2f", media);
	
	return 0;
}
