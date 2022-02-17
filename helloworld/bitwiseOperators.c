#include <stdio.h>
#include <stdbool.h>



int main()
{
  unsigned int a = 60; // 0011 1100 - 32+16+8+4=60
  unsigned int b = 13; // 0000 1101 - 8+4+1=13
  int result = 0;

  // result = a & b; // 0000 1100 - 8+4=12
  // 0011 1100
  // 0000 1101
  // ---------
  // 0000 1100

  // result = a | b; // 0011 1101 - 32+16+8+4+1=61
  // 0011 1100
  // 0000 1101
  // ---------
  // 0011 1101

  // result = a ^ b; // 0011 0001 - 32+16+1=49
  // 0011 1100
  // 0000 1101
  // ---------
  // 0011 0001

  // result = ~a; // 1100 0011 - -32-16-8-4-1=-61
  // 1100 0011 -1 (reversed 0=true 1=false)

  // result = a << 2; // 1111 0000 - 128+64+32+16=240
  // 1111 0000 (move left 2)

  // result = a << 4; // 0011 1100 0000 - 492+246+128+64=960
  // 0011 1100 0000 (move left 4)

  // result = a >> 2; // 0000 1111 - 8+4+2+1=15
  // 0000 1111 (move right 2)

  // result = a >> 4; // 0000 0011 - 2+1=3
  // 0000 0011 (move right 4 & drop off overhanged numbers)
  printf("resutl is %d", result);

  return 0;
}