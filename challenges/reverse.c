#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fp = NULL;

  int right = 0;
  int left = 0;

  fp = fopen("file.txt", "r");

  if (fp == NULL)
    return -1;

  fseek(fp, 0 ,SEEK_END);

  right = ftell(fp);

  while (left < right)
  {
    left++;
    fseek(fp, -left, SEEK_END);
    printf("%c", fgetc(fp));
  }

  fclose(fp);
  fp = NULL;

  return 0;
}