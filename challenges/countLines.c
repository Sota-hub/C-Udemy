#include <stdio.h>

int  main()
{
  FILE *fp = NULL;
  char ch;
  int lines = 0;

  fp = fopen("file.txt", "r");

  if (fp == NULL) {
    printf("No File...");
    return -1;
  }

  while((ch=fgetc(fp)) != EOF)
  {
    if (ch == '\n')
      lines++;
  }

  fclose(fp);
  fp = NULL;

  printf("%d Lines", ++lines);

  return 0;
}