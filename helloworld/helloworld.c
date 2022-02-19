#include <stdio.h>

int main()
{
  FILE *fp;
  int c;
  char str[61];

  fp = fopen("file.txt", "r");
  
  if (fp == NULL)
  {
    perror("Error in opeing file");
    return 0;
  }

  if(fgets (str, 60, fp) != NULL);
    printf("%s", str);

  fclose(fp);
  fp = NULL;

  return 0;
}