// Exercise from https://www.learn-c.org/
// gcc -Wall 006-for-loops.c -o 006-for-loops.out && ./006-for-loops.out

#include <stdio.h>
// printf


int main() {

  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int factorial = 1;
  int i;

  for (i = 0; i < 10; i++) {
    factorial *= array[i];
  }
  
  printf("Factorial 10 is: %d\n", factorial);

  return 0;
}
