#include <stdio.h>
#include <stdlib.h>

struct item 
{
  char *itemName;
  int quantity;
  float price;
  float amount;
};

void readItem(struct item *i);
void printItem(struct item *i);

int main()
{
  struct item item1;
  struct item *pItem;

  pItem = &item1;
  pItem->itemName = (char*) calloc(20,sizeof(char));

  if (pItem == NULL)
    return 0;

  readItem(pItem);
  printItem(pItem);

  free(pItem->itemName);

  return 0;
}

void readItem(struct item *i)
{
  printf("Enter product name: ");
  scanf("%s", i->itemName);

  printf("Enter price: ");
  scanf("%f", &i->price);

  printf("Enter quantity: ");
  scanf("%d", &i->quantity);

  i->amount = (float)i->quantity * i->price;

}

void printItem(struct item *i)
{
  printf("itemName: %s\n", i->itemName);
  printf("price: %.2f\n", i->price);
  printf("quantity: %d\n", i->quantity);
  printf("amount: %.2f\n", i->amount);
}