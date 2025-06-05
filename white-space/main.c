int main() {

  // ! ---------- 1 -------------
  char a[] = "let this line continues"
             "to second line or more";
  // if we put white-space after \ in first line of a's definition, we'll get a
  // warninig

  // ! ---------- 2 -------------
  int x, y, z;
  z = y++ + x;
  // The programmer might have meant z = y + ++x, or equally could have had z =
  // y++ + x in mind. The ANSI standard specifies a convention that has come to
  // be known as the maximal munch strategy. Maximal munch says that if there's
  // more than one possibility for the next token, the compiler will prefer to
  // bite off the one involving the longest sequence of characters. So the above
  // example will be parsed as z = y++ + x.

  // ! ---------- 3 -------------
  /*

  int m, n, o;
  o = m+++++n;

  it will also cause error while compiler reads it like
  o = m++ ++ +n !!!
  even it can deduced that the only valid argument for spaces is :
                    o = m++ + ++n
  */

  // ! ---------- 4 -------------
  /*

  int *s, *t;

  //? int ratio = *s/*t ;

  Here the compiler issued an error message complaining of syntax error. The
  problem was the lack of space between the "/ " division operator and the "* "
  indirection operator. When put next to each other they opened a comment, and hid
  all the code up to the next closing comment!

  */
}