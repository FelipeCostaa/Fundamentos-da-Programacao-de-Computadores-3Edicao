#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int num = 101, cont = 0;

  for (int i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      cont++;
      printf("\nCont é igual a %d.", cont);
    }
  }
  if (cont == 2)
  {
    printf("\n%d é numero primo.", num);
  }
  else
  {
    printf("\n%d não é primo.", num);
  }

  return 0;
}