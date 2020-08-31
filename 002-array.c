// Exercise from https://www.learn-c.org/
// gcc -Wall 02-array.c -o 002-array.out && ./002-array.out

#include <stdio.h>

int main() {

  float average;
  int grades[2];
  grades[0] = 80;
  grades[1] = 83;
  average = (grades[0] + grades[1]) / 2.0;
  printf("The average is: %f\n", average);

  return 0;
}
