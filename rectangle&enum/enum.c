#include <stdio.h>
#include <stdbool.h>

int main () 
{
  enum company {GOOGLE, FACEBOOK, MICROSOFT, XEROX, YAHOO};

  enum company google  = GOOGLE;
  enum company microsoft  = MICROSOFT;
  enum company yahoo  = YAHOO;

  printf("%d\n", google);
  printf("%d\n", microsoft);
  printf("%d\n", yahoo);


  return 0;
}