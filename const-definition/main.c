#include <stdio.h>

int main() {
  const int limit = 10;

  const int *plimit = &limit;

  printf("%p\n", plimit);

  int i = 17;

  plimit = &i;

  printf("%p\n", plimit);
}