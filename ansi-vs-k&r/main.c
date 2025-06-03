#include <stdio.h>

int main() {

  if (-1 < (unsigned char)1) {

    printf("-1 is Less than 1 \nThat's ANSI-C Approach\n");

  } else {

    printf("-1 is NOT Less than 1 \nThat's K&R-C Approach\n");
  }
}