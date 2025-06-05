// The function below (generate_initializer) will do a different action on its first invocation than on
// all subsequent calls. There are other ways of achieving this; this way
// minimizes the switches and conditional testing.

#include <stdio.h>

void generate_initializer(char *string);

int main() {

  for (int i = 1; i < 6; i++) {
    generate_initializer("Line");
    printf("-%d\n", i);
  }

  return 0;
}

void generate_initializer(char *string) {
  static char separator = '\v';
  printf("%c %s", separator, string);
  separator = ',';
}