#include <stdio.h>
#include <stdlib.h>

void square (int *x);

int main() 
{
  int num = 9;

  square(&num);
  printf("%d\n", num);

  return 0;
}

void square (int *const x)
{
  *x = (*x) * (*x);
}