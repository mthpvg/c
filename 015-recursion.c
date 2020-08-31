// Exercise from https://www.learn-c.org/
// gcc -Wall 015-recursion.c -o 015-recursion.out && ./015-recursion.out

#include <stdio.h>

unsigned int factorial(unsigned int number) {
    if (number == 0) return 0;

    if (number == 1) {
        return number;
    } else {
        return number * factorial(number - 1);
    }
}

int main() {
    printf("%d\n", factorial(10));

  return 0;
}
