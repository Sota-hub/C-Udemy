#include <stdio.h>
#include <stdbool.h>

int main()
{
  printf("char %u bytes\n", sizeof(char));
  printf("short %u bytes\n", sizeof(short));
  printf("int %u bytes\n", sizeof(int));
  printf("float %u bytes\n", sizeof(float));
  printf("double %u bytes\n", sizeof(double));
  printf("long %u bytes\n", sizeof(long));
  printf("long long %u bytes\n", sizeof(long long));
  printf("long double %u bytes\n", sizeof(long double));

  return 0;
}