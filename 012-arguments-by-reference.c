// Exercise from https://www.learn-c.org/
// gcc -Wall 012-arguments-by-reference.c -o 012-arguments-by-reference.out && ./012-arguments-by-reference.out

#include <stdio.h>


typedef struct {
  char * name;
  int age;
} person;

void birthday(person * p);

int main() {
  person john;
  john.name = "John";
  john.age = 27;

  printf("%s is %d years old.\n", john.name, john.age);
  birthday(&john);
  printf("Happy birthday! %s is now %d years old.\n", john.name, john.age);

  return 0;
}

void birthday(person * p) {
  (*p).age += 1;
  // Shorthand syntax: p->age += 1;
}
