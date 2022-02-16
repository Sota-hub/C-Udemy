#include <stdio.h>
#include <stdbool.h>

int main()
{
  double width = 3.33;
  double height = 2.22;
  double perimeter = 0.0;
  double area = 0.0;

  perimeter = 2.0 * (width + height);
  area = width * height;

  printf("Perimeter is %lf\n", perimeter);
  printf("Area is %lf\n", area);

  return 0;
}