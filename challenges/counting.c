#include <stdio.h>
#include <stdlib.h>

int stringLength(const char *string);

int main()
{
  printf("%d", stringLength("TEST")); 
  return 0;
}

int stringLength(const char *string) //アドレス渡し（TEST の頭文字 T だけ渡す）
{
  const char *address = string;  //ポインタ変数にアドレス代入
  printf("*address: %d\n", *address); //’T’の値（ASCII = 10進数->84 16進数->54）
  
  while(*address) 
    ++address; // address 1 -> T, 2-> E, 3-> S...

  return address - string; // ex.2000 - 1996
}

// *value = アドレス(int func(const char *value))
// *value = 実際の値(destructuring)
// value = アドレス(plain)