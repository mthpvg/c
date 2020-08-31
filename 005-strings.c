// Exercise from https://www.learn-c.org/
// gcc -Wall 005-strings.c -o 005-strings.out && ./005-strings.out

#include <stdio.h>
// printf

#include <string.h>
// strlen strncmp strncpy


int main() {

  // Pointer notation (read-only)
  char * name0 = "Jane Doe";
  // Local array notation
  char hello[] = "Hello ";
  char name1[] = "John Smith";
  char name0Copy8[8];

  printf("Name0 is: %s and name1 is: %s.\n", name0, name1);

  if (strncmp("John Smith", name1, 10) == 0) {
    printf("Hello John\n");
  }

  strncat(hello, name0, strlen(name0));
  printf("%s\n", hello);

  strncpy(name0Copy8, name0, 8);
  printf("%s\n", name0Copy8);

  return 0;
}
