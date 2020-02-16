/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex20, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int menu, peso1, peso2;
  float nota1, nota2, media;

  while (menu <= 2)
  {
    menu = 0;

    printf("\n\n\t**MENU**");
    printf("\n\t1- Media Aritmetica");
    printf("\n\t2- Media Ponderada");
    printf("\n\t3- Sair");
    printf("\n\tO que deseja fazer: ");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
      printf("\nMedia Aritmetica");
      printf("\nInforme a primeira nota: ");
      scanf("%f", &nota1);
      printf("\nInforme a segunda nota: ");
      scanf("%f", &nota2);
      media = (nota1 + nota2) / 2;
      printf("\n\tA media das notas é %.2f", media);
      break;
    case 2:
      printf("\nMedia Ponderada");
      printf("\nInforme a primeiro nota: ");
      scanf("%f", &nota1);
      printf("\nPeso da primeira nota: ");
      scanf("%d", &peso1);
      printf("\nInforme a segunda nota: ");
      scanf("%f", &nota2);
      printf("\nPeso da segunda nota: ");
      scanf("%d", &peso2);
      media = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);
      printf("\n\tA media ponderada das notas é %.2f", media);
      break;
    case 3:
      printf("\n\tSaindo");
      break;
    default:
      printf("\n\tOPÇÃO INVALIDA");
      break;
    }
  }

  return (EXIT_SUCCESS);
}