/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TIPO_SERVICO 4
#define DIAS 30
#define CARACTERES_DESCRICAO 256

typedef struct
{
	// 1) pintura; 2) jardinagem; 3) faxina e 4) reforma em geral
	int codigo;
	char descricao[CARACTERES_DESCRICAO];
} tiposDeServicos;

tiposDeServicos tiposServicos[TIPO_SERVICO];

typedef struct
{
	int numServico;
	float valorServico;
	int codigoServico;
	int codigoCliente;
} infoServicos;

infoServicos servicos[DIAS];

void visualizarMenu();
void cadastrarTiposServicos();
void cadastrarServicosPrestados();
void mostrarServicosDia();
void mostrarServicosIntervaloValor();
void mostrarRelatoriaGeral();

int main(int argc, char const *argv[])
{
	int menu;

	do
	{
		visualizarMenu();
		scanf("%d", &menu);

		switch (menu)
		{
		case 1:
			cadastrarTiposServicos();
			break;

		case 2:

			break;

		case 3:

			break;

		case 4:

			break;

		case 5:

			break;

		case 6:
			printf("\nSaindo...\n");
			break;

		default:
			printf("\nERRO! Opção não existente.\n");
			break;
		}

	} while (menu != 6);

	return 0;
}

void visualizarMenu()
{
	printf("\n\t***MENU PRINCIPAL***");
	printf("\n1 - Cadastrar os tipos de serviços\n2 - Cadastrar os serviços prestados");
	printf("\n3 - Mostrar os serviços prestados em determinado dia");
	printf("\n4 - Mostrar os serviços prestados dentro de um intervalo de valor");
	printf("\n5 - Mostrar um relatorio geral\n6 - Sair\n--> ");
}

void cadastrarTiposServicos()
{
	int codigo;
	char descricao[CARACTERES_DESCRICAO];
	int menu;

	do
	{
		printf("\nInforme os dados: ");
		printf("Codigo: ");
		scanf("%d", &codigo);
	} while (menu != 0);
}

void cadastrarServicosPrestados()
{
}

void mostrarServicosDia()
{
}

void mostrarServicosIntervaloValor()
{
}

void mostrarRelatoriaGeral()
{
}