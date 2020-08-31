// Exercise from https://www.learn-c.org/
// gcc -Wall 03-matrix.c -o 003-matrix.out && ./003-matrix.out

#include <stdio.h>

int main() {

  int grades[2][2] = {
    {2, 3},
    {3, 4}
  };

  for (int i = 0; i < 2; i++) {
    float average = 0;
    float sum = 0;
    for (int j = 0; j < 2; j++) {
      sum += grades[i][j];
    }
    average = sum / 2.0;
    printf("Average grades of group %d: %f\n", i, average);
  }

  return 0;
}
