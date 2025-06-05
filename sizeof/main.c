//? can't be compiled !!

#include <stdio.h>
// #include <stdlib.h>

int multiplicate();

int main() {

  unsigned int *p;

  int a;

  a = sizeof(int) * p;
  // in this line we need to interprete which one of this meanings is correct??
  //  1- a is equal to sizeof int = 4 multiplied to p
  //  2- a is equal to sizeof a variable that is integar multiplies to p
  //  3- none of them ?

  printf("%d\n", a);
}

// this is what AI said about it :

// sizeof(int) * p is invalid because you're multiplying a number by a pointer,
// which leads to a type error. You should multiply sizeof(int) by an integer,
// not by a pointer.

int multiplicate() {

  p = N * sizeof *q;
  // in this line, how many multiplication exist? 1 or 2 ??

  r = malloc(p);
  // the answer is 1.
  // why?
  // because sizeof is an operator that here takes as its
  // operand the thing pointed to by q (i.e., *q). It returns the size in bytes
  // of the type of thing to which q points, convenient for the malloc function
  // to allocate more memory
}