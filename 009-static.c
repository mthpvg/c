// Exercise from https://www.learn-c.org/
// gcc -Wall 009-static.c -o 009-static.out && ./009-static.out

// By default, functions are global in C. If we declare a function with static, the scope of that function is reduced to the file containing it.

#include <stdio.h>
// printf

int sum (int num) {
  // Variables can be declared as static to increase their scope up to the file containing them.
  static int total = 0;
  total += num;
  return total;
}

int main() {
  printf("%d ",sum(55));
  printf("%d ",sum(45));
  printf("%d ",sum(50));
  printf("\n");
  return 0;
}
