// Exercise from https://www.learn-c.org/
// gcc -Wall 007-while-loops.c -o 007-while-loops.out && ./007-while-loops.out

#include <stdio.h>
// printf


int main() {

  int n = -1;
  int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};

  while (n < 10) {
    n += 1;
    if (array[n] < 5) continue;
    if (array[n] > 10) break;
    printf("%d\n", array[n]);
  }
  
  return 0;
}
