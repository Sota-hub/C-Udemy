#include <stdio.h>
#include <stdbool.h>



int main(int argc, char *argv[])
{
  int numberOfArguments = argc;
  char *arg1 = argv[0];
  char *arg2 = argv[1];

  printf("%d\n", numberOfArguments);
  printf("1 %s\n", arg1);
  printf("2 %s\n", arg2);

  return 0;
}