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
	char cidadeOrigem[tam1][tam2], cidadeDestino[tam1][tam2];
	float distancia[tam1][tam1], consumo[tam1], quant, cont = 0;
	int i, j;

	for (i = 0; i < tam1; i++)
	{
		for (j = 0; j < tam1; j++)
		{
			printf("\n%dª Viagem: ", j+1);

			printf("\nCidade Origem: ");
			setbuf(stdin, NULL);
			gets(cidadeOrigem[j]);

			printf("\nCidade Destino: ");
			setbuf(stdin, NULL);
			gets(cidadeDestino[j]);	

			if (i == j)
			{
				distancia[i][j] = 0;
				printf("\nDistancia entre as cidades: 0\n");
			}
			else
			{
				printf("\nDistancia entre as cidades(em km): ");
				scanf("%f", &distancia[i][j]);	
			}
			
			printf("\nConsumo do veiculo(km/L): ");
			scanf("%f", &consumo[i]);

			// system("clear");
			printf("\n--------------------------------------");
		}
		
	}

	printf("\nPercursos que não ultrapassam 250km: ");
	for (i = 0; i < tam1; i++)
	{
		for (j = 0; j < tam1; j++)
		{
			if (distancia[i][j] < 250 && distancia > 0)
			{
				printf("\n\tOrigem: %s \tDestino: %s", cidadeOrigem[j], cidadeDestino[j]);
				cont++;
			}
			
		}
		
	}
	if (cont != 0)
	{
		printf("\nTodas as cidades têm mais que 250km de distancia.");
	}

	printf("\n\n");
	printf("\nTodos os percursos\t\tQuantidade de Combustivel necessaria para percorre-los");
	for (i = 0; i < tam1; i++)
	{
		for (j = 0; j < tam1; j++)
		{
			printf("\n%dº: ", j+1);
			printf("\n%s\ta\t%s\t|\t%.2f", cidadeOrigem[j], cidadeDestino[j], distancia[i][j]/consumo[i]);
		}
		
	}
	

	return 0;
}