#include <stddef.h>
#include <stdio.h>
#include <string.h>

int array[] = {23, 34, 12, 17, 204, 99, 16};
#define TOTAL_ELEMENTS (sizeof(array) / sizeof(array[0]))

#define type_of(x)                                                             \
  _Generic((x),                                                                \
      unsigned long: "unsigned long",                                          \
      unsigned int: "unsigned int",                                            \
      int: "int",                                                              \
      default: "unknown")

int main() {
  int d = -1, x;

  size_t total = TOTAL_ELEMENTS;

  printf("Type of TOTAL_ELEMENT is %s\n", type_of(total));

  printf("But BECAREFUL, value must have a type to check its Compatibility\n");

  printf("TOTAL_ELEMENTS = %zu\n", TOTAL_ELEMENTS);

  // the line below will occur some problems in complition
  //    if (d <= TOTAL_ELEMENTS - 2)

  // it would be fixed just by adding an int keyword immediately before
  // TOTAL_ELEMENT
  if (d <= (int)TOTAL_ELEMENTS - 2) {
    x = array[d + 1];
  }

  printf("x is equal to : %d\n", x);

  if (strcmp(type_of(total), type_of(d)) == 0) {
    printf("Types are Compatible\n");
  } else {
    printf("Types are NOT Compatible\n");
  }

  return 0;
}