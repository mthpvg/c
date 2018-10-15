#include <stdio.h>
#include "./second.h"


int triple(int bar) {
  return bar * 3;
}

int main() {
  int a = 3;
  float b = 4.5;
  double c = 5.25;
  float sum;
  sum = a + b + c;
  printf("The sum of a, b, and c is %f.\n", sum);

  int average;
  int grades[2];
  grades[0] = 80;
  grades[1] = 90;
  average = (grades[0] + grades[1]) / 2;
  printf("The average of the 2 grades is: %d\n", average);

  int tab[2][3] = {
    {0, 1, 2},
    {3, 4, 5}
  };
  printf("Element 1,1 is %d.\n", tab[1][1]);

  int foo = 1;
  int bar = 2;
  if (foo < bar) {
    printf("foo is smaller than bar.\n");
  } else {
    printf("foo is greater than bar.\n");
  }

  int i;
  for (i = 0; i < 4; i++) {
    printf("%d\n", i);
  }

  char name[] = "John Smith";
  printf("%s\n", name);

  printf("%d\n", triple(2));

  printf("%d\n", addFive(3));

  return 0;
}
