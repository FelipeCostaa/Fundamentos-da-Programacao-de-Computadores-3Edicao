/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CONTAS 15
#define CARACTERES 64

void imprimirMenu();
void cadastro();
void visualizar();
void excluir();

typedef struct
{
	int num;
	char nome[CARACTERES];
	float saldo;
	int ativo;
} dadosConta;

dadosConta conta[CONTAS];

int main(int argc, char const *argv[])
{
	int menu;
	int cont = 0;

	for (int i = 0; i < CONTAS; i++)
	{
		conta[i].ativo = 0;
	}

	do
	{
		imprimirMenu();

		printf("\n--> ");
		scanf("%d", &menu);
		switch (menu)
		{

		case 1:
			cadastro();
			break;

		case 2:
			visualizar();
			break;

		case 3:
			excluir();
			break;

		case 4:
			printf("\nSaindo...\n");
			break;

		default:
			// system("clear");
			printf("ERRO! Opção não existente.\n");
			break;
		}

	} while (menu != 4);

	return 0;
}

void imprimirMenu()
{
	printf("\n1 - Cadastrar contas"
				 "\n2 - Visualizar contas"
				 "\n3 - Excluir conta"
				 "\n4 - Sair");
}

void cadastro()
{
	int num;
	char nome[CARACTERES];
	float saldo;
	int menuCadastro;

	int verif = 0;

	do
	{

		do
		{
			printf("\nInforme os dados da conta: ");
			printf("\nNumero: ");
			scanf("%d", &num);

			for (int i = 0; i < CONTAS; i++)
			{
				if (num == conta[i].num)
				{
					printf("\nERRO! Conta informada já está cadastrada.\nTente cadastrar novamente utilizando outro numero.\n");
					verif = 1;
					break;
				}
			}

		} while (verif == 1);

		printf("\nNome: ");
		setbuf(stdin, NULL);
		scanf("%[a-z A-Z]s", nome); // recebe apenas letras e espaços
		printf("\nSaldo: R$");
		scanf("%f", &saldo);

		for (int i = 0; i < CONTAS; i++)
		{
			if (conta[i].ativo == 0)
			{
				conta[i].num = num;
				strcpy(conta[i].nome, nome);
				conta[i].saldo = saldo;
				conta[i].ativo = 1;
				break;
			}
		}

		printf("\nCadastrar outra conta?\n0 - Não | 1 - Sim\n--> ");
		scanf("%d", &menuCadastro);

	} while (menuCadastro != 0);
}

void visualizar()
{
	int menuVisualizar, numConta, verif = 0;

	do
	{
		printf("\n1 - Listar todos\n2 - Listar por numero de conta\n0 - Sair\n--> ");
		scanf("%d", &menuVisualizar);

		switch (menuVisualizar)
		{
		case 1:
			for (int i = 0; i < CONTAS; i++)
			{
				if (conta[i].ativo == 1)
				{
					printf("\nDetalhes da conta: ");
					printf("\n\tNumero: %d", conta[i].num);
					printf("\n\tNome: %s", conta[i].nome);
					printf("\n\tSaldo: R$%2.f", conta[i].saldo);
					printf("\n\n--------------------------------\n\n");
				}
			}
			break;

		case 2:
			printf("\nNumero da conta\n--> ");
			scanf("%d", &numConta);

			for (int i = 0; i < CONTAS; i++)
			{

				if (numConta == conta[i].num)
				{
					printf("\nDetalhes da conta: ");
					printf("\n\tNumero: %d", conta[i].num);
					printf("\n\tNome: %s", conta[i].nome);
					printf("\n\tSaldo: R$%2.f", conta[i].saldo);
					printf("\n--------------------------------\n\n");
					verif = 1;
				}
			}

			if (verif = 0)
			{
				printf("\nERRO! Conta informada não está cadastrada.");
			}
			break;

		case 0:
			printf("\nSaindo...");
			break;

		default:
			printf("ERRO! Opção não existente.\n");
			break;
		}
	} while (menuVisualizar != 0);
}

void excluir()
{
	int numConta, verif = 0;

	printf("\nNumero da conta que deseja excluir\n--> ");
	scanf("%d", &numConta);

	for (int i = 0; i < CONTAS; i++)
	{
		if (numConta == conta[i].num)
		{
			conta[i].ativo = 0;
			verif = 1;
			printf("\nConta excluida.");
		}
	}
	if (verif == 0)
	{
		printf("\nERRO! Conta informada não está cadastrada.");
	}
}

// *** REFAZER ISSO ASSIM QUE POSSIVEL ***
// void alocarContas(int num, char *nome, float saldo)
// {
// 	for (int i = 0; i < CONTAS; i++)
// 	{
// 		if (conta[i].ativo == 0)
// 		{
// 			conta[i].num = num;
// 			strcpy(conta[i].nome, nome);
// 			conta[i].saldo = saldo;
// 			conta[i].ativo = 1;
// 			break;
// 		}
// 	}
// }