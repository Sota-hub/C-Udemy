#include <stdio.h>
#include <stdlib.h>

int stringLength(const char *string);

int main()
{
  printf("%d", stringLength("TEST"));
  return 0;
}

int stringLength(const char *string) 
{
  const char *address = string;

  while(*address)
    ++address;

  return address - string;
}
