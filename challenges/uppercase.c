#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
  FILE *fp = NULL;
  FILE *fp2 = NULL;
  int ch;

  fp = fopen("file.txt", "r");
  fp2 = fopen("file2.txt", "w");

  if (fp == NULL) {
    printf("Lack of file1...");
    return -1;
  }

  if (fp2 == NULL) {
    printf("Lack of file2...");
    return -1;
  }

  while((ch = fgetc(fp)) != EOF)
  {
    if(islower(ch)) {
      ch -= 32;
    }

    fputc(ch, fp2);
  }

  fclose(fp);
  fclose(fp2);
  fp = NULL;
  fp2 = NULL;

  return 0;
}