#include <stdio.h>

int main() {

  //! Right-to-Left Associativity
  int a, b = 1, c = 2;

  a = b = c;

  printf("%d\n", a);
  //   All assignment-operators have right associativity. The associativity
  //   protocol says that this
  // means the rightmost operation in the expression is evaluated first, and
  // evaluation proceeds from right to left. Thus, the value of c is assigned to
  // b. Then the value of b is stored in a. a gets the value 2.

  //! Left-to-Right Associativity

  int result_one = 12 & 6 & 3;

  printf("%d\n", result_one);
  // it is (12&6) & 3. in binary, the result is 2.

  int result_two = 12 | 6 | 3;

  printf("%d\n", result_two);
  // it is (12|6) | 3. in binary, the result is 15.
}