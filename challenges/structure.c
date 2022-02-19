#include <stdio.h>
#include <stdlib.h>

struct employee 
{
  char name[10];
  int date;
  float salary;
};

int main()
{
  struct employee emp = {"Mike", 10, 700.00};
  printf("%s / %d / %.2f", emp.name, emp.date, emp.salary);

  return 0;
}