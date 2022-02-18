#include <stdio.h>
#include <stdlib.h>

int stringLength(const char string[]);

int main() 
{
  const char word1[] = "jason";
  const char word2[] = "ok";
  const char word3[] = "whatever";

  printf("%d %d %d\n", stringLength(word1), stringLength(word2), stringLength(word3));

  return 0;
}

int stringLength(const char string[])
{
  int count = 0;
  
  while(string[count] != '\0')
   ++count;

   return count;
}