/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex21, resolvido*/

#include <stdio.h>
#include <stdlib.h>

#define tam1 15
#define tam2 5

int main(int argc, char **argv)
{
  int vetorPrincipal[tam1], vetorPar[tam2], vetorImpar[tam2];
  int i, j;
  int contPar, contImpar;
  int posicaoPar, posicaoImpar;

  printf("\nInforme os numeros: ");
  for (i = 0; i < tam1; i++)
  {
    printf("\n%dº numero: ", i + 1);
    scanf("%d", &vetorPrincipal[i]);
  }
  
  printf("\nNumeros informados: \n");
  for (i = 0; i < tam1; i++)
  {
    printf("%d - ", vetorPrincipal[i]);
  }

  // for (i = 0; i < tam2; i++) // apagar depois, estava zerando os vetores para testes
  // {
  //   vetorPar[i] = 0;
  //   vetorImpar[i] = 0;
  // }
  
  posicaoPar = 0;
  posicaoImpar = 0;

  for (i = 0; i < tam1; i++)
  {
    if (vetorPrincipal[i]%2 == 0)
    {
      vetorPar[posicaoPar] = vetorPrincipal[i];
      contPar++;
      if (contPar == tam2)
      {
        printf("\nNumeros pares: ");
        for (j = 0; j < tam2; j++)
        {
          printf("%d - ", vetorPar[j]);
        }
        contPar = 0;
        posicaoPar = 0;
      }
      posicaoPar++;
    }

    if (vetorPrincipal[i]%2 == 1)
    {
      vetorImpar[posicaoImpar] = vetorPrincipal[i];
      contImpar++;
      if (contImpar == tam2)
      {
        printf("\nNumeros impares: ");
        for (j = 0; j < tam2; j++)
        {
          printf("%d - ", vetorImpar[j]);
        }
        contImpar = 0;
        posicaoImpar = 0;
      } 
      posicaoImpar++; 
    }    
  }
  
  printf("\nRestante numeros pares: ");
  for (i = 0; i < contPar; i++)
  {
    printf("%d - ", vetorPar[i]);
  }
  printf("\nRestante numeros impares: "); 
  for (i = 0; i < contImpar; i++)
  {
    printf("%d - ", vetorImpar[i]);
  }

  return (EXIT_SUCCESS);
}
