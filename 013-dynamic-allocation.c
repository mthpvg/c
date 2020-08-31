// Exercise from https://www.learn-c.org/
// gcc -Wall 013-dynamic-allocation.c -o 013-dynamic-allocation.out && ./013-dynamic-allocation.out

#include <stdio.h>
#include <stdlib.h>
// free


typedef struct {
  int x;
  int y;
} point;

int main() {
  point * mypoint = NULL;

  mypoint = (point *)malloc(sizeof(point));
  
  mypoint->x = 10;
  mypoint->y = 5 ;
  printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y);

  free(mypoint);

  return 0;
}
