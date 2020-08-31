// Exercise from https://www.learn-c.org/
// gcc -Wall 011-structures.c -o 011-structures.out && ./011-structures.out

#include <stdio.h>


typedef struct {
  char * name;
  int age;
} person;

int main() {

  person jane;

  jane.name = "Jane Doe";
  jane.age = 42;
  printf("%s is %d years old.\n", jane.name, jane.age);

  return 0;
}
