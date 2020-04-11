/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TIPO_SERVICO 4
#define QUANT_SERVICOS_DIA 3
#define DIAS 30
#define CARACTERES_DESCRICAO 64

typedef struct tiposDeServicos
{
	int codigo;
	char descricao[CARACTERES_DESCRICAO];
	int verif;
} tiposDeServicos;

tiposDeServicos tiposServicos[TIPO_SERVICO];

typedef struct infoServicos
{
	int numServico;
	float valorServico;
	int codigoServico;
	int codigoCliente;
	int verif;
	int codigoTipoServico;
	int diaServico;
} infoServicos;

infoServicos servicos[DIAS][QUANT_SERVICOS_DIA];

void visualizarMenu();
void cadastrarTiposServicos(tiposDeServicos *tiposServicos);
void cadastrarServicosPrestados(infoServicos servicos[][QUANT_SERVICOS_DIA], tiposDeServicos *tiposServicos, int diaServico);
int cadastrarServicosPrestadosParteII(infoServicos servicos[][QUANT_SERVICOS_DIA], tiposDeServicos *tiposServicos, int diaServico);
void exibeServicosPrestadosDiaEspecifico();
void exibeServicosIntervaloValor();
void exibeRelatorioGeral();
int verificaSeFoiCadastradoTodosOsServicos(tiposDeServicos *tiposServicos);
void tiposDeServicosJaCadastrados(tiposDeServicos *tiposServicos);
int verificaSePodeCadastrarServicoNoDia(int diaServico);
void consultarServicosPorDia(infoServicos servicos[][QUANT_SERVICOS_DIA]);
void consultaValorMinimoEMaximo(infoServicos servicos[][QUANT_SERVICOS_DIA]);
void exibeTodosOsServicosPrestados(infoServicos servicos[][QUANT_SERVICOS_DIA]);

int main(int argc, char const *argv[])
{
	int menu;
	int diaServico, outroDia;
	int codigoValido;

	// inicia o programa como se nenhum tipo de serviço e codigo foi cadastrado
	for (int i = 0; i < TIPO_SERVICO; i++)
	{
		tiposServicos[i].verif = 0;
		tiposServicos[i].codigo = 0;
	}

	// zera a variavel verif para que quando for cadastrar seja alterada para 1
	for (int i = 0; i < DIAS; i++)
	{
		for (int j = 0; j < QUANT_SERVICOS_DIA; j++)
		{
			servicos[i][j].verif = 0;
		}
	}

	do
	{
		visualizarMenu();
		scanf("%d", &menu);

		switch (menu)
		{
		case 1:

			if (verificaSeFoiCadastradoTodosOsServicos(tiposServicos) == 1)
			{
				cadastrarTiposServicos(tiposServicos);
			}
			else
			{
				printf("\nTodos os tipos de serviços foram cadastrados.\n");
			}
			break;

		case 2:

			do
			{
				tiposDeServicosJaCadastrados(tiposServicos); // printa na tela os serviços cadastrados
				printf("\n\nPreencher os dados do serviço considerando 30 dias no mês: \n");
				printf("\nInforme o dia: ");
				scanf("%d", &diaServico);

				if (verificaSePodeCadastrarServicoNoDia(diaServico) == 1)
				{
					cadastrarServicosPrestados(servicos, tiposServicos, diaServico);
					outroDia = 0;
				}
				else
				{
					printf("\nERRO! Todos os serviços que poderiam ser realizados no dia já foram cadastrados.\nTente outro dia.");
					printf("\nDeseja tentar cadastrar o serviço em outro dia?\n0 - Não | 1 - Sim\n--> ");
					scanf("%d", &outroDia);
				}

			} while (outroDia != 0);

			do
			{
				if (cadastrarServicosPrestadosParteII(servicos, tiposServicos, diaServico) == 1)
				{
					printf("\nCadastro realizado com sucesso!");
					codigoValido = 1;
				}
				else
				{
					printf("\nERRO! Nenhum código igual a esse foi cadastrado.\nTente outro válido.");
					codigoValido = 0;
				}

			} while (codigoValido == 0);

			break;

		case 3:

			consultarServicosPorDia(servicos);

			break;

		case 4:

			consultaValorMinimoEMaximo(servicos);

			break;

		case 5:

			exibeTodosOsServicosPrestados(servicos);

			break;

		case 6:
			printf("\nSaindo...\n");
			break;

		case 0:
			system("clear");
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
	printf("\n\t***MENU PRINCIPAL***\n0 - Limpar a tela");
	printf("\n1 - Cadastrar tipos de serviços\n2 - Cadastrar serviços prestados");
	printf("\n3 - Mostrar os serviços prestados em determinado dia");
	printf("\n4 - Mostrar os serviços prestados dentro de um intervalo de valor");
	printf("\n5 - Mostrar um relatorio geral\n6 - Sair\n--> ");
	return;
}

void cadastrarTiposServicos(tiposDeServicos *tiposServicos) // corrigir o bug que o segundo
{																														// codigo cadastrado não é
	int codigo;																								// verificado corretamente
	char descricao[CARACTERES_DESCRICAO];
	int prossiga = 0;

	for (int i = 0; i < TIPO_SERVICO; i++)
	{
		if (tiposServicos[i].codigo == 0)
		{
			do
			{
				printf("\nCadastrar tipos de serviços: ");
				printf("\nInforme os dados: ");
				printf("\nCodigo: ");
				scanf("%d", &codigo);

				for (int j = 0; j < TIPO_SERVICO; j++) // verifica se o codigo ja voi cadastrado
				{
					if (tiposServicos[j].codigo == codigo)
					{
						printf("\nERRO! O codigo inserido já é usado.\nTente outro.\n");
						prossiga = 0;
						break;
					}
					else
					{
						prossiga = 1;
						break;
					}
				}

			} while (prossiga == 0);

			printf("\nDescrição: ");
			setbuf(stdin, NULL);
			scanf("%[a-z A-Z]s", descricao);

			// pega os dados recebidos e os transferem para a struct
			tiposServicos[i].codigo = codigo;
			strcpy(tiposServicos[i].descricao, descricao);
			tiposServicos[i].verif = 1;
			break;
		}
	}
	return;
}

void cadastrarServicosPrestados(infoServicos servicos[][QUANT_SERVICOS_DIA], tiposDeServicos *tiposServicos, int diaServico)
{
	int numServico;
	float valorServico;
	int codigoServico;
	int codigoCliente;

	printf("\nNumero: ");
	scanf("%d", &numServico);
	printf("\nValor: R$");
	scanf("%f", &valorServico);
	printf("\nCodigo do serviço: ");
	scanf("%d", &codigoServico);
	printf("\nCodigo do cliente: ");
	scanf("%d", &codigoCliente);

	for (int i = 0; i < QUANT_SERVICOS_DIA; i++)
	{
		if (servicos[diaServico - 1][i].verif == 0)
		{
			servicos[diaServico - 1][i].numServico = numServico;
			servicos[diaServico - 1][i].valorServico = valorServico;
			servicos[diaServico - 1][i].codigoServico = codigoServico;
			servicos[diaServico - 1][i].codigoCliente = codigoCliente;
			servicos[diaServico - 1][i].verif = 1;
			break;
		}
	}
	return;
}

int cadastrarServicosPrestadosParteII(infoServicos servicos[][QUANT_SERVICOS_DIA], tiposDeServicos *tiposServicos, int diaServico) // recebe e verifica se o tipo de serviço que foi cadastrado
{																																																																	 // no serviço prestado já foi cadastrado
	int codigoTipoServico;

	printf("\nCodigo do tipo do serviço: ");
	scanf("%d", &codigoTipoServico);

	for (int i = 0; i < TIPO_SERVICO; i++)
	{
		if (tiposServicos[i].codigo == codigoTipoServico)
		{
			servicos[diaServico - 1][i].codigoTipoServico = codigoTipoServico;
			// servicos[diaServico][i].verif = 1;
			return 1;
		}
	}

	return 0;
}

int verificaSeFoiCadastradoTodosOsServicos(tiposDeServicos *tiposServicos)
{
	for (int i = 0; i < TIPO_SERVICO; i++)
	{
		if (tiposServicos[i].verif == 0)
		{
			return 1;
		}
	}
	return 0;
}

void tiposDeServicosJaCadastrados(tiposDeServicos *tiposServicos)
{
	printf("\nTipos de serviços cadastrados: \n");
	for (int i = 0; i < TIPO_SERVICO; i++)
	{
		if (tiposServicos[i].verif == 1)
		{
			printf("\n\tCodigo: %d", tiposServicos[i].codigo);
			printf("\n\tDescrição: %s", tiposServicos[i].descricao);
			printf("\n-----------------------------------------");
		}
	}
	return;
}

int verificaSePodeCadastrarServicoNoDia(int diaServico)
{
	for (int i = 0; i < QUANT_SERVICOS_DIA; i++)
	{
		if (servicos[diaServico - 1][i].verif == 0)
		{
			return 1;
		}
	}

	return 0;
}

void consultarServicosPorDia(infoServicos servicos[][QUANT_SERVICOS_DIA])
{
	int dia;

	printf("\nDeseja consultar os serviços de qual dia?\n--> ");
	scanf("%d", &dia);

	for (int i = 0; i < QUANT_SERVICOS_DIA; i++)
	{
		if (servicos[dia - 1][i].diaServico == 1)
		{
			printf("\n\tRelatorio do dia %d: ", dia);
			printf("\nNumero do serviço: %d", servicos[dia - 1][i].numServico);
			printf("\nValor do serviço: %.2f", servicos[dia - 1][i].valorServico);
			printf("\nCodigo do serviço: %d", servicos[dia - 1][i].codigoServico);
			printf("\nCodigo do cliente: %d", servicos[dia - 1][i].codigoCliente);
			printf("\nCodigo do tipo de serviço pretado: %d", servicos[dia - 1][i].codigoTipoServico);
			printf("\nDia que o serviço foi prestado: %d", servicos[dia - 1][i].diaServico);
			printf("\n-----------------------------------------------");
		}
	}
	return;
}

void consultaValorMinimoEMaximo(infoServicos servicos[][QUANT_SERVICOS_DIA])
{
	float valorMinimo, valorMaximo;

	printf("\nValor minimo a ser exibido: ");
	scanf("%f", &valorMinimo);
	printf("\nValor maximo a ser exibido: ");
	scanf("%f", &valorMaximo);

	for (int i = 0; i < DIAS; i++)
	{
		for (int j = 0; j < QUANT_SERVICOS_DIA; j++)
		{
			if (servicos[i][j].valorServico > valorMinimo && servicos[i][j].valorServico < valorMaximo)
			{
				if (servicos[i][j].verif == 1)
				{
					printf("\n\tRelatorio do dia %d: ", i + 1);
					printf("\nNumero do serviço: %d", servicos[i][j].numServico);
					printf("\nValor do serviço: %.2f", servicos[i][j].valorServico);
					printf("\nCodigo do serviço: %d", servicos[i][j].codigoServico);
					printf("\nCodigo do cliente: %d", servicos[i][j].codigoCliente);
					printf("\nCodigo do tipo de serviço pretado: %d", servicos[i][j].codigoTipoServico);
					printf("\nDia que o serviço foi prestado: %d", servicos[i][j].diaServico);
					printf("\n-----------------------------------------------");
				}
			}
		}
	}
	return;
}

void exibeTodosOsServicosPrestados(infoServicos servicos[][QUANT_SERVICOS_DIA])
{
	for (int i = 0; i < DIAS; i++)
	{
		for (int j = 0; j < QUANT_SERVICOS_DIA; j++)
		{
			if (servicos[i][j].verif == 1)
			{
				printf("\n\tRelatorio do dia %d: ", i + 1);
				printf("\nNumero do serviço: %d", servicos[i][j].numServico);
				printf("\nValor do serviço: %.2f", servicos[i][j].valorServico);
				printf("\nCodigo do serviço: %d", servicos[i][j].codigoServico);
				printf("\nCodigo do cliente: %d", servicos[i][j].codigoCliente);
				printf("\nCodigo do tipo de serviço pretado: %d", servicos[i][j].codigoTipoServico);
				printf("\nDia que o serviço foi prestado: %d", servicos[i][j].diaServico);
				printf("\n-----------------------------------------------");
			}
		}
	}

	return;
}