#include <stdio.h>
#include <stdbool.h>

int main()
{
  int minutes = 0;
  double years = 0.0;
  int days =0;
  double minutesInYear = 0.0;

  printf("Please innput minutes");
  scanf("%d", &minutes);

  minutesInYear = (60 * 24 * 365);

  years = (minutes / minutesInYear);
  days = (int)((minutes / 60.0) / 24.0);

  printf("%d minutes is approximately %lf years and %d days\n", minutes, years, days );

  return 0;
}