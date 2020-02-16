/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex22, resolvido*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM1 3

int main(int argc, char const *argv[])
{
	int conta[TAM1], contaVerif, posicaoConta;
  float saldo[TAM1], deposito, saque, ativoBancario;
  int i, j; //usado nas estruturas de repetição
  int verificacao; // 0 ou 1
  int menu;

  printf("\n\tControle Bancario\n\n");

  // cadastro das contas
  for (i = 0; i < TAM1; i++) 
  {
    printf("\n\tConta 0%d", i + 1);
    do
    {
    printf("\nInforme o numero da conta: ");
    scanf("%d", &conta[i]);
    verificacao = 0;

    // laço que verifica se o codigo informado já existe 
    for (j = 0; j < TAM1; j++)
    {
      if (conta[i] == conta[j])
      {
        verificacao++;
      }   
    }
    if (verificacao > 1)
    {
      printf("\nERRO! Codigo de conta já existente.\nTente outro.\n");
    }

    } while (verificacao != 1);

    printf("\nInfome o saldo: R$");
    scanf("%f", &saldo[i]);
    printf("-------------------------------");
  }

  // menu 
  do
  {
    menu = 0;
    // system("clear");
    printf("\n\nMENU: \n1 - Efetuar Deposito\n2 - Efetuar Saque\n3 - Consultar "
    "o ativo bancario\n4 - Sair\n--> ");
    scanf("%d", &menu);

    switch (menu)
    {
    // 01 = para efetuar depósito, deve-se solicitar o código da conta e o valor a ser depositado. Se a conta não
    // estiver cadastrada, deverá aparecer a mensagem Conta não encontrada e voltar ao menu. Se a conta
    // existir, atualizar seu saldo
    case 1:
      system("clear"); //limpar tela no linux
      printf("\nMenu Efetuar Deposito");
      printf("\nInforme o numero da conta: ");
      scanf("%d", &contaVerif);
      
      verificacao = 0;

      for (i = 0; i < TAM1; i++)
      {
        posicaoConta = 0;
        if (contaVerif == conta[i])
        {
          posicaoConta = i;
          verificacao++;
        }
      }
      if (verificacao == 1)
      {
        printf("\nSaldo atual da conta antes do deposito: R$%.2f\n", saldo[posicaoConta]);
        printf("\nQual o valor do deposito: R$");
        scanf("%f", &deposito);
        saldo[posicaoConta] += deposito;
        printf("\nSaldo da conta apos o deposito: R$%.2f", saldo[posicaoConta]);
      }
      else
      {
        printf("\nERRO! Conta não cadastrada.");
      }      
      break;

    // para efetuar saque, deve-se solicitar o código da conta e o valor a ser sacado. Se a conta não esti-
    // ver cadastrada, deverá aparecer a mensagem Conta não encontrada e voltar ao menu. Se a conta
    // existir, verificar se o seu saldo é suficiente para cobrir o saque. (Estamos supondo que a conta não
    // possa ficar com o saldo negativo.) Se o saldo for suficiente, realizar o saque e voltar ao menu. Caso
    // contrário, mostrar a mensagem Saldo insuficiente e voltar ao menu;
    case 2:
      system("clear"); //limpar tela no linux
      printf("\nMenu Efetuar Saque");
      printf("\nInforme o numero da conta: ");
      scanf("%d", &contaVerif);

      verificacao = 0;

      for (i = 0; i < TAM1; i++)
      {
        posicaoConta = 0;
        if (contaVerif == conta[i])
        {
          posicaoConta = i;
          verificacao++;
        }
      }
      if (verificacao == 1)
      {
        printf("\nSaldo da conta antes do saque: R$%.2f\n", saldo[posicaoConta]);
        printf("\nQual o valor do saque: R$");
        scanf("%f", &saque);
        if (saldo[posicaoConta] < saque)
        {
          printf("\nERRO! Valor de saque maior do que o valor atual da conta.");
        }
        else
        {
          if (saldo[posicaoConta] > saque)
          {
            saldo[posicaoConta] -= saque; 
          printf("\nSaldo da conta apos o saque: R$%.2f", saldo[posicaoConta]);
          }
          else
          {
            printf("\nERRO! Saldo da conta menor que o valor do saque.");
          }        
        }        
      }
      else
      {
        printf("\nERRO! Conta não cadastrada.");
      }
      break;

    // para consultar o ativo bancário, deve-se somar o saldo de todas as contas do banco. Depois de
    // mostrar esse valor, voltar ao menu;
    case 3:
      system("clear"); //limpar tela no linux
      printf("\nMenu Consultar Ativo Bancario");
      ativoBancario = 0;
      for (i = 0; i < TAM1; i++)
      {
        ativoBancario += saldo[i];
      }
      printf("\nO ativo bancario é de: R$%.2f", ativoBancario);
      break;

    case 4:
      system("clear"); //limpar tela no linux
      printf("\nSaindo...\n");
      break;

    default: 
    system("clear"); //limpar tela no linux
    printf("\nCodigo Invalido!\n");
      break;
    }
  } while (menu != 4);
  

	return 0;
}
