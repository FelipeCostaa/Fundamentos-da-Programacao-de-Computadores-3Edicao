/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex23, resolvido*/

#include <stdio.h>
#include <stdlib.h>

#define tam1 24

int main(int argc, char **argv)
{
  int poltronaJanela[tam1], poltronaCorredor[tam1], poltronaEscolhida;
  int disponibilidade; // 0 = desocupada e 1 = ocupada
  int i; // laço repetição
  int menu, subMenu;
  int verificacao;

  // laço que faz com que todas as poltronas estejam vazias
  for (i = 0; i < tam1; i++)
  {
    poltronaCorredor[i] = 0;
    poltronaJanela[i] = 0;
  }
  
  // menu
  do
  {
    menu = 0;
    subMenu = 0;
    // system("clear");
    printf("\n\n\nMENU\n1 - Vender passagens\n2 - Mostrar mapa de ocupação "
    "do onibus\n3 - Sair\n---> ");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
      system("clear");
      printf("\nMenu Venda de passagens: ");
      printf("\nDeseja ir no corredor(1) ou janela(2)?\n---> ");
      scanf("%d", &subMenu);
      printf("\nEm qual poltrona? (1 a 24)\n---> ");
      scanf("%d", &poltronaEscolhida);
      
      // verifica se existe algum assento vago
      // 0 = assento vago e 1 = todos os assentos ocupados
      verificacao = 1; 

      // verifica se o onibus está cheio 
      for (i = 0; i < tam1; i++)
      {
        if (poltronaCorredor[i] == 0 || poltronaJanela[i] == 0)
        {
          verificacao = 0;
        }
      }
      if (verificacao == 1)
      {
        printf("\nOnibus Lotado.");
        break;
      }
      
    switch (subMenu)
    {
    case 1:
    system("clear");
      if (poltronaCorredor[poltronaEscolhida - 1] == 0)
      {
        poltronaCorredor[poltronaEscolhida - 1] = 1;
        printf("\nVenda efetivada.");
      }
      else
      {
        printf("\nPoltrona ocupada.");
      }
      if (poltronaEscolhida > 24)
      {
        printf("\nERRO! Poltrona escolhida não existe.");
      }      
      break;

    case 2:
    system("clear");
      if (poltronaJanela[poltronaEscolhida - 1] == 0)
      {
        poltronaJanela[poltronaEscolhida - 1] = 1;
        printf("\nVenda efetivada.");
      }
      else
      {
        printf("\nPoltrona ocupada.");
      }
      if (poltronaEscolhida > 24)
      {
        printf("\nERRO! Poltrona escolhida não existe.");
      }
      break;
    
    default:
    system("clear");
    printf("\nERRO! Opção valida.");
      break;
    }        
      break;
    
    case 2:
    system("clear");
    printf("\nMenu Mapa de ocupação do onibus: ");

    // exibe as poltronas da janela e a diponibilidades
    printf("\nJanela: ");
    for (i = 0; i < tam1; i++)
    {
      if (poltronaJanela[i] == 0)
      {
        printf("\n\t%d. Poltrona Livre", i + 1);
      }
      else
      {
        printf("\n\t%d. Poltrona Ocupada", i + 1);
      }
    }

    // exibe as poltronas do corredor e a disponibilidade
    printf("\nCorredor: ");
    for (i = 0; i < tam1; i++)
    {
      if (poltronaCorredor[i] == 0)
      {
        printf("\n\t%d. Poltrona Livre", i + 1);
      }
      else
      {
        printf("\n\t%d. Poltrona Ocupada", i + 1);
      }
    }
      break;

    case 3:
    system("clear"); // limpa a tela no linux
    printf("\nSaindo...\n");
      break;
    
    default:
    system("clear");
    printf("\nERRO! Opção invalida\n");
      break;
    }
    // system("clear");
  } while (menu != 3);
  
  
  return (EXIT_SUCCESS);
}
