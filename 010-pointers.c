// Exercise from https://www.learn-c.org/
// gcc -Wall 010-pointers.c -o 010-pointers.out && ./010-pointers.out

#include <stdio.h>


int main() {

  int n = 10;

  int * pointer_to_n = &n;
  *pointer_to_n += 1;

  /* testing code */
  if (pointer_to_n != &n) return 1;
  if (*pointer_to_n != 11) return 1;

  printf("Done!\n");

  return 0;
}
