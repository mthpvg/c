// Exercise from https://www.learn-c.org/
// gcc -Wall 008-functions.c -o 008-functions.out && ./008-functions.out

#include <stdio.h>
// printf

void print_big(int n);

int main() {

  int i = 0;
  int array[] = { 1, 11, 2, 22, 3, 33 };

  while (i < 5) {
    i += 1;
    print_big(array[i]);
  }
  
  return 0;
}

void print_big(int n) {
  if (n > 10) printf("%d is big\n", n);
}
