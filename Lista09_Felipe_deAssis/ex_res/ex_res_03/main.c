/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

// constates
#define CARACTERES 64
#define CARACTERES2 128
#define QUANT_CLIENTES 15
#define QUANT_DOCUMENTOS 30
#define ANO_ATUAL 2020

// structs
typedef struct clientes
{
	int codCliente;
	char nomeCliente[CARACTERES];
	int telefoneCliente;
	char enderecoClienteRua[CARACTERES2];
	int enderecoClienteNum;
	int verif;
} clientes;

typedef struct documentos
{
	int numDoc;
	int codCliente;
	int diaVencimento;
	int mesVencimento;
	int anoVencimento;
	int diaPagamento;
	int mesPagamento;
	int anoPagamento;
	float valor;
	float juros;
	int verif;
	// struct clientes dadosClientes;
} documentos;

// funções
void imprimeMenu();
int verificaSeCodigoClienteJaFoiCadastrado(clientes *structClientes, int codCliente);
int verificaSeTodosOsClientesJaForamCadastrados(clientes *structClientes);
int verificarSeCodigoDocumentoJaFoiCadastrado(documentos *structDocumentos, int numDoc);
int verificaSeTodosOsDocumentosJaForamCadastrados(documentos *structDocumentos);
int verificaSeClienteTemVinculoComAlgumDocumento(documentos *structDocumentos, int numClienteVerif);
int verificaPosicaoCliente(clientes *structClientes, int numClienteVerif);
int verificaPosicaoDocumento(documentos *structDocumentos, int numDoc);
int verificaPosicaoClienteDocumento(documentos *structDocumentos, int numClienteVerif);
int verificaValidacaoDaData(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2);

int main(int argc, char const *argv[])
{
	int menuPrincipal;
	int codCliente, prossigaCase1;					// usada na case 1
	int numDoc, prossigaCase2;							// usada na case 2 e 4
	int codClienteVerif;										// usada na case 2, 3, 5 e 7
	int cont = 0;														// usada na case 5
	int dia1, dia2, mes1, mes2, ano1, ano2; // usado na case 6
  int posicao;                            // usado na case 7

  // setlocale(LC_ALL, "Portuguese");
  // setlocale(LC_ALL, "pt_BR_utf8");

	// variaveis com estruturas
	clientes structClientes[QUANT_CLIENTES];
	documentos structDocumentos[QUANT_DOCUMENTOS];

	// zera todos os codigos e verif da structClientes
	for (int i = 0; i < QUANT_CLIENTES; i++)
	{
		structClientes[i].codCliente = 0;
		structClientes[i].verif = 0;
	}

	// zera todos os verif da structDocumentos
	for (int i = 0; i < QUANT_DOCUMENTOS; i++)
	{
		structDocumentos[i].numDoc = 0;
		structDocumentos[i].verif = 0;
	}

	do
	{
		imprimeMenu();
		scanf("%d", &menuPrincipal);

		switch (menuPrincipal)
		{
		case 1:

			do
			{
				if (verificaSeTodosOsClientesJaForamCadastrados(structClientes) == 1)
				{
					printf("\nCadastro de clientes: ");
					printf("\nCodigo do cliente: ");
					scanf("%d", &codCliente);

					if (verificaSeCodigoClienteJaFoiCadastrado(structClientes, codCliente) == 1)
					{
						printf("\nERRO! Codigo já cadastrado.\nTente outro.\n");
						prossigaCase1 = 0;
					}
					else
					{
						for (int i = 0; i < QUANT_CLIENTES; i++)
						{
							if (structClientes[i].verif == 0)
							{
								structClientes[i].codCliente = codCliente;
								printf("\nNome do cliente: ");
								setbuf(stdin, NULL);
								scanf("%[a-z A-Z]s", structClientes[i].nomeCliente);
								printf("\nTelefone do cliente: \nddd + digitos (sem espaços): ");
								scanf("%d", &structClientes[i].telefoneCliente);
								printf("\nEndereço (rua): ");
								setbuf(stdin, NULL);
								scanf("%[a-z A-Z]s", structClientes[i].enderecoClienteRua);
								printf("\nEndereço (numero): ");
								scanf("%d", &structClientes[i].enderecoClienteNum);

								printf("\nCadastro realizado com sucesso!\n");

								structClientes[i].verif = 1;

								prossigaCase1 = 1;
								break;
							}
						}
					}
				}
				else
				{
					printf("\nERRO! Quantidade maxima de clientes cadastrados atingido.\n");
					prossigaCase1 = 1;
				}

			} while (prossigaCase1 == 0);

			break;

		case 2:

			do
			{
				if (verificaSeTodosOsDocumentosJaForamCadastrados(structDocumentos) == 1)
				{
					printf("\nCadastro dos documentos: ");
					printf("\nNumero do documento: ");
					scanf("%d", &numDoc);

					if (verificarSeCodigoDocumentoJaFoiCadastrado(structDocumentos, numDoc) == 1)
					{
						printf("\nERRO! Numero do documento já cadastrado.\nTente outro.\n");
					}
					else
					{
						do
						{
							for (int i = 0; i < QUANT_DOCUMENTOS; i++)
							{
								if (structDocumentos[i].verif == 0)
								{

									printf("\nCodigo do cliente: ");
									scanf("%d", &codClienteVerif);

									if (verificaSeCodigoClienteJaFoiCadastrado(structClientes, codClienteVerif) == 1)
									{
										structDocumentos[i].numDoc = numDoc;
										structDocumentos[i].codCliente = codClienteVerif;
										do
										{
											printf("\nData de vencimento: ");
											printf("\nDia: ");
											scanf("%d", &structDocumentos[i].diaVencimento);
										} while (structDocumentos[i].diaVencimento > 30);
										do
										{
											printf("\nMês: ");
											scanf("%d", &structDocumentos[i].mesVencimento);
										} while (structDocumentos[i].mesVencimento > 12);
										do
										{
											printf("\nAno: ");
											scanf("%d", &structDocumentos[i].anoVencimento);
										} while (structDocumentos[i].anoVencimento < ANO_ATUAL);

										structDocumentos[i].verif = 1;

										printf("\nCadastro realizado com sucesso!\n");

										prossigaCase2 = 1;
									}
									else
									{
										printf("\nERRO! Codigo não cadastrado.\nTente outro.\n");
										prossigaCase2 = 0;
									}

									break;
								}
							}

						} while (prossigaCase2 == 0);
					}
				}
				else
				{
					printf("\nERRO! Quantidade maxima de documentos cadastrados atingido.\n");
					prossigaCase2 = 1;
				}

			} while (prossigaCase2 == 0);

			break;

		case 3:

			printf("\nInforme o codigo do cliente que vai ser excluido: ");
			scanf("%d", &codClienteVerif);

			if (verificaSeCodigoClienteJaFoiCadastrado(structClientes, codClienteVerif) == 1)
			{
				if (verificaSeClienteTemVinculoComAlgumDocumento(structDocumentos, codClienteVerif) == 1)
				{
					printf("\nO cliente não pode ser excluido.\nExiste algum documento vinculado a ele.\n");
				}
				else
				{
					for (int i = verificaPosicaoCliente(structClientes, codClienteVerif); i < QUANT_CLIENTES - 1; i++)
					{
						structClientes[i].codCliente = structClientes[i + 1].codCliente;
						strcpy(structClientes[i].nomeCliente, structClientes[i + 1].nomeCliente);
						structClientes[i].telefoneCliente = structClientes[i + 1].telefoneCliente;
						strcpy(structClientes[i].enderecoClienteRua, structClientes[i + 1].enderecoClienteRua);
						structClientes[i].enderecoClienteNum = structClientes[i + 1].enderecoClienteNum;
						structClientes[i].verif = 1;
					}

					structClientes[QUANT_CLIENTES - 1].verif = 0;
					printf("\nCliente excluido com sucesso!\n");
				}
			}
			else
			{
				printf("\nERRO! Codigo não cadastrado.\nTente outro.\n");
			}

			break;

		case 4:

			printf("\nInforme o numero do documento que deseja excluir: ");
			scanf("%d", &numDoc);

			if (verificarSeCodigoDocumentoJaFoiCadastrado(structDocumentos, numDoc) == 1)
			{
				for (int i = verificaPosicaoDocumento(structDocumentos, numDoc); i < QUANT_DOCUMENTOS; i++)
				{
					structDocumentos[i].numDoc = structDocumentos[i + 1].numDoc;
					structDocumentos[i].codCliente = structDocumentos[i + 1].codCliente;
					structDocumentos[i].diaVencimento = structDocumentos[i + 1].diaVencimento;
					structDocumentos[i].mesVencimento = structDocumentos[i + 1].mesVencimento;
					structDocumentos[i].anoVencimento = structDocumentos[i + 1].anoVencimento;
					structDocumentos[i].diaPagamento = structDocumentos[i + 1].diaPagamento;
					structDocumentos[i].mesPagamento = structDocumentos[i + 1].mesPagamento;
					structDocumentos[i].anoPagamento = structDocumentos[i + 1].anoPagamento;
					structDocumentos[i].valor = structDocumentos[i + 1].valor;
					structDocumentos[i].juros = structDocumentos[i + 1].juros;
					structDocumentos[i].verif = 1;
				}

				structDocumentos[QUANT_DOCUMENTOS - 1].verif = 0;
				printf("\nDocumento excluido com sucesso!");
			}
			else
			{
				printf("\nERRO! Documento não encontrado.\n");
			}

			break;

		case 5:

			printf("\nInforme o codigo do cliente do qual deseja excluir os documentos: ");
			scanf("%d", &codClienteVerif);

			if (verificaSeClienteTemVinculoComAlgumDocumento(structDocumentos, codClienteVerif) == 0)
			{
				printf("\nERRO! Codigo do cliente não encontrado.\n");
			}
			while (verificaSeClienteTemVinculoComAlgumDocumento(structDocumentos, codClienteVerif) == 1)
			{
				for (int i = verificaPosicaoClienteDocumento(structDocumentos, codClienteVerif); i < QUANT_DOCUMENTOS; i++)
				{
					structDocumentos[i].numDoc = structDocumentos[i + 1].numDoc;
					structDocumentos[i].codCliente = structDocumentos[i + 1].codCliente;
					structDocumentos[i].diaVencimento = structDocumentos[i + 1].diaVencimento;
					structDocumentos[i].mesVencimento = structDocumentos[i + 1].mesVencimento;
					structDocumentos[i].anoVencimento = structDocumentos[i + 1].anoVencimento;
					structDocumentos[i].diaPagamento = structDocumentos[i + 1].diaPagamento;
					structDocumentos[i].mesPagamento = structDocumentos[i + 1].mesPagamento;
					structDocumentos[i].anoPagamento = structDocumentos[i + 1].anoPagamento;
					structDocumentos[i].valor = structDocumentos[i + 1].valor;
					structDocumentos[i].juros = structDocumentos[i + 1].juros;
					structDocumentos[i].verif = 1;
					cont++;
				}
			}

			for (int i = QUANT_DOCUMENTOS - (cont + 1); i < QUANT_DOCUMENTOS; i++)
			{
				structDocumentos[i].verif = 0;
			}

			break;

		case 6:

      printf("\nTEM DE SER TERMINADO\n");
			printf("\nInforme o intervalo de datas na qual deseja excluir os documentos: ");
			printf("\nData inicial: ");
			do
			{
				printf("\nDia: ");
				scanf("%d", &dia1);
			} while (dia1 > 30);
			do
			{
				printf("\nMês: ");
				scanf("%d", &mes1);
			} while (mes1 > 12);
			do
			{
				printf("\nAno: ");
				scanf("%d", &ano1);
			} while (ano1 > ANO_ATUAL);

			printf("\nData final: ");
			do
			{
				printf("\nDia: ");
				scanf("%d", &dia2);
			} while (dia2 > 30);
			do
			{
				printf("\nMês: ");
				scanf("%d", &mes2);
			} while (mes2 > 12);
			do
			{
				printf("\nAno: ");
				scanf("%d", &ano2);
			} while (ano2 < ano1);

			if (verificaValidacaoDaData(dia1, mes1, ano1, dia2, mes2, ano2) == 0)
			{
				printf("\nERRO! Data invalida.\nTente outra.\n");
			}
			else
			{
				for (int i = 0; i < QUANT_DOCUMENTOS; i++)
				{
				}
			}

			break;

		case 7:

      printf("\nAlterar dados: \nCodigo do cliente: ");
      scanf("%d", &codClienteVerif);

      if (verificaSeCodigoClienteJaFoiCadastrado(structClientes, codClienteVerif) == 1)
      {
        posicao = verificaPosicaoCliente(structClientes, codClienteVerif);

        printf("\nNome do cliente: ");
        setbuf(stdin, NULL);
        scanf("%[a-z A-Z]s", structClientes[posicao].nomeCliente);
        printf("\nTelefone do cliente: \nddd + digitos (sem espaços): ");
        scanf("%d", &structClientes[posicao].telefoneCliente);
        printf("\nEndereço (rua): ");
        setbuf(stdin, NULL);
        scanf("%[a-z A-Z]s", structClientes[posicao].enderecoClienteRua);
        printf("\nEndereço (numero): ");
        scanf("%d", &structClientes[posicao].enderecoClienteNum);

        printf("\nDados alterados com sucesso!\n");
      }
      else
      {
				printf("\nERRO! Codigo não cadastrado.\nTente outro.\n");
      }

			break;

		case 8:

			break;

		case 9:
      printf("\nSaindo...\n");
			break;

		case 0:
			system("clear");
			break;

		default:
			printf("\nERRO! Opção informada é invalida.\nTente outra\n");
			break;
		}
	} while (menuPrincipal != 9);

	return 0;
}

void imprimeMenu()
{
	printf("\n\t***Menu Principal***\n0 - Limpar a tela");
	printf("\n1 - Cadastrar clientes\n2 - Cadastrar Documentos\n3 - Excluir clientes");
	printf("\n4 - Excluir documentos individuais\n5 - Excluir documentos por cliente");
	printf("\n6 - Excluir documentos por periodo\n7 - Alterar as informações sobre os clientes");
	printf("\n8 - Mostrar o total de documentos de determinado cliente\n9 - Sair\n--> ");

	return;
}

int verificaSeCodigoClienteJaFoiCadastrado(clientes *structClientes, int codCliente)
{
	for (int i = 0; i < QUANT_CLIENTES; i++)
	{
		if (codCliente == structClientes[i].codCliente)
		{
			return 1;
		}
	}
	return 0;
}

int verificaSeTodosOsClientesJaForamCadastrados(clientes *structClientes)
{
	for (int i = 0; i < QUANT_CLIENTES; i++) // se o retorno for 1 quer dizer que
	{																				 // ainda se pode cadastrar mais algum cliente
		if (structClientes[i].verif == 0)
		{
			return 1;
		}
	}
	return 0;
}

int verificarSeCodigoDocumentoJaFoiCadastrado(documentos *structDocumentos, int numDoc)
{
	for (int i = 0; i < QUANT_DOCUMENTOS; i++)
	{
		if (structDocumentos[i].numDoc == numDoc)
		{
			return 1;
		}
	}
	return 0;
}

int verificaSeTodosOsDocumentosJaForamCadastrados(documentos *structDocumentos)
{
	for (int i = 0; i < QUANT_DOCUMENTOS; i++) // se o retorno for 1 quer dizer que ainda
	{																					 // se pode cadastrar mais algum documento
		if (structDocumentos[i].verif == 0)
		{
			return 1;
		}
	}
	return 0;
}

int verificaSeClienteTemVinculoComAlgumDocumento(documentos *structDocumentos, int numClienteVerif)
{
	for (int i = 0; i < QUANT_DOCUMENTOS; i++)
	{
		if (structDocumentos[i].codCliente == numClienteVerif)
		{
			return 1;
		}
	}
	return 0;
}

int verificaPosicaoCliente(clientes *structClientes, int numClienteVerif)
{
	for (int i = 0; i < QUANT_CLIENTES; i++)
	{
		if (structClientes[i].codCliente == numClienteVerif)
		{
			return i;
		}
	}
}

int verificaPosicaoDocumento(documentos *structDocumentos, int numDoc)
{
	for (int i = 0; i < QUANT_DOCUMENTOS; i++)
	{
		if (structDocumentos[i].numDoc == numDoc)
		{
			return i;
		}
	}
}

int verificaPosicaoClienteDocumento(documentos *structDocumentos, int numClienteVerif)
{
	for (int i = 0; i < QUANT_DOCUMENTOS; i++)
	{
		if (structDocumentos[i].codCliente == numClienteVerif)
		{
			return i;
		}
	}
}

int verificaValidacaoDaData(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2)
{
	if (ano1 > ano2)
	{
		return 0;
	}
	if (mes1 > mes2)
	{
		return 0;
	}
	if (dia1 > dia2)
	{
		return 0;
	}
	if (dia1 == dia2)
	{
		return 0;
	}

	return 1;
}
