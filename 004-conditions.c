// Exercise from https://www.learn-c.org/
// gcc -Wall 04-conditions.c -o 004-conditions.out && ./004-conditions.out

#include <stdio.h>

void guessNumber(int number) {
  if (number == 555) {
    printf("Equal\n");
  }
  else if (number < 555) {
    printf("Smaller\n");
  }
  else {
    printf("Bigger\n");
  }
}


int main() {

  guessNumber(500);
  guessNumber(600);
  guessNumber(555);

  return 0;
}
