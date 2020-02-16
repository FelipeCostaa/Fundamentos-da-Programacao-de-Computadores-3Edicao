/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex9, resolvido*/

#include <stdio.h>
#include <stdlib.h>

#define tam 4

int main(int argc, char **argv)
{
  int menu, subMenu, voo[tam], numVoo, qtdLugares[tam], origem[tam], local, destino[tam], i;

  //recebe informações sobre o voo
  for (i = 0; i < tam; i++)
  {
    printf("\nInformações sobre o voo: ");
    printf("\nNumero do voo: ");
    scanf("%d", &voo[i]);
    printf("\nOrigem: ");
    scanf("%d", &origem[i]);
    printf("\nDestino: ");
    scanf("%d", &destino[i]);
    printf("\nQuantidade de lugares: ");
    scanf("%d", &qtdLugares[i]);
  }

  while (menu != 3)
  {
    menu = 0;
    printf("\n\tMENU: ");
    printf("\n\t1 - CONSULTAR");
    printf("\n\t2 - EFETUAR RESERVA");
    printf("\n\t3 - SAIR");
    printf("\n\tOpção desejada: ");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
      //consultar
      subMenu = 0;
      printf("\n\tMENU CONSULTA: ");
      printf("\n\t1 - POR NÚMERO DO VOO");
      printf("\n\t2 - POR ORIGEM");
      printf("\n\t3 - POR DESTINO");
      printf("\n\tOpção desejada: ");
      scanf("%d", &subMenu);

      while (subMenu < 4)
      {
        switch (subMenu)
        {
        case 1:
          printf("\nInforme o numero do voo: ");
          scanf("%d", &numVoo);
          i = 1;
          while (i <= tam && voo[i] != numVoo)
          {
            i = i + 1;
          }
          if (i > 12)
          {
            printf("\n\tVoo Inexistente.");
          }
          else
          {
            printf("\n\tNumero do voo: %d", voo[i]);
            printf("\n\tLocal de origem: %d", origem[i]);
            printf("\n\tLocal de destino: %d", destino[i]);
            printf("\n\tLugares diponiveis: %d", qtdLugares[i]);
          }
          break;
        case 2:
          printf("\nInforme o local de origem: ");
          scanf("%d", &local);
          for (i = 0; i < tam; i++)
          {
            if (local = origem[i])
            {
              printf("\n\tNumero do voo: %d", voo[i]);
              printf("\n\tLocal de origem: %d", origem[i]);
              printf("\n\tLocal de destino: %d", destino[i]);
              printf("\n\tLugares diponiveis: %d", qtdLugares[i]);
            }
          }
          break;
        case 3:
          printf("\nInforme o local de destino: ");
          scanf("%d", &local);
          for (i = 0; i < tam; i++)
          {
            if (local = destino[i])
            {
              printf("\n\tNumero do voo: %d", voo[i]);
              printf("\n\tLocal de origem: %d", origem[i]);
              printf("\n\tLocal de destino: %d", destino[i]);
              printf("\n\tLugares diponiveis: %d", qtdLugares[i]);
            }
          }
          break;
        default:
          printf("\n\tOPÇÃO INVALIDA");
          break;
        }
      }
      break;
    case 2:
      //efetuar reserva
      printf("\n\tMENU EFETUAR RESERVA: ");
      printf("\n\tQual o numero  do voo que deseja viajar: ");
      scanf("%d", &numVoo);
      i = 1;
      while (i <= 12 && voo[i] != numVoo)
      {
        i = i + 1;
      }
      if (i > 12)
      {
        printf("\n\tNumero de voo não encontrado.");
      }
      else
      {
        if (qtdLugares[i] = 0)
        {
          printf("\n\tVoo lotado");
        }
        else
        {
          qtdLugares[i] = qtdLugares[i] - 1;
          printf("\n\tReserva Confirmada");
        }
      }

      break;
    case 3:
      //sair
      printf("\n\tSAINDO");
      break;
    default:
      printf("\n\tOPÇÃO INVALIDA");
      break;
    }
  }

  return (EXIT_SUCCESS);
}
